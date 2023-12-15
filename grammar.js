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

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,

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

  word: $ => $.identifier,

  supertypes: $ => [
    $._expression,
    $._statement,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $._statement,
      $._definition,
    )),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'func',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('body', $.block)
    ),

    parameter_list: $ => seq(
      '(',
      optional(seq(
        commaSep($._parameter_declaration),
        optional(','),
      )),
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
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $._declaration,
      $.assignment_statement,
      $.expression_statement,
      $.return_statement,
      // TODO: other kinds of statements
    ),

    _declaration: $ => choice(
      $.const_declaration,
      $.var_declaration,
      $.short_var_declaration,
    ),

    const_declaration: $ => seq(
      'const',
      field('name', $.identifier),
      '=',
      field('value', $._expression),
    ),

    var_declaration: $ => seq(
      'var',
      field('name', $.identifier),
      '=',
      field('value', $._expression),
    ),

    short_var_declaration: $ => seq(
      field('left', $.identifier),
      ':=',
      field('right', $._expression),
    ),

    assignment_statement: $ => seq(
      field('left', $._expression),
      optional($.assignment_statement_index),
      field('operator', choice(...assignment_operators)),
      field('right', $._expression),
    ),

    assignment_statement_index: $ => seq(
      '[',
      field('index', $._expression),
      ']',
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
    ),

    expression_statement: $ => $._expression,

    _expression: $ => choice(
      $.index_expression,
      $.identifier,
      $._string_literal,
      $.int_literal,
      $.float_literal,
      // TODO: other kinds of expressions
      $.nil,
      $.true,
      $.false,
      $.parenthesized_expression,
    ),

    index_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      field('index', $._expression),
      ']',
    )),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')',
    ),

    identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

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

    escape_sequence: _ => token.immediate(choice(
      /\\[^xuU]/,
      /\\\d{2,3}/,
      /\\x[0-9a-fA-F]{2,}/,
      /\\u[0-9a-fA-F]{4}/,
      /\\U[0-9a-fA-F]{8}/,
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
