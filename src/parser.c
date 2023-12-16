#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 356
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 1
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 25

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_ = 4,
  anon_sym_func = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ = 9,
  anon_sym_bool = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_const = 13,
  anon_sym_var = 14,
  anon_sym_COLON_EQ = 15,
  anon_sym_PLUS_PLUS = 16,
  anon_sym_DASH_DASH = 17,
  anon_sym_STAR_EQ = 18,
  anon_sym_DASH_EQ = 19,
  anon_sym_PLUS_EQ = 20,
  anon_sym_SLASH_EQ = 21,
  anon_sym_break = 22,
  anon_sym_continue = 23,
  anon_sym_return = 24,
  anon_sym_if = 25,
  anon_sym_else = 26,
  anon_sym_for = 27,
  anon_sym_range = 28,
  anon_sym_switch = 29,
  anon_sym_case = 30,
  anon_sym_COLON = 31,
  anon_sym_default = 32,
  anon_sym_DOT = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_BANG = 38,
  anon_sym_CARET = 39,
  anon_sym_STAR = 40,
  anon_sym_AMP = 41,
  anon_sym_LT_DASH = 42,
  anon_sym_SLASH = 43,
  anon_sym_STAR_STAR = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_PIPE = 48,
  anon_sym_EQ_EQ = 49,
  anon_sym_BANG_EQ = 50,
  anon_sym_LT = 51,
  anon_sym_LT_EQ = 52,
  anon_sym_GT = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_AMP_AMP = 55,
  anon_sym_PIPE_PIPE = 56,
  anon_sym_DQUOTE = 57,
  anon_sym_DQUOTE2 = 58,
  sym__string_non_escaped_content = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_SQUOTE2 = 61,
  sym_string_template_char = 62,
  aux_sym_escape_sequence_token1 = 63,
  sym_escape_sequence_invalid = 64,
  sym_format_sequence = 65,
  sym_string_backtick = 66,
  sym_int_literal = 67,
  sym_float_literal = 68,
  sym_nil = 69,
  sym_true = 70,
  sym_false = 71,
  sym_comment = 72,
  sym_source_file = 73,
  sym__definition = 74,
  sym_function_declaration = 75,
  sym_parameter_list = 76,
  sym__parameter_declaration = 77,
  sym_parameter_declaration = 78,
  sym_parameter_declaration_default = 79,
  sym_block = 80,
  sym__statement_list = 81,
  sym__statement = 82,
  sym__simple_statement = 83,
  sym__declaration = 84,
  sym_const_declaration = 85,
  sym_var_declaration = 86,
  sym_short_var_declaration = 87,
  sym_inc_statement = 88,
  sym_dec_statement = 89,
  sym_assignment_statement = 90,
  sym_break_statement = 91,
  sym_continue_statement = 92,
  sym_return_statement = 93,
  sym_if_statement = 94,
  sym_for_statement = 95,
  sym_for_clause = 96,
  sym_range_clause = 97,
  sym_switch_statement = 98,
  sym_switch_case = 99,
  sym_default_case = 100,
  sym_expression_statement = 101,
  sym__expression = 102,
  sym_selector_expression = 103,
  sym_index_expression = 104,
  sym_expression_list = 105,
  sym_parenthesized_expression = 106,
  sym_call_expression = 107,
  sym_argument_list = 108,
  sym__complex_literal = 109,
  sym_list_literal = 110,
  sym_set_literal = 111,
  sym_unary_expression = 112,
  sym_binary_expression = 113,
  sym_string = 114,
  sym_string_template = 115,
  sym_escape_sequence = 116,
  sym_string_template_argument = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_parameter_list_repeat1 = 119,
  aux_sym__statement_list_repeat1 = 120,
  aux_sym_switch_statement_repeat1 = 121,
  aux_sym_expression_list_repeat1 = 122,
  aux_sym_string_repeat1 = 123,
  aux_sym_string_template_repeat1 = 124,
  alias_sym_field_identifier = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_range] = "range",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__string_non_escaped_content] = "_string_non_escaped_content",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym_string_template_char] = "string_template_char",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_escape_sequence_invalid] = "escape_sequence_invalid",
  [sym_format_sequence] = "format_sequence",
  [sym_string_backtick] = "string_backtick",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter_declaration] = "_parameter_declaration",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parameter_declaration_default] = "parameter_declaration_default",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__declaration] = "_declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym_short_var_declaration] = "short_var_declaration",
  [sym_inc_statement] = "inc_statement",
  [sym_dec_statement] = "dec_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_clause] = "for_clause",
  [sym_range_clause] = "range_clause",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_case] = "switch_case",
  [sym_default_case] = "default_case",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_index_expression] = "index_expression",
  [sym_expression_list] = "expression_list",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym__complex_literal] = "_complex_literal",
  [sym_list_literal] = "list_literal",
  [sym_set_literal] = "set_literal",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym_string_template] = "string_template",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_template_argument] = "string_template_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_template_repeat1] = "string_template_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__string_non_escaped_content] = sym__string_non_escaped_content,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_string_template_char] = sym_string_template_char,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_escape_sequence_invalid] = sym_escape_sequence_invalid,
  [sym_format_sequence] = sym_format_sequence,
  [sym_string_backtick] = sym_string_backtick,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_nil] = sym_nil,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter_declaration] = sym__parameter_declaration,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_parameter_declaration_default] = sym_parameter_declaration_default,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__declaration] = sym__declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym_short_var_declaration] = sym_short_var_declaration,
  [sym_inc_statement] = sym_inc_statement,
  [sym_dec_statement] = sym_dec_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_clause] = sym_for_clause,
  [sym_range_clause] = sym_range_clause,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_case] = sym_switch_case,
  [sym_default_case] = sym_default_case,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_index_expression] = sym_index_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__complex_literal] = sym__complex_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_set_literal] = sym_set_literal,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym_string_template] = sym_string_template,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_template_argument] = sym_string_template_argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_template_repeat1] = aux_sym_string_template_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__string_non_escaped_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_string_template_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence_invalid] = {
    .visible = true,
    .named = true,
  },
  [sym_format_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_backtick] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_default] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_short_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_range_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_case] = {
    .visible = true,
    .named = true,
  },
  [sym_default_case] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__complex_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_set_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_template] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_template_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_default = 6,
  field_field = 7,
  field_function = 8,
  field_index = 9,
  field_initializer = 10,
  field_left = 11,
  field_name = 12,
  field_operand = 13,
  field_operator = 14,
  field_parameters = 15,
  field_right = 16,
  field_update = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_default] = "default",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 3},
  [22] = {.index = 39, .length = 2},
  [23] = {.index = 41, .length = 4},
  [24] = {.index = 45, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_operand, 1},
    {field_operator, 0},
  [3] =
    {field_arguments, 1},
    {field_function, 0},
  [5] =
    {field_condition, 1},
    {field_consequence, 2},
  [7] =
    {field_body, 2},
  [8] =
    {field_field, 2},
    {field_operand, 0},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_left, 0},
    {field_right, 2},
  [15] =
    {field_name, 0},
  [16] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_update, 2},
  [22] =
    {field_condition, 1},
  [23] =
    {field_initializer, 0},
  [24] =
    {field_value, 1},
  [25] =
    {field_index, 2},
    {field_operand, 0},
  [27] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [30] =
    {field_condition, 1},
    {field_update, 3},
  [32] =
    {field_initializer, 0},
    {field_update, 3},
  [34] =
    {field_condition, 2},
    {field_initializer, 0},
  [36] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [39] =
    {field_default, 2},
    {field_name, 0},
  [41] =
    {field_left, 0},
    {field_left, 1},
    {field_left, 2},
    {field_right, 4},
  [45] =
    {field_condition, 2},
    {field_initializer, 0},
    {field_update, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [2] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 20,
  [49] = 21,
  [50] = 26,
  [51] = 25,
  [52] = 24,
  [53] = 23,
  [54] = 44,
  [55] = 27,
  [56] = 40,
  [57] = 57,
  [58] = 37,
  [59] = 31,
  [60] = 32,
  [61] = 36,
  [62] = 39,
  [63] = 38,
  [64] = 57,
  [65] = 57,
  [66] = 43,
  [67] = 42,
  [68] = 57,
  [69] = 46,
  [70] = 28,
  [71] = 45,
  [72] = 33,
  [73] = 34,
  [74] = 41,
  [75] = 29,
  [76] = 35,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 17,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 78,
  [85] = 85,
  [86] = 85,
  [87] = 23,
  [88] = 24,
  [89] = 89,
  [90] = 25,
  [91] = 91,
  [92] = 26,
  [93] = 20,
  [94] = 94,
  [95] = 82,
  [96] = 79,
  [97] = 79,
  [98] = 85,
  [99] = 94,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 78,
  [104] = 94,
  [105] = 105,
  [106] = 78,
  [107] = 79,
  [108] = 85,
  [109] = 94,
  [110] = 110,
  [111] = 111,
  [112] = 21,
  [113] = 113,
  [114] = 34,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 46,
  [119] = 119,
  [120] = 41,
  [121] = 113,
  [122] = 31,
  [123] = 44,
  [124] = 29,
  [125] = 45,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 115,
  [131] = 116,
  [132] = 117,
  [133] = 116,
  [134] = 42,
  [135] = 117,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 115,
  [142] = 128,
  [143] = 36,
  [144] = 139,
  [145] = 126,
  [146] = 32,
  [147] = 28,
  [148] = 128,
  [149] = 149,
  [150] = 150,
  [151] = 33,
  [152] = 127,
  [153] = 126,
  [154] = 35,
  [155] = 137,
  [156] = 39,
  [157] = 113,
  [158] = 158,
  [159] = 40,
  [160] = 43,
  [161] = 119,
  [162] = 149,
  [163] = 119,
  [164] = 149,
  [165] = 119,
  [166] = 27,
  [167] = 113,
  [168] = 38,
  [169] = 169,
  [170] = 126,
  [171] = 128,
  [172] = 172,
  [173] = 115,
  [174] = 116,
  [175] = 117,
  [176] = 149,
  [177] = 37,
  [178] = 140,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 26,
  [185] = 21,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 23,
  [191] = 24,
  [192] = 25,
  [193] = 20,
  [194] = 194,
  [195] = 39,
  [196] = 40,
  [197] = 42,
  [198] = 35,
  [199] = 34,
  [200] = 41,
  [201] = 33,
  [202] = 31,
  [203] = 32,
  [204] = 36,
  [205] = 43,
  [206] = 27,
  [207] = 38,
  [208] = 46,
  [209] = 28,
  [210] = 37,
  [211] = 44,
  [212] = 29,
  [213] = 45,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 216,
  [218] = 216,
  [219] = 215,
  [220] = 220,
  [221] = 215,
  [222] = 215,
  [223] = 216,
  [224] = 220,
  [225] = 220,
  [226] = 220,
  [227] = 187,
  [228] = 189,
  [229] = 188,
  [230] = 230,
  [231] = 231,
  [232] = 186,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 234,
  [237] = 237,
  [238] = 238,
  [239] = 233,
  [240] = 233,
  [241] = 241,
  [242] = 234,
  [243] = 234,
  [244] = 244,
  [245] = 245,
  [246] = 233,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 248,
  [252] = 252,
  [253] = 253,
  [254] = 248,
  [255] = 248,
  [256] = 249,
  [257] = 249,
  [258] = 249,
  [259] = 259,
  [260] = 182,
  [261] = 261,
  [262] = 179,
  [263] = 259,
  [264] = 261,
  [265] = 261,
  [266] = 266,
  [267] = 267,
  [268] = 259,
  [269] = 269,
  [270] = 261,
  [271] = 259,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 274,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 283,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 301,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 301,
  [308] = 301,
  [309] = 309,
  [310] = 302,
  [311] = 311,
  [312] = 312,
  [313] = 309,
  [314] = 314,
  [315] = 315,
  [316] = 309,
  [317] = 302,
  [318] = 309,
  [319] = 302,
  [320] = 291,
  [321] = 321,
  [322] = 292,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 334,
  [339] = 334,
  [340] = 336,
  [341] = 330,
  [342] = 342,
  [343] = 336,
  [344] = 336,
  [345] = 345,
  [346] = 346,
  [347] = 327,
  [348] = 332,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 334,
  [354] = 354,
  [355] = 355,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'A' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_format_sequence_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'O'
      ? (c < 'E'
        ? c == '%'
        : c <= 'G')
      : (c <= 'O' || (c < 'X'
        ? (c >= 'T' && c <= 'U')
        : c <= 'X')))
    : (c <= 'g' || (c < 'v'
      ? (c < 's'
        ? (c >= 'o' && c <= 'q')
        : c <= 't')
      : (c <= 'v' || c == 'x'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(99);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '[') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(104);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == '[') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 34:
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string_template_char);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string_template_char);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_format_sequence);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string_backtick);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 37},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 37},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 37},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 37},
  [129] = {.lex_state = 37},
  [130] = {.lex_state = 37},
  [131] = {.lex_state = 37},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 37},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 37},
  [136] = {.lex_state = 37},
  [137] = {.lex_state = 37},
  [138] = {.lex_state = 37},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 37},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 37},
  [145] = {.lex_state = 37},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 37},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 37},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 37},
  [163] = {.lex_state = 37},
  [164] = {.lex_state = 37},
  [165] = {.lex_state = 37},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 37},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 37},
  [174] = {.lex_state = 37},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 37},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 37},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 37},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 37},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 37},
  [281] = {.lex_state = 37},
  [282] = {.lex_state = 37},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 37},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 37},
  [299] = {.lex_state = 37},
  [300] = {.lex_state = 37},
  [301] = {.lex_state = 37},
  [302] = {.lex_state = 37},
  [303] = {.lex_state = 37},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 37},
  [306] = {.lex_state = 37},
  [307] = {.lex_state = 37},
  [308] = {.lex_state = 37},
  [309] = {.lex_state = 37},
  [310] = {.lex_state = 37},
  [311] = {.lex_state = 37},
  [312] = {.lex_state = 37},
  [313] = {.lex_state = 37},
  [314] = {.lex_state = 37},
  [315] = {.lex_state = 37},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 37},
  [318] = {.lex_state = 37},
  [319] = {.lex_state = 37},
  [320] = {.lex_state = 37},
  [321] = {.lex_state = 37},
  [322] = {.lex_state = 37},
  [323] = {.lex_state = 37},
  [324] = {.lex_state = 37},
  [325] = {.lex_state = 37},
  [326] = {.lex_state = 37},
  [327] = {.lex_state = 37},
  [328] = {.lex_state = 37},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 37},
  [331] = {.lex_state = 37},
  [332] = {.lex_state = 37},
  [333] = {.lex_state = 37},
  [334] = {.lex_state = 37},
  [335] = {.lex_state = 37},
  [336] = {.lex_state = 37},
  [337] = {.lex_state = 37},
  [338] = {.lex_state = 37},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 37},
  [341] = {.lex_state = 37},
  [342] = {.lex_state = 37},
  [343] = {.lex_state = 37},
  [344] = {.lex_state = 37},
  [345] = {.lex_state = 37},
  [346] = {.lex_state = 37},
  [347] = {.lex_state = 37},
  [348] = {.lex_state = 37},
  [349] = {.lex_state = 37},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 37},
  [352] = {.lex_state = 37},
  [353] = {.lex_state = 37},
  [354] = {.lex_state = 37},
  [355] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [sym_escape_sequence_invalid] = ACTIONS(1),
    [sym_string_backtick] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(351),
    [sym__definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym__statement] = STATE(304),
    [sym__simple_statement] = STATE(288),
    [sym__declaration] = STATE(288),
    [sym_const_declaration] = STATE(288),
    [sym_var_declaration] = STATE(288),
    [sym_short_var_declaration] = STATE(288),
    [sym_inc_statement] = STATE(288),
    [sym_dec_statement] = STATE(288),
    [sym_assignment_statement] = STATE(288),
    [sym_break_statement] = STATE(288),
    [sym_continue_statement] = STATE(288),
    [sym_return_statement] = STATE(288),
    [sym_if_statement] = STATE(288),
    [sym_for_statement] = STATE(288),
    [sym_switch_statement] = STATE(288),
    [sym_expression_statement] = STATE(288),
    [sym__expression] = STATE(17),
    [sym_selector_expression] = STATE(45),
    [sym_index_expression] = STATE(45),
    [sym_expression_list] = STATE(286),
    [sym_parenthesized_expression] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym__complex_literal] = STATE(45),
    [sym_list_literal] = STATE(45),
    [sym_set_literal] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_string] = STATE(45),
    [sym_string_template] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_LT_DASH] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_string_backtick] = ACTIONS(39),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(39),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(60), 1,
      anon_sym_var,
    ACTIONS(63), 1,
      anon_sym_break,
    ACTIONS(66), 1,
      anon_sym_continue,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(72), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_for,
    ACTIONS(78), 1,
      anon_sym_switch,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym__expression,
    STATE(286), 1,
      sym_expression_list,
    STATE(304), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(2), 3,
      sym__definition,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(45), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(84), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [113] = 25,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym__expression,
    STATE(286), 1,
      sym_expression_list,
    STATE(304), 1,
      sym__statement,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(2), 3,
      sym__definition,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [226] = 25,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__expression,
    STATE(273), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    STATE(315), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(100), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [338] = 25,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__expression,
    STATE(273), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    STATE(312), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(104), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [450] = 24,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__expression,
    STATE(285), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(108), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [559] = 24,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__expression,
    STATE(285), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(112), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [668] = 24,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__expression,
    STATE(273), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    STATE(341), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [776] = 24,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__expression,
    STATE(273), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    STATE(341), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [884] = 24,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__expression,
    STATE(273), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    STATE(330), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [992] = 22,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_continue,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_switch,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(17), 1,
      sym__expression,
    STATE(285), 1,
      sym__statement,
    STATE(286), 1,
      sym_expression_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(288), 15,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1094] = 18,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_const,
    ACTIONS(130), 1,
      anon_sym_var,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym__expression,
    STATE(275), 1,
      sym_block,
    STATE(290), 1,
      sym_expression_list,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(325), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(349), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1179] = 15,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_const,
    ACTIONS(146), 1,
      anon_sym_var,
    STATE(80), 1,
      sym__expression,
    STATE(274), 1,
      sym_expression_list,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(354), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1254] = 15,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_const,
    ACTIONS(146), 1,
      anon_sym_var,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__expression,
    STATE(274), 1,
      sym_expression_list,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(352), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1329] = 15,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_const,
    ACTIONS(146), 1,
      anon_sym_var,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__expression,
    STATE(274), 1,
      sym_expression_list,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(342), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1404] = 15,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_const,
    ACTIONS(146), 1,
      anon_sym_var,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__expression,
    STATE(274), 1,
      sym_expression_list,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(331), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1479] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH_DASH,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_AMP_AMP,
    ACTIONS(180), 1,
      anon_sym_PIPE_PIPE,
    STATE(36), 1,
      sym_argument_list,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(172), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(156), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(162), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(176), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1552] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym__expression,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(182), 7,
      sym_identifier,
      sym_string_backtick,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(194), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1615] = 15,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_case,
    ACTIONS(210), 1,
      anon_sym_default,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(222), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(281), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1684] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1738] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(228), 31,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(234), 4,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(232), 31,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1836] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(172), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(176), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(224), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
  [1896] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(172), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(176), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(224), 16,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1954] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(172), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 22,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2010] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(224), 31,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(232), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2191] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH_DASH,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_AMP_AMP,
    ACTIONS(180), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_argument_list,
    STATE(253), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(156), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(172), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(162), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(176), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 34,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2952] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(322), 1,
      anon_sym_DASH_DASH,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_AMP_AMP,
    ACTIONS(340), 1,
      anon_sym_PIPE_PIPE,
    STATE(143), 1,
      sym_argument_list,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    STATE(279), 1,
      sym_block,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(332), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(334), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(318), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3030] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(348), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(350), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 7,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3084] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(228), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(224), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3184] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(348), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(224), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(350), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(222), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3240] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(224), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(348), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(350), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(222), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(224), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(348), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(350), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(222), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(236), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3485] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3792] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3853] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3996] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4385] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_range,
    STATE(228), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4443] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4501] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4559] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(322), 1,
      anon_sym_DASH_DASH,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_AMP_AMP,
    ACTIONS(340), 1,
      anon_sym_PIPE_PIPE,
    STATE(143), 1,
      sym_argument_list,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(332), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(334), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(318), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [4631] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(327), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4689] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(332), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4747] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(347), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4805] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4863] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4921] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4979] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_AMP_AMP,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(332), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(334), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(222), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_PIPE,
  [5039] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(332), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(334), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(222), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5097] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5155] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(332), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(222), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5209] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(350), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5267] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(224), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 6,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5367] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5425] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(348), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5483] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5541] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5599] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5657] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5715] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5773] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(337), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5831] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    STATE(328), 1,
      sym_expression_list,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5889] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5947] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6005] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(348), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(408), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(350), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(406), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [6067] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6125] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6183] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6241] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6299] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(420), 1,
      anon_sym_range,
    STATE(232), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6357] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(420), 1,
      anon_sym_range,
    STATE(227), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6415] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(228), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6463] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6557] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__expression,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6612] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__expression,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6667] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__expression,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6761] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6855] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7066] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7121] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7176] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7231] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7286] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(192), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7341] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(184), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7396] = 11,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(20), 1,
      sym__expression,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7451] = 11,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(26), 1,
      sym__expression,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7545] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7600] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7655] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7710] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(245), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7765] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7820] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7875] = 11,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(25), 1,
      sym__expression,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7930] = 11,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(24), 1,
      sym__expression,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8024] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8079] = 11,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(23), 1,
      sym__expression,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8212] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__expression,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8267] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8322] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8416] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8471] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym__expression,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8565] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8659] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym__expression,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(120), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(125), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8714] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8847] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8902] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(233), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8957] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9012] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(240), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9067] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(236), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9161] = 11,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(21), 1,
      sym__expression,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(45), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9255] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9310] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9365] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9420] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9475] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9530] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9585] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9640] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(246), 1,
      sym__expression,
    ACTIONS(220), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(200), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(214), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(71), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9734] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym__expression,
    ACTIONS(434), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(182), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(213), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9789] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(442), 14,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(440), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [9826] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(444), 14,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(43), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [9863] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(448), 14,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(446), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [9900] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(234), 14,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(230), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [9937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(232), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(224), 22,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(228), 22,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10060] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(462), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10113] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(476), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10166] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(478), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(480), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10219] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(482), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(484), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10272] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(224), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10323] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(224), 7,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10372] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 13,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10419] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 16,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10464] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_argument_list,
    ACTIONS(464), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(488), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(466), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(468), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(232), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11163] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11224] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_argument_list,
    STATE(317), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11282] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    STATE(303), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11340] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    STATE(301), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11398] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    STATE(308), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11456] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_argument_list,
    STATE(302), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11514] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    STATE(316), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11572] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_argument_list,
    STATE(319), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11630] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_argument_list,
    STATE(310), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11688] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    STATE(307), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11746] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    STATE(318), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11804] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    STATE(309), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11862] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    STATE(313), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11920] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11973] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12026] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12079] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12132] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    STATE(272), 1,
      sym_block,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12187] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12240] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12292] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12344] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12396] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12448] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12500] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12552] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12604] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12656] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12708] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12760] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12812] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12864] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12916] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(410), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_argument_list,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12968] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(406), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [12992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      anon_sym_SQUOTE2,
    ACTIONS(561), 1,
      sym_string_template_char,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(567), 1,
      sym_format_sequence,
    STATE(252), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(569), 1,
      anon_sym_SQUOTE2,
    ACTIONS(571), 1,
      sym_string_template_char,
    ACTIONS(573), 1,
      sym_format_sequence,
    STATE(255), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13046] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(575), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13067] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_string_template_char,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(567), 1,
      sym_format_sequence,
    ACTIONS(579), 1,
      anon_sym_SQUOTE2,
    STATE(252), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13094] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      anon_sym_SQUOTE2,
    ACTIONS(586), 1,
      sym_string_template_char,
    ACTIONS(589), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(592), 1,
      sym_escape_sequence_invalid,
    ACTIONS(595), 1,
      sym_format_sequence,
    STATE(252), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13121] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(575), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_string_template_char,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(567), 1,
      sym_format_sequence,
    ACTIONS(600), 1,
      anon_sym_SQUOTE2,
    STATE(252), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13169] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_string_template_char,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(567), 1,
      sym_format_sequence,
    ACTIONS(602), 1,
      anon_sym_SQUOTE2,
    STATE(252), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(604), 1,
      anon_sym_SQUOTE2,
    ACTIONS(606), 1,
      sym_string_template_char,
    ACTIONS(608), 1,
      sym_format_sequence,
    STATE(254), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(610), 1,
      anon_sym_SQUOTE2,
    ACTIONS(612), 1,
      sym_string_template_char,
    ACTIONS(614), 1,
      sym_format_sequence,
    STATE(251), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13250] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(565), 1,
      sym_escape_sequence_invalid,
    ACTIONS(616), 1,
      anon_sym_SQUOTE2,
    ACTIONS(618), 1,
      sym_string_template_char,
    ACTIONS(620), 1,
      sym_format_sequence,
    STATE(248), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13277] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DQUOTE2,
    ACTIONS(624), 1,
      sym__string_non_escaped_content,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(630), 1,
      sym_format_sequence,
    STATE(266), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(234), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [13315] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(632), 1,
      anon_sym_DQUOTE2,
    ACTIONS(634), 1,
      sym__string_non_escaped_content,
    ACTIONS(636), 1,
      sym_format_sequence,
    STATE(268), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(442), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [13353] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__string_non_escaped_content,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(630), 1,
      sym_format_sequence,
    ACTIONS(638), 1,
      anon_sym_DQUOTE2,
    STATE(266), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13376] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(640), 1,
      anon_sym_DQUOTE2,
    ACTIONS(642), 1,
      sym__string_non_escaped_content,
    ACTIONS(644), 1,
      sym_format_sequence,
    STATE(271), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13399] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(646), 1,
      anon_sym_DQUOTE2,
    ACTIONS(648), 1,
      sym__string_non_escaped_content,
    ACTIONS(650), 1,
      sym_format_sequence,
    STATE(259), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13422] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_DQUOTE2,
    ACTIONS(654), 1,
      sym__string_non_escaped_content,
    ACTIONS(657), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(660), 1,
      sym_escape_sequence_invalid,
    ACTIONS(663), 1,
      sym_format_sequence,
    STATE(266), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(269), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(668), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13464] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__string_non_escaped_content,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(630), 1,
      sym_format_sequence,
    ACTIONS(670), 1,
      anon_sym_DQUOTE2,
    STATE(266), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LF,
    STATE(269), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(675), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(678), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(680), 1,
      anon_sym_DQUOTE2,
    ACTIONS(682), 1,
      sym__string_non_escaped_content,
    ACTIONS(684), 1,
      sym_format_sequence,
    STATE(263), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13529] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__string_non_escaped_content,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(630), 1,
      sym_format_sequence,
    ACTIONS(686), 1,
      anon_sym_DQUOTE2,
    STATE(266), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      anon_sym_else,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(267), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(696), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(698), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13588] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COLON_EQ,
    ACTIONS(700), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13616] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_case,
    ACTIONS(712), 1,
      anon_sym_default,
    STATE(277), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13634] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(716), 1,
      anon_sym_case,
    ACTIONS(719), 1,
      anon_sym_default,
    STATE(277), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13680] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(311), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13698] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_case,
    ACTIONS(712), 1,
      anon_sym_default,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    STATE(277), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13716] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_case,
    ACTIONS(712), 1,
      anon_sym_default,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(276), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(742), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [13748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(746), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [13762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LF,
    ACTIONS(678), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13776] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_COLON_EQ,
    ACTIONS(750), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(756), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_LF,
    ACTIONS(760), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_LF,
    ACTIONS(764), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13832] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COLON_EQ,
    ACTIONS(700), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LF,
    ACTIONS(778), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LF,
    ACTIONS(786), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13916] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(324), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(742), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [13944] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(324), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13959] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(324), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13971] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_if,
    STATE(293), 2,
      sym_block,
      sym_if_statement,
  [13985] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [13998] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14011] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LF,
    ACTIONS(802), 2,
      anon_sym_SEMI,
      anon_sym_,
  [14035] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_EQ,
    ACTIONS(804), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14046] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_parameter_list_repeat1,
  [14059] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14072] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14085] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14098] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14111] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_parameter_list_repeat1,
  [14124] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(825), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14133] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14146] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_parameter_list_repeat1,
  [14159] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(831), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14168] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14181] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14194] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14207] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14220] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14228] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_block,
  [14238] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14246] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_parameter_list,
  [14256] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14264] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      sym_block,
  [14274] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
  [14281] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_EQ,
  [14288] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_EQ,
  [14295] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_COLON,
  [14302] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [14309] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
  [14316] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_EQ,
  [14323] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [14330] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [14337] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
  [14344] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_identifier,
  [14351] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_EQ,
  [14358] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [14365] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [14372] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
  [14379] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
  [14386] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LBRACE,
  [14393] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_identifier,
  [14400] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_identifier,
  [14407] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [14414] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LBRACE,
  [14421] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_EQ,
  [14428] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [14435] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_SEMI,
  [14442] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_COLON,
  [14449] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
  [14456] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LBRACE,
  [14463] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [14470] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
  [14477] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 226,
  [SMALL_STATE(5)] = 338,
  [SMALL_STATE(6)] = 450,
  [SMALL_STATE(7)] = 559,
  [SMALL_STATE(8)] = 668,
  [SMALL_STATE(9)] = 776,
  [SMALL_STATE(10)] = 884,
  [SMALL_STATE(11)] = 992,
  [SMALL_STATE(12)] = 1094,
  [SMALL_STATE(13)] = 1179,
  [SMALL_STATE(14)] = 1254,
  [SMALL_STATE(15)] = 1329,
  [SMALL_STATE(16)] = 1404,
  [SMALL_STATE(17)] = 1479,
  [SMALL_STATE(18)] = 1552,
  [SMALL_STATE(19)] = 1615,
  [SMALL_STATE(20)] = 1684,
  [SMALL_STATE(21)] = 1738,
  [SMALL_STATE(22)] = 1790,
  [SMALL_STATE(23)] = 1836,
  [SMALL_STATE(24)] = 1896,
  [SMALL_STATE(25)] = 1954,
  [SMALL_STATE(26)] = 2010,
  [SMALL_STATE(27)] = 2062,
  [SMALL_STATE(28)] = 2105,
  [SMALL_STATE(29)] = 2148,
  [SMALL_STATE(30)] = 2191,
  [SMALL_STATE(31)] = 2264,
  [SMALL_STATE(32)] = 2307,
  [SMALL_STATE(33)] = 2350,
  [SMALL_STATE(34)] = 2393,
  [SMALL_STATE(35)] = 2436,
  [SMALL_STATE(36)] = 2479,
  [SMALL_STATE(37)] = 2522,
  [SMALL_STATE(38)] = 2565,
  [SMALL_STATE(39)] = 2608,
  [SMALL_STATE(40)] = 2651,
  [SMALL_STATE(41)] = 2694,
  [SMALL_STATE(42)] = 2737,
  [SMALL_STATE(43)] = 2780,
  [SMALL_STATE(44)] = 2823,
  [SMALL_STATE(45)] = 2866,
  [SMALL_STATE(46)] = 2909,
  [SMALL_STATE(47)] = 2952,
  [SMALL_STATE(48)] = 3030,
  [SMALL_STATE(49)] = 3084,
  [SMALL_STATE(50)] = 3134,
  [SMALL_STATE(51)] = 3184,
  [SMALL_STATE(52)] = 3240,
  [SMALL_STATE(53)] = 3300,
  [SMALL_STATE(54)] = 3362,
  [SMALL_STATE(55)] = 3403,
  [SMALL_STATE(56)] = 3444,
  [SMALL_STATE(57)] = 3485,
  [SMALL_STATE(58)] = 3546,
  [SMALL_STATE(59)] = 3587,
  [SMALL_STATE(60)] = 3628,
  [SMALL_STATE(61)] = 3669,
  [SMALL_STATE(62)] = 3710,
  [SMALL_STATE(63)] = 3751,
  [SMALL_STATE(64)] = 3792,
  [SMALL_STATE(65)] = 3853,
  [SMALL_STATE(66)] = 3914,
  [SMALL_STATE(67)] = 3955,
  [SMALL_STATE(68)] = 3996,
  [SMALL_STATE(69)] = 4057,
  [SMALL_STATE(70)] = 4098,
  [SMALL_STATE(71)] = 4139,
  [SMALL_STATE(72)] = 4180,
  [SMALL_STATE(73)] = 4221,
  [SMALL_STATE(74)] = 4262,
  [SMALL_STATE(75)] = 4303,
  [SMALL_STATE(76)] = 4344,
  [SMALL_STATE(77)] = 4385,
  [SMALL_STATE(78)] = 4443,
  [SMALL_STATE(79)] = 4501,
  [SMALL_STATE(80)] = 4559,
  [SMALL_STATE(81)] = 4631,
  [SMALL_STATE(82)] = 4689,
  [SMALL_STATE(83)] = 4747,
  [SMALL_STATE(84)] = 4805,
  [SMALL_STATE(85)] = 4863,
  [SMALL_STATE(86)] = 4921,
  [SMALL_STATE(87)] = 4979,
  [SMALL_STATE(88)] = 5039,
  [SMALL_STATE(89)] = 5097,
  [SMALL_STATE(90)] = 5155,
  [SMALL_STATE(91)] = 5209,
  [SMALL_STATE(92)] = 5267,
  [SMALL_STATE(93)] = 5315,
  [SMALL_STATE(94)] = 5367,
  [SMALL_STATE(95)] = 5425,
  [SMALL_STATE(96)] = 5483,
  [SMALL_STATE(97)] = 5541,
  [SMALL_STATE(98)] = 5599,
  [SMALL_STATE(99)] = 5657,
  [SMALL_STATE(100)] = 5715,
  [SMALL_STATE(101)] = 5773,
  [SMALL_STATE(102)] = 5831,
  [SMALL_STATE(103)] = 5889,
  [SMALL_STATE(104)] = 5947,
  [SMALL_STATE(105)] = 6005,
  [SMALL_STATE(106)] = 6067,
  [SMALL_STATE(107)] = 6125,
  [SMALL_STATE(108)] = 6183,
  [SMALL_STATE(109)] = 6241,
  [SMALL_STATE(110)] = 6299,
  [SMALL_STATE(111)] = 6357,
  [SMALL_STATE(112)] = 6415,
  [SMALL_STATE(113)] = 6463,
  [SMALL_STATE(114)] = 6518,
  [SMALL_STATE(115)] = 6557,
  [SMALL_STATE(116)] = 6612,
  [SMALL_STATE(117)] = 6667,
  [SMALL_STATE(118)] = 6722,
  [SMALL_STATE(119)] = 6761,
  [SMALL_STATE(120)] = 6816,
  [SMALL_STATE(121)] = 6855,
  [SMALL_STATE(122)] = 6910,
  [SMALL_STATE(123)] = 6949,
  [SMALL_STATE(124)] = 6988,
  [SMALL_STATE(125)] = 7027,
  [SMALL_STATE(126)] = 7066,
  [SMALL_STATE(127)] = 7121,
  [SMALL_STATE(128)] = 7176,
  [SMALL_STATE(129)] = 7231,
  [SMALL_STATE(130)] = 7286,
  [SMALL_STATE(131)] = 7341,
  [SMALL_STATE(132)] = 7396,
  [SMALL_STATE(133)] = 7451,
  [SMALL_STATE(134)] = 7506,
  [SMALL_STATE(135)] = 7545,
  [SMALL_STATE(136)] = 7600,
  [SMALL_STATE(137)] = 7655,
  [SMALL_STATE(138)] = 7710,
  [SMALL_STATE(139)] = 7765,
  [SMALL_STATE(140)] = 7820,
  [SMALL_STATE(141)] = 7875,
  [SMALL_STATE(142)] = 7930,
  [SMALL_STATE(143)] = 7985,
  [SMALL_STATE(144)] = 8024,
  [SMALL_STATE(145)] = 8079,
  [SMALL_STATE(146)] = 8134,
  [SMALL_STATE(147)] = 8173,
  [SMALL_STATE(148)] = 8212,
  [SMALL_STATE(149)] = 8267,
  [SMALL_STATE(150)] = 8322,
  [SMALL_STATE(151)] = 8377,
  [SMALL_STATE(152)] = 8416,
  [SMALL_STATE(153)] = 8471,
  [SMALL_STATE(154)] = 8526,
  [SMALL_STATE(155)] = 8565,
  [SMALL_STATE(156)] = 8620,
  [SMALL_STATE(157)] = 8659,
  [SMALL_STATE(158)] = 8714,
  [SMALL_STATE(159)] = 8769,
  [SMALL_STATE(160)] = 8808,
  [SMALL_STATE(161)] = 8847,
  [SMALL_STATE(162)] = 8902,
  [SMALL_STATE(163)] = 8957,
  [SMALL_STATE(164)] = 9012,
  [SMALL_STATE(165)] = 9067,
  [SMALL_STATE(166)] = 9122,
  [SMALL_STATE(167)] = 9161,
  [SMALL_STATE(168)] = 9216,
  [SMALL_STATE(169)] = 9255,
  [SMALL_STATE(170)] = 9310,
  [SMALL_STATE(171)] = 9365,
  [SMALL_STATE(172)] = 9420,
  [SMALL_STATE(173)] = 9475,
  [SMALL_STATE(174)] = 9530,
  [SMALL_STATE(175)] = 9585,
  [SMALL_STATE(176)] = 9640,
  [SMALL_STATE(177)] = 9695,
  [SMALL_STATE(178)] = 9734,
  [SMALL_STATE(179)] = 9789,
  [SMALL_STATE(180)] = 9826,
  [SMALL_STATE(181)] = 9863,
  [SMALL_STATE(182)] = 9900,
  [SMALL_STATE(183)] = 9937,
  [SMALL_STATE(184)] = 9974,
  [SMALL_STATE(185)] = 10017,
  [SMALL_STATE(186)] = 10060,
  [SMALL_STATE(187)] = 10113,
  [SMALL_STATE(188)] = 10166,
  [SMALL_STATE(189)] = 10219,
  [SMALL_STATE(190)] = 10272,
  [SMALL_STATE(191)] = 10323,
  [SMALL_STATE(192)] = 10372,
  [SMALL_STATE(193)] = 10419,
  [SMALL_STATE(194)] = 10464,
  [SMALL_STATE(195)] = 10517,
  [SMALL_STATE(196)] = 10551,
  [SMALL_STATE(197)] = 10585,
  [SMALL_STATE(198)] = 10619,
  [SMALL_STATE(199)] = 10653,
  [SMALL_STATE(200)] = 10687,
  [SMALL_STATE(201)] = 10721,
  [SMALL_STATE(202)] = 10755,
  [SMALL_STATE(203)] = 10789,
  [SMALL_STATE(204)] = 10823,
  [SMALL_STATE(205)] = 10857,
  [SMALL_STATE(206)] = 10891,
  [SMALL_STATE(207)] = 10925,
  [SMALL_STATE(208)] = 10959,
  [SMALL_STATE(209)] = 10993,
  [SMALL_STATE(210)] = 11027,
  [SMALL_STATE(211)] = 11061,
  [SMALL_STATE(212)] = 11095,
  [SMALL_STATE(213)] = 11129,
  [SMALL_STATE(214)] = 11163,
  [SMALL_STATE(215)] = 11224,
  [SMALL_STATE(216)] = 11282,
  [SMALL_STATE(217)] = 11340,
  [SMALL_STATE(218)] = 11398,
  [SMALL_STATE(219)] = 11456,
  [SMALL_STATE(220)] = 11514,
  [SMALL_STATE(221)] = 11572,
  [SMALL_STATE(222)] = 11630,
  [SMALL_STATE(223)] = 11688,
  [SMALL_STATE(224)] = 11746,
  [SMALL_STATE(225)] = 11804,
  [SMALL_STATE(226)] = 11862,
  [SMALL_STATE(227)] = 11920,
  [SMALL_STATE(228)] = 11973,
  [SMALL_STATE(229)] = 12026,
  [SMALL_STATE(230)] = 12079,
  [SMALL_STATE(231)] = 12132,
  [SMALL_STATE(232)] = 12187,
  [SMALL_STATE(233)] = 12240,
  [SMALL_STATE(234)] = 12292,
  [SMALL_STATE(235)] = 12344,
  [SMALL_STATE(236)] = 12396,
  [SMALL_STATE(237)] = 12448,
  [SMALL_STATE(238)] = 12500,
  [SMALL_STATE(239)] = 12552,
  [SMALL_STATE(240)] = 12604,
  [SMALL_STATE(241)] = 12656,
  [SMALL_STATE(242)] = 12708,
  [SMALL_STATE(243)] = 12760,
  [SMALL_STATE(244)] = 12812,
  [SMALL_STATE(245)] = 12864,
  [SMALL_STATE(246)] = 12916,
  [SMALL_STATE(247)] = 12968,
  [SMALL_STATE(248)] = 12992,
  [SMALL_STATE(249)] = 13019,
  [SMALL_STATE(250)] = 13046,
  [SMALL_STATE(251)] = 13067,
  [SMALL_STATE(252)] = 13094,
  [SMALL_STATE(253)] = 13121,
  [SMALL_STATE(254)] = 13142,
  [SMALL_STATE(255)] = 13169,
  [SMALL_STATE(256)] = 13196,
  [SMALL_STATE(257)] = 13223,
  [SMALL_STATE(258)] = 13250,
  [SMALL_STATE(259)] = 13277,
  [SMALL_STATE(260)] = 13300,
  [SMALL_STATE(261)] = 13315,
  [SMALL_STATE(262)] = 13338,
  [SMALL_STATE(263)] = 13353,
  [SMALL_STATE(264)] = 13376,
  [SMALL_STATE(265)] = 13399,
  [SMALL_STATE(266)] = 13422,
  [SMALL_STATE(267)] = 13445,
  [SMALL_STATE(268)] = 13464,
  [SMALL_STATE(269)] = 13487,
  [SMALL_STATE(270)] = 13506,
  [SMALL_STATE(271)] = 13529,
  [SMALL_STATE(272)] = 13552,
  [SMALL_STATE(273)] = 13569,
  [SMALL_STATE(274)] = 13588,
  [SMALL_STATE(275)] = 13602,
  [SMALL_STATE(276)] = 13616,
  [SMALL_STATE(277)] = 13634,
  [SMALL_STATE(278)] = 13652,
  [SMALL_STATE(279)] = 13666,
  [SMALL_STATE(280)] = 13680,
  [SMALL_STATE(281)] = 13698,
  [SMALL_STATE(282)] = 13716,
  [SMALL_STATE(283)] = 13734,
  [SMALL_STATE(284)] = 13748,
  [SMALL_STATE(285)] = 13762,
  [SMALL_STATE(286)] = 13776,
  [SMALL_STATE(287)] = 13790,
  [SMALL_STATE(288)] = 13804,
  [SMALL_STATE(289)] = 13818,
  [SMALL_STATE(290)] = 13832,
  [SMALL_STATE(291)] = 13846,
  [SMALL_STATE(292)] = 13860,
  [SMALL_STATE(293)] = 13874,
  [SMALL_STATE(294)] = 13888,
  [SMALL_STATE(295)] = 13902,
  [SMALL_STATE(296)] = 13916,
  [SMALL_STATE(297)] = 13931,
  [SMALL_STATE(298)] = 13944,
  [SMALL_STATE(299)] = 13959,
  [SMALL_STATE(300)] = 13971,
  [SMALL_STATE(301)] = 13985,
  [SMALL_STATE(302)] = 13998,
  [SMALL_STATE(303)] = 14011,
  [SMALL_STATE(304)] = 14024,
  [SMALL_STATE(305)] = 14035,
  [SMALL_STATE(306)] = 14046,
  [SMALL_STATE(307)] = 14059,
  [SMALL_STATE(308)] = 14072,
  [SMALL_STATE(309)] = 14085,
  [SMALL_STATE(310)] = 14098,
  [SMALL_STATE(311)] = 14111,
  [SMALL_STATE(312)] = 14124,
  [SMALL_STATE(313)] = 14133,
  [SMALL_STATE(314)] = 14146,
  [SMALL_STATE(315)] = 14159,
  [SMALL_STATE(316)] = 14168,
  [SMALL_STATE(317)] = 14181,
  [SMALL_STATE(318)] = 14194,
  [SMALL_STATE(319)] = 14207,
  [SMALL_STATE(320)] = 14220,
  [SMALL_STATE(321)] = 14228,
  [SMALL_STATE(322)] = 14238,
  [SMALL_STATE(323)] = 14246,
  [SMALL_STATE(324)] = 14256,
  [SMALL_STATE(325)] = 14264,
  [SMALL_STATE(326)] = 14274,
  [SMALL_STATE(327)] = 14281,
  [SMALL_STATE(328)] = 14288,
  [SMALL_STATE(329)] = 14295,
  [SMALL_STATE(330)] = 14302,
  [SMALL_STATE(331)] = 14309,
  [SMALL_STATE(332)] = 14316,
  [SMALL_STATE(333)] = 14323,
  [SMALL_STATE(334)] = 14330,
  [SMALL_STATE(335)] = 14337,
  [SMALL_STATE(336)] = 14344,
  [SMALL_STATE(337)] = 14351,
  [SMALL_STATE(338)] = 14358,
  [SMALL_STATE(339)] = 14365,
  [SMALL_STATE(340)] = 14372,
  [SMALL_STATE(341)] = 14379,
  [SMALL_STATE(342)] = 14386,
  [SMALL_STATE(343)] = 14393,
  [SMALL_STATE(344)] = 14400,
  [SMALL_STATE(345)] = 14407,
  [SMALL_STATE(346)] = 14414,
  [SMALL_STATE(347)] = 14421,
  [SMALL_STATE(348)] = 14428,
  [SMALL_STATE(349)] = 14435,
  [SMALL_STATE(350)] = 14442,
  [SMALL_STATE(351)] = 14449,
  [SMALL_STATE(352)] = 14456,
  [SMALL_STATE(353)] = 14463,
  [SMALL_STATE(354)] = 14470,
  [SMALL_STATE(355)] = 14477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 15),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 15),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 13),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 14),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 20),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 16),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_literal, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 10),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 10),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 11),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 11),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 11),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 11),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 7),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 7),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 8),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 8),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 22),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 21),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 23),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(129),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(138),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(252),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(283),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(283),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(252),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(266),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(297),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(297),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(266),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(91),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(329),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 15),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 15),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 5),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 15),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 15),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 2),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec_statement, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_statement, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 9),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(299),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 15),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 24),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 19),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [885] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 18),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 12),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_risor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
