#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 329
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
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
  anon_sym_return = 22,
  anon_sym_if = 23,
  anon_sym_else = 24,
  anon_sym_for = 25,
  anon_sym_range = 26,
  anon_sym_switch = 27,
  anon_sym_case = 28,
  anon_sym_COLON = 29,
  anon_sym_default = 30,
  anon_sym_DOT = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_BANG = 36,
  anon_sym_CARET = 37,
  anon_sym_STAR = 38,
  anon_sym_AMP = 39,
  anon_sym_LT_DASH = 40,
  anon_sym_SLASH = 41,
  anon_sym_STAR_STAR = 42,
  anon_sym_PERCENT = 43,
  anon_sym_LT_LT = 44,
  anon_sym_GT_GT = 45,
  anon_sym_PIPE = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_LT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_GT = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_AMP_AMP = 53,
  anon_sym_PIPE_PIPE = 54,
  anon_sym_DQUOTE = 55,
  anon_sym_DQUOTE2 = 56,
  sym__string_non_escaped_content = 57,
  anon_sym_SQUOTE = 58,
  anon_sym_SQUOTE2 = 59,
  sym_string_template_char = 60,
  aux_sym_escape_sequence_token1 = 61,
  sym_escape_sequence_invalid = 62,
  sym_format_sequence = 63,
  sym_string_backtick = 64,
  sym_int_literal = 65,
  sym_float_literal = 66,
  sym_nil = 67,
  sym_true = 68,
  sym_false = 69,
  sym_comment = 70,
  sym_source_file = 71,
  sym__definition = 72,
  sym_function_declaration = 73,
  sym_parameter_list = 74,
  sym__parameter_declaration = 75,
  sym_parameter_declaration = 76,
  sym_parameter_declaration_default = 77,
  sym_block = 78,
  sym__statement_list = 79,
  sym__statement = 80,
  sym__declaration = 81,
  sym_const_declaration = 82,
  sym_var_declaration = 83,
  sym_short_var_declaration = 84,
  sym_inc_statement = 85,
  sym_dec_statement = 86,
  sym_assignment_statement = 87,
  sym_return_statement = 88,
  sym_if_statement = 89,
  sym_for_statement = 90,
  sym_for_clause = 91,
  sym_range_clause = 92,
  sym_switch_statement = 93,
  sym_switch_case = 94,
  sym_default_case = 95,
  sym_expression_statement = 96,
  sym__expression = 97,
  sym_selector_expression = 98,
  sym_index_expression = 99,
  sym_expression_list = 100,
  sym_parenthesized_expression = 101,
  sym_call_expression = 102,
  sym_argument_list = 103,
  sym_unary_expression = 104,
  sym_binary_expression = 105,
  sym_string = 106,
  sym_string_template = 107,
  sym_escape_sequence = 108,
  sym_string_template_argument = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_parameter_list_repeat1 = 111,
  aux_sym__statement_list_repeat1 = 112,
  aux_sym_switch_statement_repeat1 = 113,
  aux_sym_expression_list_repeat1 = 114,
  aux_sym_string_repeat1 = 115,
  aux_sym_string_template_repeat1 = 116,
  alias_sym_field_identifier = 117,
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
  [sym__declaration] = "_declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym_short_var_declaration] = "short_var_declaration",
  [sym_inc_statement] = "inc_statement",
  [sym_dec_statement] = "dec_statement",
  [sym_assignment_statement] = "assignment_statement",
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
  [sym__declaration] = sym__declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym_short_var_declaration] = sym_short_var_declaration,
  [sym_inc_statement] = sym_inc_statement,
  [sym_dec_statement] = sym_dec_statement,
  [sym_assignment_statement] = sym_assignment_statement,
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 10,
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
  [39] = 21,
  [40] = 38,
  [41] = 19,
  [42] = 24,
  [43] = 22,
  [44] = 23,
  [45] = 20,
  [46] = 33,
  [47] = 26,
  [48] = 34,
  [49] = 37,
  [50] = 30,
  [51] = 32,
  [52] = 29,
  [53] = 28,
  [54] = 25,
  [55] = 31,
  [56] = 36,
  [57] = 35,
  [58] = 27,
  [59] = 21,
  [60] = 19,
  [61] = 18,
  [62] = 22,
  [63] = 24,
  [64] = 23,
  [65] = 20,
  [66] = 37,
  [67] = 25,
  [68] = 28,
  [69] = 34,
  [70] = 26,
  [71] = 30,
  [72] = 31,
  [73] = 27,
  [74] = 32,
  [75] = 33,
  [76] = 35,
  [77] = 36,
  [78] = 29,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 80,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 86,
  [90] = 88,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 84,
  [95] = 87,
  [96] = 96,
  [97] = 20,
  [98] = 85,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 84,
  [104] = 104,
  [105] = 21,
  [106] = 84,
  [107] = 107,
  [108] = 108,
  [109] = 19,
  [110] = 24,
  [111] = 23,
  [112] = 85,
  [113] = 85,
  [114] = 22,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 31,
  [130] = 32,
  [131] = 131,
  [132] = 35,
  [133] = 36,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 118,
  [139] = 139,
  [140] = 140,
  [141] = 33,
  [142] = 127,
  [143] = 26,
  [144] = 127,
  [145] = 30,
  [146] = 29,
  [147] = 121,
  [148] = 119,
  [149] = 127,
  [150] = 25,
  [151] = 28,
  [152] = 123,
  [153] = 117,
  [154] = 117,
  [155] = 119,
  [156] = 121,
  [157] = 123,
  [158] = 118,
  [159] = 34,
  [160] = 37,
  [161] = 126,
  [162] = 131,
  [163] = 137,
  [164] = 136,
  [165] = 27,
  [166] = 122,
  [167] = 135,
  [168] = 139,
  [169] = 120,
  [170] = 120,
  [171] = 122,
  [172] = 123,
  [173] = 121,
  [174] = 119,
  [175] = 117,
  [176] = 118,
  [177] = 120,
  [178] = 122,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 184,
  [186] = 184,
  [187] = 184,
  [188] = 96,
  [189] = 107,
  [190] = 190,
  [191] = 191,
  [192] = 108,
  [193] = 190,
  [194] = 100,
  [195] = 101,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 198,
  [201] = 201,
  [202] = 198,
  [203] = 196,
  [204] = 204,
  [205] = 205,
  [206] = 199,
  [207] = 199,
  [208] = 208,
  [209] = 199,
  [210] = 198,
  [211] = 211,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 214,
  [218] = 212,
  [219] = 214,
  [220] = 212,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 222,
  [225] = 225,
  [226] = 226,
  [227] = 180,
  [228] = 228,
  [229] = 182,
  [230] = 223,
  [231] = 222,
  [232] = 223,
  [233] = 222,
  [234] = 223,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 245,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 252,
  [254] = 240,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 251,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 238,
  [263] = 263,
  [264] = 264,
  [265] = 249,
  [266] = 266,
  [267] = 267,
  [268] = 266,
  [269] = 269,
  [270] = 269,
  [271] = 180,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 182,
  [276] = 269,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 269,
  [281] = 281,
  [282] = 226,
  [283] = 241,
  [284] = 244,
  [285] = 256,
  [286] = 260,
  [287] = 287,
  [288] = 255,
  [289] = 243,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 292,
  [294] = 237,
  [295] = 248,
  [296] = 261,
  [297] = 259,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 300,
  [304] = 304,
  [305] = 305,
  [306] = 300,
  [307] = 307,
  [308] = 307,
  [309] = 300,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 298,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 307,
  [319] = 316,
  [320] = 315,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 307,
  [326] = 326,
  [327] = 327,
  [328] = 298,
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(39);
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(99);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '{') ADVANCE(48);
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
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '|') ADVANCE(83);
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
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '=') ADVANCE(46);
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
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(57);
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
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '[') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '[') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 28:
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
    case 29:
      if (lookahead == '[') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 35:
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(92);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(92);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(53);
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
      if (lookahead == '=') ADVANCE(56);
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
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
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
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
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
          lookahead == 'x') ADVANCE(36);
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
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 38},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 38},
  [82] = {.lex_state = 38},
  [83] = {.lex_state = 38},
  [84] = {.lex_state = 38},
  [85] = {.lex_state = 38},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 38},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 38},
  [91] = {.lex_state = 38},
  [92] = {.lex_state = 38},
  [93] = {.lex_state = 38},
  [94] = {.lex_state = 38},
  [95] = {.lex_state = 38},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 38},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 38},
  [103] = {.lex_state = 38},
  [104] = {.lex_state = 38},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 38},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 38},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 38},
  [116] = {.lex_state = 38},
  [117] = {.lex_state = 38},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 38},
  [121] = {.lex_state = 38},
  [122] = {.lex_state = 38},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 38},
  [125] = {.lex_state = 38},
  [126] = {.lex_state = 38},
  [127] = {.lex_state = 38},
  [128] = {.lex_state = 38},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 38},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 38},
  [136] = {.lex_state = 38},
  [137] = {.lex_state = 38},
  [138] = {.lex_state = 38},
  [139] = {.lex_state = 38},
  [140] = {.lex_state = 38},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 38},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 38},
  [149] = {.lex_state = 38},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 38},
  [153] = {.lex_state = 38},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 38},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 38},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 38},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 38},
  [164] = {.lex_state = 38},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 38},
  [167] = {.lex_state = 38},
  [168] = {.lex_state = 38},
  [169] = {.lex_state = 38},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 38},
  [172] = {.lex_state = 38},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 38},
  [175] = {.lex_state = 38},
  [176] = {.lex_state = 38},
  [177] = {.lex_state = 38},
  [178] = {.lex_state = 38},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 38},
  [181] = {.lex_state = 38},
  [182] = {.lex_state = 38},
  [183] = {.lex_state = 38},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 38},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 38},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 38},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 38},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 38},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 38},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 38},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 38},
  [263] = {.lex_state = 38},
  [264] = {.lex_state = 38},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 38},
  [267] = {.lex_state = 38},
  [268] = {.lex_state = 38},
  [269] = {.lex_state = 38},
  [270] = {.lex_state = 38},
  [271] = {.lex_state = 38},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 38},
  [274] = {.lex_state = 38},
  [275] = {.lex_state = 38},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 38},
  [278] = {.lex_state = 38},
  [279] = {.lex_state = 38},
  [280] = {.lex_state = 38},
  [281] = {.lex_state = 38},
  [282] = {.lex_state = 38},
  [283] = {.lex_state = 38},
  [284] = {.lex_state = 38},
  [285] = {.lex_state = 38},
  [286] = {.lex_state = 38},
  [287] = {.lex_state = 38},
  [288] = {.lex_state = 38},
  [289] = {.lex_state = 38},
  [290] = {.lex_state = 38},
  [291] = {.lex_state = 38},
  [292] = {.lex_state = 38},
  [293] = {.lex_state = 38},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 38},
  [296] = {.lex_state = 38},
  [297] = {.lex_state = 38},
  [298] = {.lex_state = 38},
  [299] = {.lex_state = 38},
  [300] = {.lex_state = 38},
  [301] = {.lex_state = 38},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 38},
  [304] = {.lex_state = 38},
  [305] = {.lex_state = 38},
  [306] = {.lex_state = 38},
  [307] = {.lex_state = 38},
  [308] = {.lex_state = 38},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 38},
  [311] = {.lex_state = 38},
  [312] = {.lex_state = 38},
  [313] = {.lex_state = 38},
  [314] = {.lex_state = 38},
  [315] = {.lex_state = 38},
  [316] = {.lex_state = 38},
  [317] = {.lex_state = 38},
  [318] = {.lex_state = 38},
  [319] = {.lex_state = 38},
  [320] = {.lex_state = 38},
  [321] = {.lex_state = 38},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 38},
  [324] = {.lex_state = 38},
  [325] = {.lex_state = 38},
  [326] = {.lex_state = 38},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 38},
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
    [sym_source_file] = STATE(326),
    [sym__definition] = STATE(5),
    [sym_function_declaration] = STATE(5),
    [sym__statement] = STATE(272),
    [sym__declaration] = STATE(244),
    [sym_const_declaration] = STATE(244),
    [sym_var_declaration] = STATE(244),
    [sym_short_var_declaration] = STATE(244),
    [sym_inc_statement] = STATE(244),
    [sym_dec_statement] = STATE(244),
    [sym_assignment_statement] = STATE(244),
    [sym_return_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym_for_statement] = STATE(244),
    [sym_switch_statement] = STATE(244),
    [sym_expression_statement] = STATE(244),
    [sym__expression] = STATE(18),
    [sym_selector_expression] = STATE(27),
    [sym_index_expression] = STATE(27),
    [sym_expression_list] = STATE(245),
    [sym_parenthesized_expression] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_string] = STATE(27),
    [sym_string_template] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_string_backtick] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(31),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_const,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym__expression,
    STATE(250), 1,
      sym_expression_list,
    STATE(295), 1,
      sym_block,
    STATE(310), 1,
      sym__statement,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(292), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(284), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [97] = 21,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_func,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_const,
    ACTIONS(77), 1,
      anon_sym_var,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(86), 1,
      anon_sym_for,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym__expression,
    STATE(245), 1,
      sym_expression_list,
    STATE(272), 1,
      sym__statement,
    ACTIONS(101), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(3), 3,
      sym__definition,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(65), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(92), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [192] = 22,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_const,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym__expression,
    STATE(248), 1,
      sym_block,
    STATE(250), 1,
      sym_expression_list,
    STATE(310), 1,
      sym__statement,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(293), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(284), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [289] = 21,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym__expression,
    STATE(245), 1,
      sym_expression_list,
    STATE(272), 1,
      sym__statement,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(3), 3,
      sym__definition,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [384] = 21,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(225), 1,
      sym__statement,
    STATE(245), 1,
      sym_expression_list,
    STATE(281), 1,
      sym__statement_list,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(110), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [478] = 21,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(225), 1,
      sym__statement,
    STATE(245), 1,
      sym_expression_list,
    STATE(277), 1,
      sym__statement_list,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(114), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [572] = 20,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(245), 1,
      sym_expression_list,
    STATE(246), 1,
      sym__statement,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(118), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [663] = 20,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(245), 1,
      sym_expression_list,
    STATE(246), 1,
      sym__statement,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(122), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [754] = 20,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(225), 1,
      sym__statement,
    STATE(245), 1,
      sym_expression_list,
    STATE(313), 1,
      sym__statement_list,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [844] = 20,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(225), 1,
      sym__statement,
    STATE(245), 1,
      sym_expression_list,
    STATE(328), 1,
      sym__statement_list,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [934] = 20,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__expression,
    STATE(225), 1,
      sym__statement,
    STATE(245), 1,
      sym_expression_list,
    STATE(298), 1,
      sym__statement_list,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1024] = 19,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_const,
    ACTIONS(134), 1,
      anon_sym_var,
    STATE(61), 1,
      sym__expression,
    STATE(247), 1,
      sym_expression_list,
    STATE(314), 1,
      sym__statement,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(284), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1111] = 19,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_const,
    ACTIONS(134), 1,
      anon_sym_var,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__expression,
    STATE(247), 1,
      sym_expression_list,
    STATE(324), 1,
      sym__statement,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(284), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1198] = 19,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_const,
    ACTIONS(134), 1,
      anon_sym_var,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__expression,
    STATE(247), 1,
      sym_expression_list,
    STATE(323), 1,
      sym__statement,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(284), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1285] = 19,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_const,
    ACTIONS(134), 1,
      anon_sym_var,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__expression,
    STATE(247), 1,
      sym_expression_list,
    STATE(317), 1,
      sym__statement,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(284), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1372] = 18,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_switch,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(18), 1,
      sym__expression,
    STATE(245), 1,
      sym_expression_list,
    STATE(246), 1,
      sym__statement,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(244), 12,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1456] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(168), 1,
      anon_sym_PIPE_PIPE,
    STATE(28), 1,
      sym_argument_list,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(160), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(144), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(150), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(162), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(164), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1529] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(172), 31,
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
  [1581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(176), 31,
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
  [1633] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(162), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(172), 25,
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
  [1687] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(160), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(162), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(164), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(172), 15,
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
  [1747] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(160), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(162), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(164), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(172), 16,
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
  [1805] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(160), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(162), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(172), 22,
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
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(180), 34,
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
  [1904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 34,
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
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(188), 34,
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
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 34,
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
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 34,
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
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 34,
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
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 34,
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
  [2162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 34,
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
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 34,
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
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 34,
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
  [2291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 34,
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
  [2334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 34,
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
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 34,
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
  [2420] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(238), 1,
      anon_sym_DASH_DASH,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_AMP_AMP,
    ACTIONS(256), 1,
      anon_sym_PIPE_PIPE,
    STATE(68), 1,
      sym_argument_list,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    STATE(256), 1,
      sym_block,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(234), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [2498] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(172), 7,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 17,
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
  [2552] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(238), 1,
      anon_sym_DASH_DASH,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_AMP_AMP,
    ACTIONS(256), 1,
      anon_sym_PIPE_PIPE,
    STATE(68), 1,
      sym_argument_list,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    STATE(285), 1,
      sym_block,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(234), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [2630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(172), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 21,
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
  [2680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(172), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(170), 17,
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
  [2736] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(172), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(266), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 12,
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
  [2798] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(172), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(266), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 13,
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
  [2858] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(176), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 21,
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
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(210), 24,
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
  [2949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 24,
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
  [2990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 24,
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
  [3031] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(226), 24,
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
  [3072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 24,
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
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(206), 24,
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
  [3154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 24,
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
  [3195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 24,
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
  [3236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 24,
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
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 24,
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
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(222), 24,
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
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 24,
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
  [3400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 24,
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
  [3441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(172), 6,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 16,
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
  [3493] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(172), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 20,
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
  [3541] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(238), 1,
      anon_sym_DASH_DASH,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_AMP_AMP,
    ACTIONS(256), 1,
      anon_sym_PIPE_PIPE,
    STATE(68), 1,
      sym_argument_list,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(234), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3613] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_AMP_AMP,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 11,
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
  [3673] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(170), 16,
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
  [3727] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 12,
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
  [3785] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(176), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 20,
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
  [3833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 23,
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
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 23,
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
  [3911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 23,
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
  [3950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 23,
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
  [3989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 23,
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
  [4028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 23,
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
  [4067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 23,
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
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 23,
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
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(206), 23,
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
  [4184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(210), 23,
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
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 23,
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
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 23,
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
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 23,
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
  [4340] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(268), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(266), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(276), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [4400] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4452] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4504] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4556] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4608] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4657] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4706] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(316), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4755] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(315), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4804] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4853] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(319), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4902] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4951] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5000] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_range,
    STATE(195), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5049] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(322), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5098] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5147] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(320), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      anon_sym_AMP_AMP,
    ACTIONS(342), 1,
      anon_sym_PIPE_PIPE,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(326), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(176), 22,
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
  [5292] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5341] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5390] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      anon_sym_AMP_AMP,
    ACTIONS(342), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(350), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5443] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      anon_sym_AMP_AMP,
    ACTIONS(342), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(352), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(354), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5496] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(311), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5545] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5594] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    STATE(301), 1,
      sym_expression_list,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5643] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(172), 16,
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
  [5688] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5737] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      anon_sym_AMP_AMP,
    ACTIONS(342), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(362), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5790] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      anon_sym_AMP_AMP,
    ACTIONS(342), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(366), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5843] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(172), 22,
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
  [5886] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(172), 13,
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
  [5933] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(172), 7,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5982] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6031] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6080] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      anon_sym_AMP_AMP,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
    ACTIONS(336), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(338), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6131] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_range,
    STATE(189), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6180] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_range,
    STATE(192), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6229] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym__expression,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6275] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6321] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym__expression,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6367] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6413] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__expression,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6459] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6505] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym__expression,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6551] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6597] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6643] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6689] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(97), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6735] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 25,
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
  [6815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 25,
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
  [6849] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 25,
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
  [6929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 25,
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
  [6963] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7009] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7055] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7101] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7147] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym__expression,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7193] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7239] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 25,
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
  [7319] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__expression,
    ACTIONS(61), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(35), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(55), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(73), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 25,
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
  [7399] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 25,
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
  [7479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 25,
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
  [7513] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(19), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7559] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(24), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7605] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(20), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(180), 25,
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
  [7685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 25,
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
  [7719] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(21), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7765] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7811] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(23), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7857] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7903] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7949] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7995] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(22), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(27), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 25,
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
  [8075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 25,
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
  [8109] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(192), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8155] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8201] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym__expression,
    ACTIONS(384), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(374), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(378), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(165), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8247] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(188), 25,
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
  [8327] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(200), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8373] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8419] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8465] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(199), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8511] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8557] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(210), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8603] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8649] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8695] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8741] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8787] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8833] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8879] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym__expression,
    ACTIONS(296), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(282), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(290), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(58), 8,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8925] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8986] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(390), 12,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(388), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [9019] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(394), 12,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(392), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [9052] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(398), 12,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(396), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [9085] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(400), 12,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [9118] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    STATE(270), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9176] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    STATE(276), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9234] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    STATE(280), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9292] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    STATE(269), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9350] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9403] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9456] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    STATE(282), 1,
      sym_block,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9511] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9564] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9617] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    STATE(226), 1,
      sym_block,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9672] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9725] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9778] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9830] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9882] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9934] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9986] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10038] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10090] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10142] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10194] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10246] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10298] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10350] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10402] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10454] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10506] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_STAR,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(280), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [10558] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COLON,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(276), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [10580] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      anon_sym_SQUOTE2,
    ACTIONS(457), 1,
      sym_string_template_char,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(463), 1,
      sym_format_sequence,
    STATE(214), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10607] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(465), 1,
      anon_sym_SQUOTE2,
    ACTIONS(467), 1,
      sym_string_template_char,
    ACTIONS(469), 1,
      sym_format_sequence,
    STATE(217), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10634] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(471), 1,
      anon_sym_SQUOTE2,
    ACTIONS(473), 1,
      sym_string_template_char,
    ACTIONS(475), 1,
      sym_format_sequence,
    STATE(221), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10661] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_COLON,
    STATE(211), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(477), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [10682] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(473), 1,
      sym_string_template_char,
    ACTIONS(475), 1,
      sym_format_sequence,
    ACTIONS(481), 1,
      anon_sym_SQUOTE2,
    STATE(221), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10709] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(473), 1,
      sym_string_template_char,
    ACTIONS(475), 1,
      sym_format_sequence,
    ACTIONS(483), 1,
      anon_sym_SQUOTE2,
    STATE(221), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10736] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(485), 1,
      anon_sym_SQUOTE2,
    ACTIONS(487), 1,
      sym_string_template_char,
    ACTIONS(489), 1,
      sym_format_sequence,
    STATE(219), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10763] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(473), 1,
      sym_string_template_char,
    ACTIONS(475), 1,
      sym_format_sequence,
    ACTIONS(491), 1,
      anon_sym_SQUOTE2,
    STATE(221), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10790] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(461), 1,
      sym_escape_sequence_invalid,
    ACTIONS(493), 1,
      anon_sym_SQUOTE2,
    ACTIONS(495), 1,
      sym_string_template_char,
    ACTIONS(497), 1,
      sym_format_sequence,
    STATE(216), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10817] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_SQUOTE2,
    ACTIONS(504), 1,
      sym_string_template_char,
    ACTIONS(507), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(510), 1,
      sym_escape_sequence_invalid,
    ACTIONS(513), 1,
      sym_format_sequence,
    STATE(221), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [10844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_DQUOTE2,
    ACTIONS(518), 1,
      sym__string_non_escaped_content,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(524), 1,
      sym_format_sequence,
    STATE(235), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [10867] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(526), 1,
      anon_sym_DQUOTE2,
    ACTIONS(528), 1,
      sym__string_non_escaped_content,
    ACTIONS(530), 1,
      sym_format_sequence,
    STATE(231), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [10890] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__string_non_escaped_content,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(524), 1,
      sym_format_sequence,
    ACTIONS(532), 1,
      anon_sym_DQUOTE2,
    STATE(235), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [10913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(236), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(536), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(538), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [10932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      anon_sym_else,
    ACTIONS(542), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [10949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [10964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(228), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(549), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(552), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [10983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [10998] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(554), 1,
      anon_sym_DQUOTE2,
    ACTIONS(556), 1,
      sym__string_non_escaped_content,
    ACTIONS(558), 1,
      sym_format_sequence,
    STATE(233), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [11021] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__string_non_escaped_content,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(524), 1,
      sym_format_sequence,
    ACTIONS(560), 1,
      anon_sym_DQUOTE2,
    STATE(235), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [11044] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(562), 1,
      anon_sym_DQUOTE2,
    ACTIONS(564), 1,
      sym__string_non_escaped_content,
    ACTIONS(566), 1,
      sym_format_sequence,
    STATE(224), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [11067] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__string_non_escaped_content,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(524), 1,
      sym_format_sequence,
    ACTIONS(568), 1,
      anon_sym_DQUOTE2,
    STATE(235), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [11090] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(522), 1,
      sym_escape_sequence_invalid,
    ACTIONS(570), 1,
      anon_sym_DQUOTE2,
    ACTIONS(572), 1,
      sym__string_non_escaped_content,
    ACTIONS(574), 1,
      sym_format_sequence,
    STATE(222), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [11113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DQUOTE2,
    ACTIONS(578), 1,
      sym__string_non_escaped_content,
    ACTIONS(581), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(584), 1,
      sym_escape_sequence_invalid,
    ACTIONS(587), 1,
      sym_format_sequence,
    STATE(235), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [11136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LF,
    STATE(228), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(592), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11169] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    STATE(240), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(606), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [11201] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(242), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11233] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      anon_sym_case,
    ACTIONS(619), 1,
      anon_sym_default,
    STATE(242), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11279] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COLON_EQ,
    ACTIONS(630), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [11293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(552), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11307] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_COLON_EQ,
    ACTIONS(636), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [11321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(646), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [11349] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_COLON_EQ,
    ACTIONS(636), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [11363] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(253), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11381] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(242), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11399] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    STATE(242), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11417] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(242), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LF,
    ACTIONS(660), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_LF,
    ACTIONS(664), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11463] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(273), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [11481] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(252), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11541] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_case,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    STATE(254), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [11559] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(290), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [11574] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(290), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [11589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(646), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [11602] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(692), 1,
      anon_sym_if,
    STATE(294), 2,
      sym_block,
      sym_if_statement,
  [11616] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_identifier,
    STATE(290), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [11628] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      anon_sym_if,
    STATE(237), 2,
      sym_block,
      sym_if_statement,
  [11642] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_expression_list_repeat1,
  [11655] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_expression_list_repeat1,
  [11668] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_else,
  [11677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      anon_sym_,
  [11688] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_parameter_list_repeat1,
  [11701] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_EQ,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11712] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_else,
  [11721] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_expression_list_repeat1,
  [11734] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(714), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11743] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_parameter_list_repeat1,
  [11756] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_parameter_list_repeat1,
  [11769] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_expression_list_repeat1,
  [11782] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(725), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [11791] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_else,
    ACTIONS(540), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11802] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(610), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11810] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11818] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(662), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11826] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11834] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_parameter_list,
  [11844] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11852] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11860] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11868] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_block,
  [11878] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(285), 1,
      sym_block,
  [11888] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_block,
  [11898] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11906] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11914] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11922] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11930] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
  [11937] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_LBRACE,
  [11944] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
  [11951] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [11958] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_COLON,
  [11965] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [11972] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [11979] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
  [11986] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [11993] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
  [12000] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_identifier,
  [12007] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [12014] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SEMI,
  [12021] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_EQ,
  [12028] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
  [12035] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
  [12042] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
  [12049] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_EQ,
  [12056] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [12063] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_LBRACE,
  [12070] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_identifier,
  [12077] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_EQ,
  [12084] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_EQ,
  [12091] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_identifier,
  [12098] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_COLON,
  [12105] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
  [12112] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
  [12119] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_identifier,
  [12126] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
  [12133] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
  [12140] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 289,
  [SMALL_STATE(6)] = 384,
  [SMALL_STATE(7)] = 478,
  [SMALL_STATE(8)] = 572,
  [SMALL_STATE(9)] = 663,
  [SMALL_STATE(10)] = 754,
  [SMALL_STATE(11)] = 844,
  [SMALL_STATE(12)] = 934,
  [SMALL_STATE(13)] = 1024,
  [SMALL_STATE(14)] = 1111,
  [SMALL_STATE(15)] = 1198,
  [SMALL_STATE(16)] = 1285,
  [SMALL_STATE(17)] = 1372,
  [SMALL_STATE(18)] = 1456,
  [SMALL_STATE(19)] = 1529,
  [SMALL_STATE(20)] = 1581,
  [SMALL_STATE(21)] = 1633,
  [SMALL_STATE(22)] = 1687,
  [SMALL_STATE(23)] = 1747,
  [SMALL_STATE(24)] = 1805,
  [SMALL_STATE(25)] = 1861,
  [SMALL_STATE(26)] = 1904,
  [SMALL_STATE(27)] = 1947,
  [SMALL_STATE(28)] = 1990,
  [SMALL_STATE(29)] = 2033,
  [SMALL_STATE(30)] = 2076,
  [SMALL_STATE(31)] = 2119,
  [SMALL_STATE(32)] = 2162,
  [SMALL_STATE(33)] = 2205,
  [SMALL_STATE(34)] = 2248,
  [SMALL_STATE(35)] = 2291,
  [SMALL_STATE(36)] = 2334,
  [SMALL_STATE(37)] = 2377,
  [SMALL_STATE(38)] = 2420,
  [SMALL_STATE(39)] = 2498,
  [SMALL_STATE(40)] = 2552,
  [SMALL_STATE(41)] = 2630,
  [SMALL_STATE(42)] = 2680,
  [SMALL_STATE(43)] = 2736,
  [SMALL_STATE(44)] = 2798,
  [SMALL_STATE(45)] = 2858,
  [SMALL_STATE(46)] = 2908,
  [SMALL_STATE(47)] = 2949,
  [SMALL_STATE(48)] = 2990,
  [SMALL_STATE(49)] = 3031,
  [SMALL_STATE(50)] = 3072,
  [SMALL_STATE(51)] = 3113,
  [SMALL_STATE(52)] = 3154,
  [SMALL_STATE(53)] = 3195,
  [SMALL_STATE(54)] = 3236,
  [SMALL_STATE(55)] = 3277,
  [SMALL_STATE(56)] = 3318,
  [SMALL_STATE(57)] = 3359,
  [SMALL_STATE(58)] = 3400,
  [SMALL_STATE(59)] = 3441,
  [SMALL_STATE(60)] = 3493,
  [SMALL_STATE(61)] = 3541,
  [SMALL_STATE(62)] = 3613,
  [SMALL_STATE(63)] = 3673,
  [SMALL_STATE(64)] = 3727,
  [SMALL_STATE(65)] = 3785,
  [SMALL_STATE(66)] = 3833,
  [SMALL_STATE(67)] = 3872,
  [SMALL_STATE(68)] = 3911,
  [SMALL_STATE(69)] = 3950,
  [SMALL_STATE(70)] = 3989,
  [SMALL_STATE(71)] = 4028,
  [SMALL_STATE(72)] = 4067,
  [SMALL_STATE(73)] = 4106,
  [SMALL_STATE(74)] = 4145,
  [SMALL_STATE(75)] = 4184,
  [SMALL_STATE(76)] = 4223,
  [SMALL_STATE(77)] = 4262,
  [SMALL_STATE(78)] = 4301,
  [SMALL_STATE(79)] = 4340,
  [SMALL_STATE(80)] = 4400,
  [SMALL_STATE(81)] = 4452,
  [SMALL_STATE(82)] = 4504,
  [SMALL_STATE(83)] = 4556,
  [SMALL_STATE(84)] = 4608,
  [SMALL_STATE(85)] = 4657,
  [SMALL_STATE(86)] = 4706,
  [SMALL_STATE(87)] = 4755,
  [SMALL_STATE(88)] = 4804,
  [SMALL_STATE(89)] = 4853,
  [SMALL_STATE(90)] = 4902,
  [SMALL_STATE(91)] = 4951,
  [SMALL_STATE(92)] = 5000,
  [SMALL_STATE(93)] = 5049,
  [SMALL_STATE(94)] = 5098,
  [SMALL_STATE(95)] = 5147,
  [SMALL_STATE(96)] = 5196,
  [SMALL_STATE(97)] = 5249,
  [SMALL_STATE(98)] = 5292,
  [SMALL_STATE(99)] = 5341,
  [SMALL_STATE(100)] = 5390,
  [SMALL_STATE(101)] = 5443,
  [SMALL_STATE(102)] = 5496,
  [SMALL_STATE(103)] = 5545,
  [SMALL_STATE(104)] = 5594,
  [SMALL_STATE(105)] = 5643,
  [SMALL_STATE(106)] = 5688,
  [SMALL_STATE(107)] = 5737,
  [SMALL_STATE(108)] = 5790,
  [SMALL_STATE(109)] = 5843,
  [SMALL_STATE(110)] = 5886,
  [SMALL_STATE(111)] = 5933,
  [SMALL_STATE(112)] = 5982,
  [SMALL_STATE(113)] = 6031,
  [SMALL_STATE(114)] = 6080,
  [SMALL_STATE(115)] = 6131,
  [SMALL_STATE(116)] = 6180,
  [SMALL_STATE(117)] = 6229,
  [SMALL_STATE(118)] = 6275,
  [SMALL_STATE(119)] = 6321,
  [SMALL_STATE(120)] = 6367,
  [SMALL_STATE(121)] = 6413,
  [SMALL_STATE(122)] = 6459,
  [SMALL_STATE(123)] = 6505,
  [SMALL_STATE(124)] = 6551,
  [SMALL_STATE(125)] = 6597,
  [SMALL_STATE(126)] = 6643,
  [SMALL_STATE(127)] = 6689,
  [SMALL_STATE(128)] = 6735,
  [SMALL_STATE(129)] = 6781,
  [SMALL_STATE(130)] = 6815,
  [SMALL_STATE(131)] = 6849,
  [SMALL_STATE(132)] = 6895,
  [SMALL_STATE(133)] = 6929,
  [SMALL_STATE(134)] = 6963,
  [SMALL_STATE(135)] = 7009,
  [SMALL_STATE(136)] = 7055,
  [SMALL_STATE(137)] = 7101,
  [SMALL_STATE(138)] = 7147,
  [SMALL_STATE(139)] = 7193,
  [SMALL_STATE(140)] = 7239,
  [SMALL_STATE(141)] = 7285,
  [SMALL_STATE(142)] = 7319,
  [SMALL_STATE(143)] = 7365,
  [SMALL_STATE(144)] = 7399,
  [SMALL_STATE(145)] = 7445,
  [SMALL_STATE(146)] = 7479,
  [SMALL_STATE(147)] = 7513,
  [SMALL_STATE(148)] = 7559,
  [SMALL_STATE(149)] = 7605,
  [SMALL_STATE(150)] = 7651,
  [SMALL_STATE(151)] = 7685,
  [SMALL_STATE(152)] = 7719,
  [SMALL_STATE(153)] = 7765,
  [SMALL_STATE(154)] = 7811,
  [SMALL_STATE(155)] = 7857,
  [SMALL_STATE(156)] = 7903,
  [SMALL_STATE(157)] = 7949,
  [SMALL_STATE(158)] = 7995,
  [SMALL_STATE(159)] = 8041,
  [SMALL_STATE(160)] = 8075,
  [SMALL_STATE(161)] = 8109,
  [SMALL_STATE(162)] = 8155,
  [SMALL_STATE(163)] = 8201,
  [SMALL_STATE(164)] = 8247,
  [SMALL_STATE(165)] = 8293,
  [SMALL_STATE(166)] = 8327,
  [SMALL_STATE(167)] = 8373,
  [SMALL_STATE(168)] = 8419,
  [SMALL_STATE(169)] = 8465,
  [SMALL_STATE(170)] = 8511,
  [SMALL_STATE(171)] = 8557,
  [SMALL_STATE(172)] = 8603,
  [SMALL_STATE(173)] = 8649,
  [SMALL_STATE(174)] = 8695,
  [SMALL_STATE(175)] = 8741,
  [SMALL_STATE(176)] = 8787,
  [SMALL_STATE(177)] = 8833,
  [SMALL_STATE(178)] = 8879,
  [SMALL_STATE(179)] = 8925,
  [SMALL_STATE(180)] = 8986,
  [SMALL_STATE(181)] = 9019,
  [SMALL_STATE(182)] = 9052,
  [SMALL_STATE(183)] = 9085,
  [SMALL_STATE(184)] = 9118,
  [SMALL_STATE(185)] = 9176,
  [SMALL_STATE(186)] = 9234,
  [SMALL_STATE(187)] = 9292,
  [SMALL_STATE(188)] = 9350,
  [SMALL_STATE(189)] = 9403,
  [SMALL_STATE(190)] = 9456,
  [SMALL_STATE(191)] = 9511,
  [SMALL_STATE(192)] = 9564,
  [SMALL_STATE(193)] = 9617,
  [SMALL_STATE(194)] = 9672,
  [SMALL_STATE(195)] = 9725,
  [SMALL_STATE(196)] = 9778,
  [SMALL_STATE(197)] = 9830,
  [SMALL_STATE(198)] = 9882,
  [SMALL_STATE(199)] = 9934,
  [SMALL_STATE(200)] = 9986,
  [SMALL_STATE(201)] = 10038,
  [SMALL_STATE(202)] = 10090,
  [SMALL_STATE(203)] = 10142,
  [SMALL_STATE(204)] = 10194,
  [SMALL_STATE(205)] = 10246,
  [SMALL_STATE(206)] = 10298,
  [SMALL_STATE(207)] = 10350,
  [SMALL_STATE(208)] = 10402,
  [SMALL_STATE(209)] = 10454,
  [SMALL_STATE(210)] = 10506,
  [SMALL_STATE(211)] = 10558,
  [SMALL_STATE(212)] = 10580,
  [SMALL_STATE(213)] = 10607,
  [SMALL_STATE(214)] = 10634,
  [SMALL_STATE(215)] = 10661,
  [SMALL_STATE(216)] = 10682,
  [SMALL_STATE(217)] = 10709,
  [SMALL_STATE(218)] = 10736,
  [SMALL_STATE(219)] = 10763,
  [SMALL_STATE(220)] = 10790,
  [SMALL_STATE(221)] = 10817,
  [SMALL_STATE(222)] = 10844,
  [SMALL_STATE(223)] = 10867,
  [SMALL_STATE(224)] = 10890,
  [SMALL_STATE(225)] = 10913,
  [SMALL_STATE(226)] = 10932,
  [SMALL_STATE(227)] = 10949,
  [SMALL_STATE(228)] = 10964,
  [SMALL_STATE(229)] = 10983,
  [SMALL_STATE(230)] = 10998,
  [SMALL_STATE(231)] = 11021,
  [SMALL_STATE(232)] = 11044,
  [SMALL_STATE(233)] = 11067,
  [SMALL_STATE(234)] = 11090,
  [SMALL_STATE(235)] = 11113,
  [SMALL_STATE(236)] = 11136,
  [SMALL_STATE(237)] = 11155,
  [SMALL_STATE(238)] = 11169,
  [SMALL_STATE(239)] = 11187,
  [SMALL_STATE(240)] = 11201,
  [SMALL_STATE(241)] = 11219,
  [SMALL_STATE(242)] = 11233,
  [SMALL_STATE(243)] = 11251,
  [SMALL_STATE(244)] = 11265,
  [SMALL_STATE(245)] = 11279,
  [SMALL_STATE(246)] = 11293,
  [SMALL_STATE(247)] = 11307,
  [SMALL_STATE(248)] = 11321,
  [SMALL_STATE(249)] = 11335,
  [SMALL_STATE(250)] = 11349,
  [SMALL_STATE(251)] = 11363,
  [SMALL_STATE(252)] = 11381,
  [SMALL_STATE(253)] = 11399,
  [SMALL_STATE(254)] = 11417,
  [SMALL_STATE(255)] = 11435,
  [SMALL_STATE(256)] = 11449,
  [SMALL_STATE(257)] = 11463,
  [SMALL_STATE(258)] = 11481,
  [SMALL_STATE(259)] = 11499,
  [SMALL_STATE(260)] = 11513,
  [SMALL_STATE(261)] = 11527,
  [SMALL_STATE(262)] = 11541,
  [SMALL_STATE(263)] = 11559,
  [SMALL_STATE(264)] = 11574,
  [SMALL_STATE(265)] = 11589,
  [SMALL_STATE(266)] = 11602,
  [SMALL_STATE(267)] = 11616,
  [SMALL_STATE(268)] = 11628,
  [SMALL_STATE(269)] = 11642,
  [SMALL_STATE(270)] = 11655,
  [SMALL_STATE(271)] = 11668,
  [SMALL_STATE(272)] = 11677,
  [SMALL_STATE(273)] = 11688,
  [SMALL_STATE(274)] = 11701,
  [SMALL_STATE(275)] = 11712,
  [SMALL_STATE(276)] = 11721,
  [SMALL_STATE(277)] = 11734,
  [SMALL_STATE(278)] = 11743,
  [SMALL_STATE(279)] = 11756,
  [SMALL_STATE(280)] = 11769,
  [SMALL_STATE(281)] = 11782,
  [SMALL_STATE(282)] = 11791,
  [SMALL_STATE(283)] = 11802,
  [SMALL_STATE(284)] = 11810,
  [SMALL_STATE(285)] = 11818,
  [SMALL_STATE(286)] = 11826,
  [SMALL_STATE(287)] = 11834,
  [SMALL_STATE(288)] = 11844,
  [SMALL_STATE(289)] = 11852,
  [SMALL_STATE(290)] = 11860,
  [SMALL_STATE(291)] = 11868,
  [SMALL_STATE(292)] = 11878,
  [SMALL_STATE(293)] = 11888,
  [SMALL_STATE(294)] = 11898,
  [SMALL_STATE(295)] = 11906,
  [SMALL_STATE(296)] = 11914,
  [SMALL_STATE(297)] = 11922,
  [SMALL_STATE(298)] = 11930,
  [SMALL_STATE(299)] = 11937,
  [SMALL_STATE(300)] = 11944,
  [SMALL_STATE(301)] = 11951,
  [SMALL_STATE(302)] = 11958,
  [SMALL_STATE(303)] = 11965,
  [SMALL_STATE(304)] = 11972,
  [SMALL_STATE(305)] = 11979,
  [SMALL_STATE(306)] = 11986,
  [SMALL_STATE(307)] = 11993,
  [SMALL_STATE(308)] = 12000,
  [SMALL_STATE(309)] = 12007,
  [SMALL_STATE(310)] = 12014,
  [SMALL_STATE(311)] = 12021,
  [SMALL_STATE(312)] = 12028,
  [SMALL_STATE(313)] = 12035,
  [SMALL_STATE(314)] = 12042,
  [SMALL_STATE(315)] = 12049,
  [SMALL_STATE(316)] = 12056,
  [SMALL_STATE(317)] = 12063,
  [SMALL_STATE(318)] = 12070,
  [SMALL_STATE(319)] = 12077,
  [SMALL_STATE(320)] = 12084,
  [SMALL_STATE(321)] = 12091,
  [SMALL_STATE(322)] = 12098,
  [SMALL_STATE(323)] = 12105,
  [SMALL_STATE(324)] = 12112,
  [SMALL_STATE(325)] = 12119,
  [SMALL_STATE(326)] = 12126,
  [SMALL_STATE(327)] = 12133,
  [SMALL_STATE(328)] = 12140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 15),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 15),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 20),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 14),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 16),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 16),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 7),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 7),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 8),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 8),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 11),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 11),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 11),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 11),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 10),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 10),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 22),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 23),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 21),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(125),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(128),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(221),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(249),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(249),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(221),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(235),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(265),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(265),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(235),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 15),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 15),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(93),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(302),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 5),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_statement, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec_statement, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 15),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 15),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 9),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(267),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 15),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 24),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 19),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 18),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 12),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [779] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
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
