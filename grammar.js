/*
 * This file is heavily based on the Go tree-sitter grammar:
 * https://github.com/tree-sitter/tree-sitter-go/blob/v0.20.0/grammar.js
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const
  PREC = {
    primary: 7,
    unary: 6,
    multiplicative: 5,
    additive: 4,
    comparative: 3,
    and: 2,
    or: 1,
    composite_literal: -1,
  },

  //comparative_operators = ['==', '!=', '<', '<=', '>', '>='],
  assignment_operators = ['=', '*=', '-=', '+=', '/='],

  newline = '\n',
  terminator = choice(newline, ';', '\0'),

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,

  hexDigits = repeat1(hexDigit),
  octalDigits = repeat1(octalDigit),
  decimalDigits = repeat1(decimalDigit),

  hexLiteral = seq('0', choice('x', 'X'), hexDigits),
  octalLiteral = seq('0', octalDigits),
  decimalLiteral = choice('0', decimalDigits),

  intLiteral = choice(decimalLiteral, octalLiteral, hexLiteral),

  floatLiteral = choice(
    seq(decimalDigits, '.', optional(decimalDigits)),
    seq('.', decimalDigits),
  );

module.exports = grammar({
  name: 'risor',

  extras: $ => [
    $.comment,
    /[\s\u00A0\uFEFF\u3000]+/,
  ],

  inline: $ => [
    $._field_identifier,
    $._string_literal,
  ],

  word: $ => $.identifier,

  supertypes: $ => [
    $._expression,
    $._statement,
  ],

  rules: {
    source_file: $ => repeat(choice(
      seq($._statement, terminator),
      $._definition,
    )),

    _definition: $ => choice(
      $.function_declaration,
      // TODO: other kinds of definitions
    ),

    function_declaration: $ => prec.right(1, seq(
      'func',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('body', $.block)
    )),

    parameter_list: $ => seq(
      '(',
      commaSepTrailing($._parameter_declaration),
      ')'
    ),

    _parameter_declaration: $ => prec.left(choice(
      $.parameter_declaration,
      $.parameter_declaration_default,
    )),

    parameter_declaration: $ => field('name', $.identifier),

    parameter_declaration_default: $ => seq(
      field('name', $.identifier),
      '=',
      field('default', $._expression),
    ),

    _type: _ => choice(
      'bool'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}'
    ),

    _statement_list: $ => seq(
      $._statement,
      repeat(seq(terminator, $._statement)),
      optional(terminator),
    ),

    _statement: $ => choice(
      $._declaration,
      $.expression_statement,
      $.assignment_statement,
      $.return_statement,
      $.if_statement,
      $.for_statement,
      $.switch_statement,
      // TODO: other kinds of statements
    ),

    _declaration: $ => choice(
      $.const_declaration,
      $.var_declaration,
      $.short_var_declaration,
    ),

    const_declaration: $ => seq(
      'const',
      field('name', $.expression_list),
      '=',
      field('value', $._expression),
    ),

    var_declaration: $ => seq(
      'var',
      field('name', $.expression_list),
      '=',
      field('value', $._expression),
    ),

    short_var_declaration: $ => seq(
      field('left', $.expression_list),
      ':=',
      field('right', $._expression),
    ),

    assignment_statement: $ => seq(
      field('left', $.expression_list),
      field('operator', choice(...assignment_operators)),
      field('right', $._expression),
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
      field('consequence', $.block),
      optional(seq(
        'else',
        field('alternative', choice($.block, $.if_statement)),
      )),
    ),

    for_statement: $ => seq(
      'for',
      optional(choice($._expression, $.for_clause, $.range_clause)),
      field('body', $.block),
    ),

    for_clause: $ => seq(
      field('initializer', optional($._statement)),
      ';',
      field('condition', optional($._expression)),
      ';',
      field('update', optional($._statement)),
    ),

    range_clause: $ => seq(
      // In contrast to Go, Risor supports this:
      // for var x = range [1, 2, 3]
      field('left', choice(
        seq('const', $.expression_list, '='),
        seq('var', $.expression_list, '='),
        seq($.expression_list, ':='),
      )),
      'range',
      field('right', $._expression),
    ),

    switch_statement: $ => seq(
      'switch',
      field('value', optional($._expression)),
      '{',
      repeat(choice($.switch_case, $.default_case)),
      '}',
    ),

    switch_case: $ => seq(
      'case',
      field('value', $.expression_list),
      ':',
      optional($._statement_list),
    ),

    default_case: $ => seq(
      'default',
      ':',
      optional($._statement_list),
    ),

    expression_statement: $ => $._expression,

    _expression: $ => choice(
      $.selector_expression,
      $.index_expression,
      $.call_expression,
      $.identifier,
      $._string_literal,
      $.int_literal,
      $.float_literal,
      $.nil,
      $.true,
      $.false,
      $.parenthesized_expression,
    ),

    selector_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '.',
      field('field', $._field_identifier),
    )),

    index_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      field('index', $._expression),
      ']',
    )),

    expression_list: $ => commaSep1($._expression),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')',
    ),

    call_expression: $ => prec(PREC.primary, seq(
      field('function', $._expression),
      field('arguments', $.argument_list),
    )),

    argument_list: $ => seq(
      '(',
      commaSepTrailing($._expression),
      ')',
    ),

    identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    _field_identifier: $ => alias($.identifier, $.field_identifier),

    _string_literal: $ => choice(
      $.string,
      $.string_template,
      $.string_backtick,
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        $._string_non_escaped_content,
        $.escape_sequence,
      )),
      token.immediate('"'),
    ),
    _string_non_escaped_content: _ => token.immediate(prec(1, /[^"\n\\]/)),

    string_template: $ => seq(
      "'",
      repeat(choice(
        $.string_template_plain,
        $.escape_sequence,
        $.string_template_argument,
      )),
      token.immediate("'"),
    ),
    string_template_plain: _ => token.immediate(repeat1(prec(1, /[^'\n\\{]/))),

    escape_sequence: $ => choice(
      token.immediate(choice(
        /\\[abfnrtve]/,
        /\\[0-3][0-7][0-7]/,
        /\\x[0-9a-fA-F]{2}/,
        /\\u[0-9a-fA-F]{4}/,
        /\\U[0-9a-fA-F]{8}/,
      )),
      $.escape_sequence_invalid,
    ),

    escape_sequence_invalid: _ => token.immediate(choice(
      /\\[^abfnrtvexuU0-3]/,
      /\\[0-3].{0,2}/,
      /\\x.{0,2}/,
      /\\u.{0,4}/,
      /\\U.{0,8}/,
    )),

    string_template_argument: $ => seq(
      '{',
      $._expression,
      '}',
    ),

    string_backtick: _ => token(seq(
      '`',
      repeat(/[^`]/),
      '`',
    )),

    int_literal: _ => token(intLiteral),

    float_literal: _ => token(floatLiteral),

    nil: _ => 'nil',
    true: _ => 'true',
    false: _ => 'false',

    // Copied from tree-sitter-c-sharp
    // https://github.com/tree-sitter/tree-sitter-c-sharp/blob/dd5e59721a5f8dae34604060833902b882023aaf/grammar.js#L1808-L1815
    comment: _ => token(choice(
      seq('#', /[^\r\n]*/),
      seq('//', /[^\r\n]*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma,
 * and allowing a trailing comma at the end.
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSepTrailing(rule) {
  return optional(seq(
    commaSep(rule),
    optional(','),
  ));
}
