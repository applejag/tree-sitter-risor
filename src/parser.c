#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 358
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 1
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 26

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
  sym_map_or_set_literal = 111,
  sym_set_literal_values = 112,
  sym_map_literal_values = 113,
  sym_map_literal_pair = 114,
  sym_unary_expression = 115,
  sym_binary_expression = 116,
  sym_string = 117,
  sym_string_template = 118,
  sym_escape_sequence = 119,
  sym_string_template_argument = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_parameter_list_repeat1 = 122,
  aux_sym__statement_list_repeat1 = 123,
  aux_sym_switch_statement_repeat1 = 124,
  aux_sym_expression_list_repeat1 = 125,
  aux_sym_map_literal_values_repeat1 = 126,
  aux_sym_string_repeat1 = 127,
  aux_sym_string_template_repeat1 = 128,
  alias_sym_field_identifier = 129,
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
  [sym_map_or_set_literal] = "map_or_set_literal",
  [sym_set_literal_values] = "set_literal_values",
  [sym_map_literal_values] = "map_literal_values",
  [sym_map_literal_pair] = "map_literal_pair",
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
  [aux_sym_map_literal_values_repeat1] = "map_literal_values_repeat1",
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
  [sym_map_or_set_literal] = sym_map_or_set_literal,
  [sym_set_literal_values] = sym_set_literal_values,
  [sym_map_literal_values] = sym_map_literal_values,
  [sym_map_literal_pair] = sym_map_literal_pair,
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
  [aux_sym_map_literal_values_repeat1] = aux_sym_map_literal_values_repeat1,
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
  [sym_map_or_set_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_set_literal_values] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal_values] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal_pair] = {
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
  [aux_sym_map_literal_values_repeat1] = {
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
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 3},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 3},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 4},
  [25] = {.index = 47, .length = 3},
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
    {field_name, 0},
    {field_value, 2},
  [21] =
    {field_name, 1},
    {field_value, 3},
  [23] =
    {field_update, 2},
  [24] =
    {field_condition, 1},
  [25] =
    {field_initializer, 0},
  [26] =
    {field_value, 1},
  [27] =
    {field_index, 2},
    {field_operand, 0},
  [29] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [32] =
    {field_condition, 1},
    {field_update, 3},
  [34] =
    {field_initializer, 0},
    {field_update, 3},
  [36] =
    {field_condition, 2},
    {field_initializer, 0},
  [38] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [41] =
    {field_default, 2},
    {field_name, 0},
  [43] =
    {field_left, 0},
    {field_left, 1},
    {field_left, 2},
    {field_right, 4},
  [47] =
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
  [10] = 9,
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
  [47] = 46,
  [48] = 46,
  [49] = 46,
  [50] = 20,
  [51] = 51,
  [52] = 19,
  [53] = 18,
  [54] = 22,
  [55] = 25,
  [56] = 24,
  [57] = 36,
  [58] = 58,
  [59] = 44,
  [60] = 42,
  [61] = 27,
  [62] = 41,
  [63] = 32,
  [64] = 31,
  [65] = 45,
  [66] = 39,
  [67] = 37,
  [68] = 58,
  [69] = 29,
  [70] = 34,
  [71] = 35,
  [72] = 26,
  [73] = 38,
  [74] = 58,
  [75] = 33,
  [76] = 58,
  [77] = 40,
  [78] = 43,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 20,
  [84] = 84,
  [85] = 85,
  [86] = 19,
  [87] = 87,
  [88] = 18,
  [89] = 84,
  [90] = 90,
  [91] = 22,
  [92] = 92,
  [93] = 90,
  [94] = 94,
  [95] = 23,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 84,
  [100] = 25,
  [101] = 24,
  [102] = 90,
  [103] = 90,
  [104] = 104,
  [105] = 84,
  [106] = 97,
  [107] = 107,
  [108] = 104,
  [109] = 107,
  [110] = 110,
  [111] = 97,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 44,
  [116] = 116,
  [117] = 117,
  [118] = 112,
  [119] = 113,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 114,
  [130] = 125,
  [131] = 114,
  [132] = 125,
  [133] = 114,
  [134] = 116,
  [135] = 117,
  [136] = 128,
  [137] = 112,
  [138] = 128,
  [139] = 113,
  [140] = 120,
  [141] = 27,
  [142] = 41,
  [143] = 128,
  [144] = 144,
  [145] = 145,
  [146] = 121,
  [147] = 32,
  [148] = 31,
  [149] = 45,
  [150] = 39,
  [151] = 122,
  [152] = 37,
  [153] = 33,
  [154] = 154,
  [155] = 120,
  [156] = 112,
  [157] = 123,
  [158] = 158,
  [159] = 124,
  [160] = 160,
  [161] = 116,
  [162] = 29,
  [163] = 34,
  [164] = 117,
  [165] = 35,
  [166] = 166,
  [167] = 36,
  [168] = 42,
  [169] = 117,
  [170] = 113,
  [171] = 26,
  [172] = 38,
  [173] = 120,
  [174] = 125,
  [175] = 116,
  [176] = 40,
  [177] = 43,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 22,
  [183] = 183,
  [184] = 24,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 20,
  [189] = 189,
  [190] = 18,
  [191] = 19,
  [192] = 192,
  [193] = 25,
  [194] = 39,
  [195] = 42,
  [196] = 40,
  [197] = 29,
  [198] = 37,
  [199] = 35,
  [200] = 43,
  [201] = 45,
  [202] = 26,
  [203] = 44,
  [204] = 34,
  [205] = 38,
  [206] = 27,
  [207] = 36,
  [208] = 31,
  [209] = 32,
  [210] = 33,
  [211] = 41,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 214,
  [218] = 214,
  [219] = 215,
  [220] = 215,
  [221] = 215,
  [222] = 187,
  [223] = 186,
  [224] = 189,
  [225] = 185,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 232,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 232,
  [238] = 232,
  [239] = 239,
  [240] = 240,
  [241] = 235,
  [242] = 235,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 245,
  [250] = 248,
  [251] = 251,
  [252] = 248,
  [253] = 248,
  [254] = 245,
  [255] = 245,
  [256] = 256,
  [257] = 257,
  [258] = 257,
  [259] = 259,
  [260] = 181,
  [261] = 257,
  [262] = 259,
  [263] = 263,
  [264] = 259,
  [265] = 257,
  [266] = 266,
  [267] = 180,
  [268] = 268,
  [269] = 259,
  [270] = 270,
  [271] = 271,
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
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 291,
  [293] = 293,
  [294] = 294,
  [295] = 281,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 302,
  [304] = 304,
  [305] = 300,
  [306] = 302,
  [307] = 300,
  [308] = 308,
  [309] = 309,
  [310] = 302,
  [311] = 300,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 273,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 284,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 327,
  [330] = 330,
  [331] = 331,
  [332] = 324,
  [333] = 333,
  [334] = 324,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 326,
  [339] = 327,
  [340] = 326,
  [341] = 326,
  [342] = 342,
  [343] = 343,
  [344] = 328,
  [345] = 345,
  [346] = 324,
  [347] = 347,
  [348] = 327,
  [349] = 343,
  [350] = 342,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
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
      if (eof) ADVANCE(32);
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(92);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(88);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '[') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(97);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(114);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 28:
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_string_template_char);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_string_template_char);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_format_sequence);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string_backtick);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
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
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
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
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 31},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 31},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 31},
  [113] = {.lex_state = 31},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 31},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 31},
  [126] = {.lex_state = 31},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 31},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 31},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 31},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 31},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 31},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 31},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 31},
  [160] = {.lex_state = 31},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 31},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 31},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 31},
  [179] = {.lex_state = 31},
  [180] = {.lex_state = 31},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 3},
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
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
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
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 31},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 31},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 31},
  [272] = {.lex_state = 31},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 31},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 31},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 31},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 31},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 31},
  [292] = {.lex_state = 31},
  [293] = {.lex_state = 31},
  [294] = {.lex_state = 31},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 31},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 31},
  [299] = {.lex_state = 31},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 31},
  [302] = {.lex_state = 31},
  [303] = {.lex_state = 31},
  [304] = {.lex_state = 31},
  [305] = {.lex_state = 31},
  [306] = {.lex_state = 31},
  [307] = {.lex_state = 31},
  [308] = {.lex_state = 31},
  [309] = {.lex_state = 31},
  [310] = {.lex_state = 31},
  [311] = {.lex_state = 31},
  [312] = {.lex_state = 31},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 31},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 31},
  [317] = {.lex_state = 31},
  [318] = {.lex_state = 31},
  [319] = {.lex_state = 31},
  [320] = {.lex_state = 31},
  [321] = {.lex_state = 31},
  [322] = {.lex_state = 31},
  [323] = {.lex_state = 31},
  [324] = {.lex_state = 31},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 31},
  [327] = {.lex_state = 31},
  [328] = {.lex_state = 31},
  [329] = {.lex_state = 31},
  [330] = {.lex_state = 31},
  [331] = {.lex_state = 31},
  [332] = {.lex_state = 31},
  [333] = {.lex_state = 31},
  [334] = {.lex_state = 31},
  [335] = {.lex_state = 31},
  [336] = {.lex_state = 31},
  [337] = {.lex_state = 31},
  [338] = {.lex_state = 31},
  [339] = {.lex_state = 31},
  [340] = {.lex_state = 31},
  [341] = {.lex_state = 31},
  [342] = {.lex_state = 31},
  [343] = {.lex_state = 31},
  [344] = {.lex_state = 31},
  [345] = {.lex_state = 31},
  [346] = {.lex_state = 31},
  [347] = {.lex_state = 31},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 31},
  [350] = {.lex_state = 31},
  [351] = {.lex_state = 31},
  [352] = {.lex_state = 31},
  [353] = {.lex_state = 31},
  [354] = {.lex_state = 31},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 31},
  [357] = {.lex_state = 31},
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
    [sym_source_file] = STATE(354),
    [sym__definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym__statement] = STATE(313),
    [sym__simple_statement] = STATE(290),
    [sym__declaration] = STATE(290),
    [sym_const_declaration] = STATE(290),
    [sym_var_declaration] = STATE(290),
    [sym_short_var_declaration] = STATE(290),
    [sym_inc_statement] = STATE(290),
    [sym_dec_statement] = STATE(290),
    [sym_assignment_statement] = STATE(290),
    [sym_break_statement] = STATE(290),
    [sym_continue_statement] = STATE(290),
    [sym_return_statement] = STATE(290),
    [sym_if_statement] = STATE(290),
    [sym_for_statement] = STATE(290),
    [sym_switch_statement] = STATE(290),
    [sym_expression_statement] = STATE(290),
    [sym__expression] = STATE(23),
    [sym_selector_expression] = STATE(44),
    [sym_index_expression] = STATE(44),
    [sym_expression_list] = STATE(291),
    [sym_parenthesized_expression] = STATE(44),
    [sym_call_expression] = STATE(44),
    [sym__complex_literal] = STATE(44),
    [sym_list_literal] = STATE(44),
    [sym_map_or_set_literal] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_string] = STATE(44),
    [sym_string_template] = STATE(44),
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
    STATE(23), 1,
      sym__expression,
    STATE(291), 1,
      sym_expression_list,
    STATE(313), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
    STATE(23), 1,
      sym__expression,
    STATE(291), 1,
      sym_expression_list,
    STATE(313), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [226] = 26,
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
    STATE(28), 1,
      sym__expression,
    STATE(256), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    STATE(301), 1,
      sym_map_literal_pair,
    STATE(328), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(334), 2,
      sym_set_literal_values,
      sym_map_literal_values,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [341] = 25,
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
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__expression,
    STATE(256), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    STATE(315), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(102), 2,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [453] = 25,
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
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__expression,
    STATE(256), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    STATE(304), 1,
      sym__statement_list,
    ACTIONS(39), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(106), 2,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [565] = 24,
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
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__expression,
    STATE(278), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    ACTIONS(39), 2,
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
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [674] = 24,
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
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__expression,
    STATE(278), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    ACTIONS(39), 2,
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
    ACTIONS(33), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [783] = 24,
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
    STATE(23), 1,
      sym__expression,
    STATE(256), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    STATE(328), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [891] = 24,
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
    STATE(23), 1,
      sym__expression,
    STATE(256), 1,
      sym__statement,
    STATE(291), 1,
      sym_expression_list,
    STATE(344), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [999] = 22,
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
    STATE(23), 1,
      sym__expression,
    STATE(278), 1,
      sym__statement,
    STATE(291), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
    STATE(290), 15,
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
  [1101] = 18,
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
    STATE(51), 1,
      sym__expression,
    STATE(271), 1,
      sym_expression_list,
    STATE(279), 1,
      sym_block,
    ACTIONS(140), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(318), 2,
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
    STATE(337), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1186] = 15,
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
    STATE(95), 1,
      sym__expression,
    STATE(292), 1,
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
    STATE(357), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1261] = 15,
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
    STATE(95), 1,
      sym__expression,
    STATE(292), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1336] = 15,
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
    STATE(95), 1,
      sym__expression,
    STATE(292), 1,
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
    STATE(325), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1411] = 15,
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
    STATE(95), 1,
      sym__expression,
    STATE(292), 1,
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
    STATE(356), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1486] = 17,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_case,
    ACTIONS(164), 1,
      anon_sym_default,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym__expression,
    STATE(301), 1,
      sym_map_literal_pair,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(324), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    STATE(272), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1562] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(186), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(188), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(190), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(178), 17,
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
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1621] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(186), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(188), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(190), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(178), 16,
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
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
  [1682] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(196), 32,
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
      anon_sym_COLON,
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
  [1735] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym__expression,
    ACTIONS(202), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(198), 7,
      sym_identifier,
      sym_string_backtick,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(210), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [1798] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(186), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(188), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 23,
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
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1855] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH_DASH,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    STATE(43), 1,
      sym_argument_list,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(186), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(218), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(188), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(190), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(222), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1928] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(188), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 26,
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
      anon_sym_COLON,
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
  [1983] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(178), 32,
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
      anon_sym_COLON,
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
  [2036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 35,
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
      anon_sym_COLON,
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
  [2080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 35,
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
      anon_sym_COLON,
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
  [2124] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH_DASH,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(238), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym_argument_list,
    STATE(251), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(186), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(218), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(188), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(190), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(222), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [2198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 35,
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
      anon_sym_COLON,
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
  [2242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(248), 4,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(246), 31,
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
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 35,
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
      anon_sym_COLON,
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
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 35,
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
      anon_sym_COLON,
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
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 35,
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
      anon_sym_COLON,
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
  [2420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 35,
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
      anon_sym_COLON,
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
  [2464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 35,
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
      anon_sym_COLON,
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
  [2508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 35,
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
      anon_sym_COLON,
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
  [2552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 35,
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
      anon_sym_COLON,
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
  [2596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 35,
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
      anon_sym_COLON,
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
  [2640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 35,
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
      anon_sym_COLON,
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
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 35,
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
      anon_sym_COLON,
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
  [2728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 35,
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
      anon_sym_COLON,
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
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(246), 35,
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
      anon_sym_COLON,
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
  [2816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 35,
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
      anon_sym_COLON,
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
  [2860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 35,
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
      anon_sym_COLON,
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
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 35,
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
      anon_sym_COLON,
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
  [2948] = 14,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym__expression,
    STATE(301), 1,
      sym_map_literal_pair,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(334), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3013] = 14,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym__expression,
    STATE(301), 1,
      sym_map_literal_pair,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(332), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3078] = 14,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym__expression,
    STATE(301), 1,
      sym_map_literal_pair,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(324), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3143] = 14,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym__expression,
    STATE(301), 1,
      sym_map_literal_pair,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(346), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_argument_list,
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
    ACTIONS(194), 21,
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
  [3258] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(332), 1,
      anon_sym_DASH_DASH,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_AMP_AMP,
    ACTIONS(350), 1,
      anon_sym_PIPE_PIPE,
    STATE(177), 1,
      sym_argument_list,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    STATE(283), 1,
      sym_block,
    ACTIONS(340), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(342), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(344), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3336] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(178), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(354), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(356), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 12,
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
  [3398] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(178), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(354), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(356), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 13,
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
  [3458] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(354), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(176), 17,
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
  [3514] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(178), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 21,
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
  [3564] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(354), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 7,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 17,
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
  [3618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 24,
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
  [3659] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [3720] = 3,
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
  [3761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 24,
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
  [3802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 24,
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
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 24,
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
  [3884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 24,
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
  [3925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 24,
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
  [3966] = 3,
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
  [4007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 24,
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
  [4048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 24,
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
  [4089] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4150] = 3,
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
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 24,
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
  [4232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 24,
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
  [4273] = 3,
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
    ACTIONS(230), 24,
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
  [4314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 24,
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
  [4355] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 24,
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
  [4457] = 13,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 24,
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
  [4559] = 3,
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
  [4600] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(335), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4658] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(333), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4716] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4774] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym__expression,
    STATE(322), 1,
      sym_map_literal_pair,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4832] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(196), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 20,
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
  [4880] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4938] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_range,
    STATE(225), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [4996] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_AMP_AMP,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(340), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(342), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(344), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 11,
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
  [5056] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_range,
    STATE(224), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5114] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(340), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(342), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(344), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 12,
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
  [5172] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5230] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5288] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(340), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(178), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(342), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(176), 16,
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
  [5342] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5400] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5458] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_range,
    STATE(223), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5516] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(332), 1,
      anon_sym_DASH_DASH,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_AMP_AMP,
    ACTIONS(350), 1,
      anon_sym_PIPE_PIPE,
    STATE(177), 1,
      sym_argument_list,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(340), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(342), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(344), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [5588] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(353), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5646] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5704] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5762] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(178), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 20,
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
  [5868] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(340), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(342), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 6,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 16,
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
  [5920] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [5978] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6036] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(350), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6094] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6152] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6210] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(349), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6268] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(342), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6326] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    STATE(343), 1,
      sym_expression_list,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6384] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(354), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(352), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(356), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [6446] = 12,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6504] = 11,
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
    STATE(22), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6559] = 11,
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
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6614] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(233), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6669] = 3,
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
  [6708] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6763] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6818] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6873] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6928] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(184), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [6983] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7038] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7093] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7148] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(222), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7203] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7258] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7313] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7368] = 11,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7423] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7478] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7533] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7588] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7643] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7698] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7753] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7808] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7863] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7918] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [7973] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8028] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 23,
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
  [8122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 23,
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
  [8161] = 11,
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
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8216] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8271] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8326] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 23,
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
  [8420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 23,
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
  [8459] = 3,
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
  [8498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 23,
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
  [8537] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 23,
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
  [8631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 23,
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
  [8670] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8725] = 11,
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
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8780] = 11,
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
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8835] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8890] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [8945] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym__expression,
    ACTIONS(432), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(203), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9000] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9055] = 11,
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
    STATE(19), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9110] = 3,
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
  [9149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 23,
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
  [9188] = 11,
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
    STATE(18), 1,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 23,
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
  [9282] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 23,
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
  [9376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 23,
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
  [9415] = 11,
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
    ACTIONS(418), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9470] = 11,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9525] = 3,
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
    ACTIONS(230), 23,
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
  [9564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 23,
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
  [9603] = 11,
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
    STATE(44), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9658] = 11,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym__expression,
    ACTIONS(174), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(154), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(59), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9713] = 11,
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
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
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
    STATE(115), 11,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_string_template,
  [9768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 23,
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
  [9807] = 3,
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
  [9846] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(436), 14,
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
  [9883] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(440), 14,
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
    ACTIONS(438), 15,
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
  [9920] = 3,
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
    ACTIONS(442), 15,
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
  [9957] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(248), 14,
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
    ACTIONS(244), 15,
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
  [9994] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 13,
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
  [10041] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(458), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10094] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 16,
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
  [10139] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(466), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(468), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10192] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(472), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10245] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(476), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10298] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(196), 22,
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
  [10341] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(478), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(480), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10394] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(178), 7,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10443] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_AMP_AMP,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(178), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
    ACTIONS(454), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LF,
    ACTIONS(484), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(246), 21,
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
  [10531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_argument_list,
    ACTIONS(178), 22,
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
  [10574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 25,
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
  [10608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(246), 25,
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
  [10642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 25,
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
  [10676] = 3,
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
  [10710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 25,
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
  [10744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 25,
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
  [10778] = 3,
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
  [10812] = 3,
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
  [10846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
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
  [10880] = 3,
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
  [10914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 25,
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
  [10948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 25,
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
  [10982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 25,
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
  [11016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 25,
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
  [11050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 25,
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
  [11084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 25,
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
  [11118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 25,
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
  [11152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 25,
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
  [11186] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_argument_list,
    STATE(308), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11247] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11308] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    STATE(300), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11366] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    STATE(303), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11424] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    STATE(307), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11482] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    STATE(311), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11540] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    STATE(305), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11598] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    STATE(302), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11656] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    STATE(306), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11714] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    STATE(310), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11772] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11825] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11878] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11931] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(466), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11984] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12037] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(518), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12090] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    STATE(78), 1,
      sym_argument_list,
    STATE(263), 1,
      sym_block,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12145] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12197] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12249] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12301] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12353] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12405] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12457] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12509] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12561] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12613] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12665] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12717] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12769] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12821] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12873] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12925] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(410), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [12949] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      anon_sym_SQUOTE2,
    ACTIONS(555), 1,
      sym_string_template_char,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(561), 1,
      sym_format_sequence,
    STATE(246), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [12976] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_SQUOTE2,
    ACTIONS(568), 1,
      sym_string_template_char,
    ACTIONS(571), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(574), 1,
      sym_escape_sequence_invalid,
    ACTIONS(577), 1,
      sym_format_sequence,
    STATE(246), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13003] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_COLON,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(580), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13024] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(584), 1,
      anon_sym_SQUOTE2,
    ACTIONS(586), 1,
      sym_string_template_char,
    ACTIONS(588), 1,
      sym_format_sequence,
    STATE(254), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13051] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      sym_string_template_char,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(561), 1,
      sym_format_sequence,
    ACTIONS(590), 1,
      anon_sym_SQUOTE2,
    STATE(246), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13078] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(592), 1,
      anon_sym_SQUOTE2,
    ACTIONS(594), 1,
      sym_string_template_char,
    ACTIONS(596), 1,
      sym_format_sequence,
    STATE(245), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13105] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(580), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13126] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(600), 1,
      anon_sym_SQUOTE2,
    ACTIONS(602), 1,
      sym_string_template_char,
    ACTIONS(604), 1,
      sym_format_sequence,
    STATE(255), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13153] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(606), 1,
      anon_sym_SQUOTE2,
    ACTIONS(608), 1,
      sym_string_template_char,
    ACTIONS(610), 1,
      sym_format_sequence,
    STATE(249), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      sym_string_template_char,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(561), 1,
      sym_format_sequence,
    ACTIONS(612), 1,
      anon_sym_SQUOTE2,
    STATE(246), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13207] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      sym_string_template_char,
    ACTIONS(557), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(559), 1,
      sym_escape_sequence_invalid,
    ACTIONS(561), 1,
      sym_format_sequence,
    ACTIONS(614), 1,
      anon_sym_SQUOTE2,
    STATE(246), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(270), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(618), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(620), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13253] = 7,
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
    STATE(269), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13276] = 7,
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
    STATE(262), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13299] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(638), 1,
      anon_sym_DQUOTE2,
    ACTIONS(640), 1,
      sym__string_non_escaped_content,
    ACTIONS(642), 1,
      sym_format_sequence,
    STATE(268), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(248), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [13337] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(644), 1,
      anon_sym_DQUOTE2,
    ACTIONS(646), 1,
      sym__string_non_escaped_content,
    ACTIONS(648), 1,
      sym_format_sequence,
    STATE(259), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13360] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(640), 1,
      sym__string_non_escaped_content,
    ACTIONS(642), 1,
      sym_format_sequence,
    ACTIONS(650), 1,
      anon_sym_DQUOTE2,
    STATE(268), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      anon_sym_else,
    ACTIONS(654), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(640), 1,
      sym__string_non_escaped_content,
    ACTIONS(642), 1,
      sym_format_sequence,
    ACTIONS(658), 1,
      anon_sym_DQUOTE2,
    STATE(268), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13423] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(660), 1,
      anon_sym_DQUOTE2,
    ACTIONS(662), 1,
      sym__string_non_escaped_content,
    ACTIONS(664), 1,
      sym_format_sequence,
    STATE(264), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(266), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(669), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(672), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [13480] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DQUOTE2,
    ACTIONS(676), 1,
      sym__string_non_escaped_content,
    ACTIONS(679), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(682), 1,
      sym_escape_sequence_invalid,
    ACTIONS(685), 1,
      sym_format_sequence,
    STATE(268), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13503] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(628), 1,
      sym_escape_sequence_invalid,
    ACTIONS(640), 1,
      sym__string_non_escaped_content,
    ACTIONS(642), 1,
      sym_format_sequence,
    ACTIONS(688), 1,
      anon_sym_DQUOTE2,
    STATE(268), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(266), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(692), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(110), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13545] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COLON_EQ,
    ACTIONS(694), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13559] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_case,
    ACTIONS(702), 1,
      anon_sym_default,
    STATE(288), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13577] = 3,
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
  [13591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(714), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13619] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(312), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13637] = 3,
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
  [13651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(672), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(730), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(734), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(738), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [13707] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_case,
    ACTIONS(702), 1,
      anon_sym_default,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    STATE(286), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(752), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [13767] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_case,
    ACTIONS(702), 1,
      anon_sym_default,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(288), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13799] = 5,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      anon_sym_case,
    ACTIONS(765), 1,
      anon_sym_default,
    STATE(288), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [13817] = 3,
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
  [13831] = 3,
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
  [13845] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COLON_EQ,
    ACTIONS(776), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13859] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_COLON_EQ,
    ACTIONS(694), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13873] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(323), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13888] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(323), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(738), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [13916] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_if,
    STATE(280), 2,
      sym_block,
      sym_if_statement,
  [13930] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(323), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [13942] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_EQ,
    ACTIONS(788), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13953] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_map_literal_values_repeat1,
  [13966] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [13979] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_map_literal_values_repeat1,
  [13992] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14005] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14018] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(804), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14027] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14040] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14053] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14066] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14079] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_map_literal_values_repeat1,
  [14092] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14105] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
  [14118] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_parameter_list_repeat1,
  [14131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LF,
    ACTIONS(827), 2,
      anon_sym_SEMI,
      anon_sym_,
  [14142] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_parameter_list_repeat1,
  [14155] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(831), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14164] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_parameter_list_repeat1,
  [14177] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14185] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    STATE(283), 1,
      sym_block,
  [14195] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym_parameter_list,
  [14205] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_block,
  [14215] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14223] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(815), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14231] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14239] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
  [14246] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [14253] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
  [14260] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_identifier,
  [14267] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [14274] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_identifier,
  [14281] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
  [14288] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
  [14295] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
  [14302] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_EQ,
  [14309] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [14316] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_EQ,
  [14323] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COLON,
  [14330] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [14337] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [14344] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym_identifier,
  [14351] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [14358] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [14365] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_EQ,
  [14372] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_EQ,
  [14379] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
  [14386] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [14393] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
  [14400] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LBRACE,
  [14407] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_identifier,
  [14414] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_EQ,
  [14421] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_EQ,
  [14428] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_identifier,
  [14435] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
  [14442] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COLON,
  [14449] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
  [14456] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
  [14463] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
  [14470] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 226,
  [SMALL_STATE(5)] = 341,
  [SMALL_STATE(6)] = 453,
  [SMALL_STATE(7)] = 565,
  [SMALL_STATE(8)] = 674,
  [SMALL_STATE(9)] = 783,
  [SMALL_STATE(10)] = 891,
  [SMALL_STATE(11)] = 999,
  [SMALL_STATE(12)] = 1101,
  [SMALL_STATE(13)] = 1186,
  [SMALL_STATE(14)] = 1261,
  [SMALL_STATE(15)] = 1336,
  [SMALL_STATE(16)] = 1411,
  [SMALL_STATE(17)] = 1486,
  [SMALL_STATE(18)] = 1562,
  [SMALL_STATE(19)] = 1621,
  [SMALL_STATE(20)] = 1682,
  [SMALL_STATE(21)] = 1735,
  [SMALL_STATE(22)] = 1798,
  [SMALL_STATE(23)] = 1855,
  [SMALL_STATE(24)] = 1928,
  [SMALL_STATE(25)] = 1983,
  [SMALL_STATE(26)] = 2036,
  [SMALL_STATE(27)] = 2080,
  [SMALL_STATE(28)] = 2124,
  [SMALL_STATE(29)] = 2198,
  [SMALL_STATE(30)] = 2242,
  [SMALL_STATE(31)] = 2288,
  [SMALL_STATE(32)] = 2332,
  [SMALL_STATE(33)] = 2376,
  [SMALL_STATE(34)] = 2420,
  [SMALL_STATE(35)] = 2464,
  [SMALL_STATE(36)] = 2508,
  [SMALL_STATE(37)] = 2552,
  [SMALL_STATE(38)] = 2596,
  [SMALL_STATE(39)] = 2640,
  [SMALL_STATE(40)] = 2684,
  [SMALL_STATE(41)] = 2728,
  [SMALL_STATE(42)] = 2772,
  [SMALL_STATE(43)] = 2816,
  [SMALL_STATE(44)] = 2860,
  [SMALL_STATE(45)] = 2904,
  [SMALL_STATE(46)] = 2948,
  [SMALL_STATE(47)] = 3013,
  [SMALL_STATE(48)] = 3078,
  [SMALL_STATE(49)] = 3143,
  [SMALL_STATE(50)] = 3208,
  [SMALL_STATE(51)] = 3258,
  [SMALL_STATE(52)] = 3336,
  [SMALL_STATE(53)] = 3398,
  [SMALL_STATE(54)] = 3458,
  [SMALL_STATE(55)] = 3514,
  [SMALL_STATE(56)] = 3564,
  [SMALL_STATE(57)] = 3618,
  [SMALL_STATE(58)] = 3659,
  [SMALL_STATE(59)] = 3720,
  [SMALL_STATE(60)] = 3761,
  [SMALL_STATE(61)] = 3802,
  [SMALL_STATE(62)] = 3843,
  [SMALL_STATE(63)] = 3884,
  [SMALL_STATE(64)] = 3925,
  [SMALL_STATE(65)] = 3966,
  [SMALL_STATE(66)] = 4007,
  [SMALL_STATE(67)] = 4048,
  [SMALL_STATE(68)] = 4089,
  [SMALL_STATE(69)] = 4150,
  [SMALL_STATE(70)] = 4191,
  [SMALL_STATE(71)] = 4232,
  [SMALL_STATE(72)] = 4273,
  [SMALL_STATE(73)] = 4314,
  [SMALL_STATE(74)] = 4355,
  [SMALL_STATE(75)] = 4416,
  [SMALL_STATE(76)] = 4457,
  [SMALL_STATE(77)] = 4518,
  [SMALL_STATE(78)] = 4559,
  [SMALL_STATE(79)] = 4600,
  [SMALL_STATE(80)] = 4658,
  [SMALL_STATE(81)] = 4716,
  [SMALL_STATE(82)] = 4774,
  [SMALL_STATE(83)] = 4832,
  [SMALL_STATE(84)] = 4880,
  [SMALL_STATE(85)] = 4938,
  [SMALL_STATE(86)] = 4996,
  [SMALL_STATE(87)] = 5056,
  [SMALL_STATE(88)] = 5114,
  [SMALL_STATE(89)] = 5172,
  [SMALL_STATE(90)] = 5230,
  [SMALL_STATE(91)] = 5288,
  [SMALL_STATE(92)] = 5342,
  [SMALL_STATE(93)] = 5400,
  [SMALL_STATE(94)] = 5458,
  [SMALL_STATE(95)] = 5516,
  [SMALL_STATE(96)] = 5588,
  [SMALL_STATE(97)] = 5646,
  [SMALL_STATE(98)] = 5704,
  [SMALL_STATE(99)] = 5762,
  [SMALL_STATE(100)] = 5820,
  [SMALL_STATE(101)] = 5868,
  [SMALL_STATE(102)] = 5920,
  [SMALL_STATE(103)] = 5978,
  [SMALL_STATE(104)] = 6036,
  [SMALL_STATE(105)] = 6094,
  [SMALL_STATE(106)] = 6152,
  [SMALL_STATE(107)] = 6210,
  [SMALL_STATE(108)] = 6268,
  [SMALL_STATE(109)] = 6326,
  [SMALL_STATE(110)] = 6384,
  [SMALL_STATE(111)] = 6446,
  [SMALL_STATE(112)] = 6504,
  [SMALL_STATE(113)] = 6559,
  [SMALL_STATE(114)] = 6614,
  [SMALL_STATE(115)] = 6669,
  [SMALL_STATE(116)] = 6708,
  [SMALL_STATE(117)] = 6763,
  [SMALL_STATE(118)] = 6818,
  [SMALL_STATE(119)] = 6873,
  [SMALL_STATE(120)] = 6928,
  [SMALL_STATE(121)] = 6983,
  [SMALL_STATE(122)] = 7038,
  [SMALL_STATE(123)] = 7093,
  [SMALL_STATE(124)] = 7148,
  [SMALL_STATE(125)] = 7203,
  [SMALL_STATE(126)] = 7258,
  [SMALL_STATE(127)] = 7313,
  [SMALL_STATE(128)] = 7368,
  [SMALL_STATE(129)] = 7423,
  [SMALL_STATE(130)] = 7478,
  [SMALL_STATE(131)] = 7533,
  [SMALL_STATE(132)] = 7588,
  [SMALL_STATE(133)] = 7643,
  [SMALL_STATE(134)] = 7698,
  [SMALL_STATE(135)] = 7753,
  [SMALL_STATE(136)] = 7808,
  [SMALL_STATE(137)] = 7863,
  [SMALL_STATE(138)] = 7918,
  [SMALL_STATE(139)] = 7973,
  [SMALL_STATE(140)] = 8028,
  [SMALL_STATE(141)] = 8083,
  [SMALL_STATE(142)] = 8122,
  [SMALL_STATE(143)] = 8161,
  [SMALL_STATE(144)] = 8216,
  [SMALL_STATE(145)] = 8271,
  [SMALL_STATE(146)] = 8326,
  [SMALL_STATE(147)] = 8381,
  [SMALL_STATE(148)] = 8420,
  [SMALL_STATE(149)] = 8459,
  [SMALL_STATE(150)] = 8498,
  [SMALL_STATE(151)] = 8537,
  [SMALL_STATE(152)] = 8592,
  [SMALL_STATE(153)] = 8631,
  [SMALL_STATE(154)] = 8670,
  [SMALL_STATE(155)] = 8725,
  [SMALL_STATE(156)] = 8780,
  [SMALL_STATE(157)] = 8835,
  [SMALL_STATE(158)] = 8890,
  [SMALL_STATE(159)] = 8945,
  [SMALL_STATE(160)] = 9000,
  [SMALL_STATE(161)] = 9055,
  [SMALL_STATE(162)] = 9110,
  [SMALL_STATE(163)] = 9149,
  [SMALL_STATE(164)] = 9188,
  [SMALL_STATE(165)] = 9243,
  [SMALL_STATE(166)] = 9282,
  [SMALL_STATE(167)] = 9337,
  [SMALL_STATE(168)] = 9376,
  [SMALL_STATE(169)] = 9415,
  [SMALL_STATE(170)] = 9470,
  [SMALL_STATE(171)] = 9525,
  [SMALL_STATE(172)] = 9564,
  [SMALL_STATE(173)] = 9603,
  [SMALL_STATE(174)] = 9658,
  [SMALL_STATE(175)] = 9713,
  [SMALL_STATE(176)] = 9768,
  [SMALL_STATE(177)] = 9807,
  [SMALL_STATE(178)] = 9846,
  [SMALL_STATE(179)] = 9883,
  [SMALL_STATE(180)] = 9920,
  [SMALL_STATE(181)] = 9957,
  [SMALL_STATE(182)] = 9994,
  [SMALL_STATE(183)] = 10041,
  [SMALL_STATE(184)] = 10094,
  [SMALL_STATE(185)] = 10139,
  [SMALL_STATE(186)] = 10192,
  [SMALL_STATE(187)] = 10245,
  [SMALL_STATE(188)] = 10298,
  [SMALL_STATE(189)] = 10341,
  [SMALL_STATE(190)] = 10394,
  [SMALL_STATE(191)] = 10443,
  [SMALL_STATE(192)] = 10494,
  [SMALL_STATE(193)] = 10531,
  [SMALL_STATE(194)] = 10574,
  [SMALL_STATE(195)] = 10608,
  [SMALL_STATE(196)] = 10642,
  [SMALL_STATE(197)] = 10676,
  [SMALL_STATE(198)] = 10710,
  [SMALL_STATE(199)] = 10744,
  [SMALL_STATE(200)] = 10778,
  [SMALL_STATE(201)] = 10812,
  [SMALL_STATE(202)] = 10846,
  [SMALL_STATE(203)] = 10880,
  [SMALL_STATE(204)] = 10914,
  [SMALL_STATE(205)] = 10948,
  [SMALL_STATE(206)] = 10982,
  [SMALL_STATE(207)] = 11016,
  [SMALL_STATE(208)] = 11050,
  [SMALL_STATE(209)] = 11084,
  [SMALL_STATE(210)] = 11118,
  [SMALL_STATE(211)] = 11152,
  [SMALL_STATE(212)] = 11186,
  [SMALL_STATE(213)] = 11247,
  [SMALL_STATE(214)] = 11308,
  [SMALL_STATE(215)] = 11366,
  [SMALL_STATE(216)] = 11424,
  [SMALL_STATE(217)] = 11482,
  [SMALL_STATE(218)] = 11540,
  [SMALL_STATE(219)] = 11598,
  [SMALL_STATE(220)] = 11656,
  [SMALL_STATE(221)] = 11714,
  [SMALL_STATE(222)] = 11772,
  [SMALL_STATE(223)] = 11825,
  [SMALL_STATE(224)] = 11878,
  [SMALL_STATE(225)] = 11931,
  [SMALL_STATE(226)] = 11984,
  [SMALL_STATE(227)] = 12037,
  [SMALL_STATE(228)] = 12090,
  [SMALL_STATE(229)] = 12145,
  [SMALL_STATE(230)] = 12197,
  [SMALL_STATE(231)] = 12249,
  [SMALL_STATE(232)] = 12301,
  [SMALL_STATE(233)] = 12353,
  [SMALL_STATE(234)] = 12405,
  [SMALL_STATE(235)] = 12457,
  [SMALL_STATE(236)] = 12509,
  [SMALL_STATE(237)] = 12561,
  [SMALL_STATE(238)] = 12613,
  [SMALL_STATE(239)] = 12665,
  [SMALL_STATE(240)] = 12717,
  [SMALL_STATE(241)] = 12769,
  [SMALL_STATE(242)] = 12821,
  [SMALL_STATE(243)] = 12873,
  [SMALL_STATE(244)] = 12925,
  [SMALL_STATE(245)] = 12949,
  [SMALL_STATE(246)] = 12976,
  [SMALL_STATE(247)] = 13003,
  [SMALL_STATE(248)] = 13024,
  [SMALL_STATE(249)] = 13051,
  [SMALL_STATE(250)] = 13078,
  [SMALL_STATE(251)] = 13105,
  [SMALL_STATE(252)] = 13126,
  [SMALL_STATE(253)] = 13153,
  [SMALL_STATE(254)] = 13180,
  [SMALL_STATE(255)] = 13207,
  [SMALL_STATE(256)] = 13234,
  [SMALL_STATE(257)] = 13253,
  [SMALL_STATE(258)] = 13276,
  [SMALL_STATE(259)] = 13299,
  [SMALL_STATE(260)] = 13322,
  [SMALL_STATE(261)] = 13337,
  [SMALL_STATE(262)] = 13360,
  [SMALL_STATE(263)] = 13383,
  [SMALL_STATE(264)] = 13400,
  [SMALL_STATE(265)] = 13423,
  [SMALL_STATE(266)] = 13446,
  [SMALL_STATE(267)] = 13465,
  [SMALL_STATE(268)] = 13480,
  [SMALL_STATE(269)] = 13503,
  [SMALL_STATE(270)] = 13526,
  [SMALL_STATE(271)] = 13545,
  [SMALL_STATE(272)] = 13559,
  [SMALL_STATE(273)] = 13577,
  [SMALL_STATE(274)] = 13591,
  [SMALL_STATE(275)] = 13605,
  [SMALL_STATE(276)] = 13619,
  [SMALL_STATE(277)] = 13637,
  [SMALL_STATE(278)] = 13651,
  [SMALL_STATE(279)] = 13665,
  [SMALL_STATE(280)] = 13679,
  [SMALL_STATE(281)] = 13693,
  [SMALL_STATE(282)] = 13707,
  [SMALL_STATE(283)] = 13725,
  [SMALL_STATE(284)] = 13739,
  [SMALL_STATE(285)] = 13753,
  [SMALL_STATE(286)] = 13767,
  [SMALL_STATE(287)] = 13785,
  [SMALL_STATE(288)] = 13799,
  [SMALL_STATE(289)] = 13817,
  [SMALL_STATE(290)] = 13831,
  [SMALL_STATE(291)] = 13845,
  [SMALL_STATE(292)] = 13859,
  [SMALL_STATE(293)] = 13873,
  [SMALL_STATE(294)] = 13888,
  [SMALL_STATE(295)] = 13903,
  [SMALL_STATE(296)] = 13916,
  [SMALL_STATE(297)] = 13930,
  [SMALL_STATE(298)] = 13942,
  [SMALL_STATE(299)] = 13953,
  [SMALL_STATE(300)] = 13966,
  [SMALL_STATE(301)] = 13979,
  [SMALL_STATE(302)] = 13992,
  [SMALL_STATE(303)] = 14005,
  [SMALL_STATE(304)] = 14018,
  [SMALL_STATE(305)] = 14027,
  [SMALL_STATE(306)] = 14040,
  [SMALL_STATE(307)] = 14053,
  [SMALL_STATE(308)] = 14066,
  [SMALL_STATE(309)] = 14079,
  [SMALL_STATE(310)] = 14092,
  [SMALL_STATE(311)] = 14105,
  [SMALL_STATE(312)] = 14118,
  [SMALL_STATE(313)] = 14131,
  [SMALL_STATE(314)] = 14142,
  [SMALL_STATE(315)] = 14155,
  [SMALL_STATE(316)] = 14164,
  [SMALL_STATE(317)] = 14177,
  [SMALL_STATE(318)] = 14185,
  [SMALL_STATE(319)] = 14195,
  [SMALL_STATE(320)] = 14205,
  [SMALL_STATE(321)] = 14215,
  [SMALL_STATE(322)] = 14223,
  [SMALL_STATE(323)] = 14231,
  [SMALL_STATE(324)] = 14239,
  [SMALL_STATE(325)] = 14246,
  [SMALL_STATE(326)] = 14253,
  [SMALL_STATE(327)] = 14260,
  [SMALL_STATE(328)] = 14267,
  [SMALL_STATE(329)] = 14274,
  [SMALL_STATE(330)] = 14281,
  [SMALL_STATE(331)] = 14288,
  [SMALL_STATE(332)] = 14295,
  [SMALL_STATE(333)] = 14302,
  [SMALL_STATE(334)] = 14309,
  [SMALL_STATE(335)] = 14316,
  [SMALL_STATE(336)] = 14323,
  [SMALL_STATE(337)] = 14330,
  [SMALL_STATE(338)] = 14337,
  [SMALL_STATE(339)] = 14344,
  [SMALL_STATE(340)] = 14351,
  [SMALL_STATE(341)] = 14358,
  [SMALL_STATE(342)] = 14365,
  [SMALL_STATE(343)] = 14372,
  [SMALL_STATE(344)] = 14379,
  [SMALL_STATE(345)] = 14386,
  [SMALL_STATE(346)] = 14393,
  [SMALL_STATE(347)] = 14400,
  [SMALL_STATE(348)] = 14407,
  [SMALL_STATE(349)] = 14414,
  [SMALL_STATE(350)] = 14421,
  [SMALL_STATE(351)] = 14428,
  [SMALL_STATE(352)] = 14435,
  [SMALL_STATE(353)] = 14442,
  [SMALL_STATE(354)] = 14449,
  [SMALL_STATE(355)] = 14456,
  [SMALL_STATE(356)] = 14463,
  [SMALL_STATE(357)] = 14470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 16),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 16),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 15),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 21),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 14),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 17),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 17),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 10),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 10),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 12),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 12),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 8),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 8),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 7),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 12),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 12),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 23),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_pair, 3, .production_id = 11),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 22),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 24),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(160),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(145),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(246),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(281),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(281),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(246),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(268),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(295),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(295),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(268),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec_statement, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 16),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 16),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 18),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 18),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 5),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_statement, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 16),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 16),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(96),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(336),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 9),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2), SHIFT_REPEAT(82),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 16),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(297),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 25),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 13),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [892] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 19),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 20),
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
