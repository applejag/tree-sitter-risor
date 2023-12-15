/*
 * This file is heavily based on the Go tree-sitter grammar:
 * https://github.com/tree-sitter/tree-sitter-go/blob/v0.20.0/grammar.js
 */

const
  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,

  hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
  octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
  binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),

  hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
  octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
  decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
  binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

  intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral);

  decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits),
  decimalFloatLiteral = choice(
    seq(decimalDigits, '.', optional(decimalDigits), optional(decimalExponent)),
    seq(decimalDigits, decimalExponent),
    seq('.', decimalDigits, optional(decimalExponent)),
  ),

  hexExponent = seq(choice('p', 'P'), optional(choice('+', '-')), decimalDigits),
  hexMantissa = choice(
    seq(optional('_'), hexDigits, '.', optional(hexDigits)),
    seq(optional('_'), hexDigits),
    seq('.', hexDigits),
  ),
  hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent),

  floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral),

  imaginaryLiteral = seq(choice(decimalDigits, intLiteral, floatLiteral), 'i');

module.exports = grammar({
  name: 'risor',

  extras: $ => [
    $.comment,
    /[\s\u00A0\uFEFF\u3000]+/,
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat(choice(
      $._expression,
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
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      'bool'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement,
      $._expression,
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
    ),

    _expression: $ => choice(
      $.identifier,
      $._string_literal,
      $.int_literal,
      $.float_literal,
      $.parenthesized_expression,
      // TODO: other kinds of expressions
    ),

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
