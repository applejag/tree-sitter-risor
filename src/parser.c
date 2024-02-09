#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 413
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 1
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 32

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
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_const = 12,
  anon_sym_var = 13,
  anon_sym_COLON_EQ = 14,
  anon_sym_PLUS_PLUS = 15,
  anon_sym_DASH_DASH = 16,
  anon_sym_STAR_EQ = 17,
  anon_sym_DASH_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_SLASH_EQ = 20,
  anon_sym_break = 21,
  anon_sym_continue = 22,
  anon_sym_return = 23,
  anon_sym_import = 24,
  anon_sym_from = 25,
  anon_sym_DOT = 26,
  anon_sym_as = 27,
  anon_sym_if = 28,
  anon_sym_else = 29,
  anon_sym_for = 30,
  anon_sym_range = 31,
  anon_sym_switch = 32,
  anon_sym_case = 33,
  anon_sym_COLON = 34,
  anon_sym_default = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_BANG = 40,
  anon_sym_CARET = 41,
  anon_sym_STAR = 42,
  anon_sym_AMP = 43,
  anon_sym_LT_DASH = 44,
  anon_sym_SLASH = 45,
  anon_sym_STAR_STAR = 46,
  anon_sym_PERCENT = 47,
  anon_sym_LT_LT = 48,
  anon_sym_GT_GT = 49,
  anon_sym_PIPE = 50,
  anon_sym_EQ_EQ = 51,
  anon_sym_BANG_EQ = 52,
  anon_sym_LT = 53,
  anon_sym_LT_EQ = 54,
  anon_sym_GT = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_AMP_AMP = 57,
  anon_sym_PIPE_PIPE = 58,
  anon_sym_QMARK = 59,
  anon_sym_DQUOTE = 60,
  anon_sym_DQUOTE2 = 61,
  sym__string_non_escaped_content = 62,
  anon_sym_SQUOTE = 63,
  anon_sym_SQUOTE2 = 64,
  sym_string_template_char = 65,
  aux_sym_escape_sequence_token1 = 66,
  sym_escape_sequence_invalid = 67,
  sym_format_sequence = 68,
  sym_string_backtick = 69,
  sym_int_literal = 70,
  sym_float_literal = 71,
  sym_nil = 72,
  sym_true = 73,
  sym_false = 74,
  sym_comment = 75,
  sym_source_file = 76,
  sym__definition = 77,
  sym_function_declaration = 78,
  sym_parameter_list = 79,
  sym__parameter_declaration = 80,
  sym_parameter_declaration = 81,
  sym_parameter_declaration_default = 82,
  sym_block = 83,
  sym__statement_list = 84,
  sym__statement = 85,
  sym__simple_statement = 86,
  sym__declaration = 87,
  sym_const_declaration = 88,
  sym_var_declaration = 89,
  sym_short_var_declaration = 90,
  sym_inc_statement = 91,
  sym_dec_statement = 92,
  sym_assignment_statement = 93,
  sym_break_statement = 94,
  sym_continue_statement = 95,
  sym_return_statement = 96,
  sym_import_statement = 97,
  sym_import_statement_from = 98,
  sym_import_statement_as = 99,
  sym_if_statement = 100,
  sym_for_statement = 101,
  sym_for_clause = 102,
  sym_range_clause = 103,
  sym_switch_statement = 104,
  sym_switch_case = 105,
  sym_default_case = 106,
  sym_expression_statement = 107,
  sym__expression = 108,
  sym_selector_expression = 109,
  sym_index_expression = 110,
  sym_expression_list = 111,
  sym_parenthesized_expression = 112,
  sym_call_expression = 113,
  sym_argument_list = 114,
  sym__complex_literal = 115,
  sym_list_literal = 116,
  sym_map_or_set_literal = 117,
  sym_set_literal_values = 118,
  sym_map_literal_values = 119,
  sym_map_literal_pair = 120,
  sym_unary_expression = 121,
  sym_binary_expression = 122,
  sym_conditional_expression = 123,
  sym_func_literal = 124,
  sym_string = 125,
  sym_string_template = 126,
  sym_escape_sequence = 127,
  sym_string_template_argument = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_parameter_list_repeat1 = 130,
  aux_sym__statement_list_repeat1 = 131,
  aux_sym_import_statement_from_repeat1 = 132,
  aux_sym_switch_statement_repeat1 = 133,
  aux_sym_expression_list_repeat1 = 134,
  aux_sym_map_literal_values_repeat1 = 135,
  aux_sym_string_repeat1 = 136,
  aux_sym_string_template_repeat1 = 137,
  alias_sym_field_identifier = 138,
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
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_range] = "range",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
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
  [anon_sym_QMARK] = "\?",
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
  [sym_import_statement] = "import_statement",
  [sym_import_statement_from] = "import_statement_from",
  [sym_import_statement_as] = "import_statement_as",
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
  [sym_conditional_expression] = "conditional_expression",
  [sym_func_literal] = "func_literal",
  [sym_string] = "string",
  [sym_string_template] = "string_template",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_template_argument] = "string_template_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_import_statement_from_repeat1] = "import_statement_from_repeat1",
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
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_default] = anon_sym_default,
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
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym_import_statement] = sym_import_statement,
  [sym_import_statement_from] = sym_import_statement_from,
  [sym_import_statement_as] = sym_import_statement_as,
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
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_func_literal] = sym_func_literal,
  [sym_string] = sym_string,
  [sym_string_template] = sym_string_template,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_template_argument] = sym_string_template_argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_import_statement_from_repeat1] = aux_sym_import_statement_from_repeat1,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
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
  [anon_sym_QMARK] = {
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
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement_from] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement_as] = {
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
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_func_literal] = {
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
  [aux_sym_import_statement_from_repeat1] = {
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
  field_as = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_default = 7,
  field_field = 8,
  field_from = 9,
  field_function = 10,
  field_index = 11,
  field_initializer = 12,
  field_left = 13,
  field_name = 14,
  field_operand = 15,
  field_operator = 16,
  field_parameters = 17,
  field_right = 18,
  field_update = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_as] = "as",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_default] = "default",
  [field_field] = "field",
  [field_from] = "from",
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 1},
  [21] = {.index = 34, .length = 3},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 2},
  [28] = {.index = 50, .length = 3},
  [29] = {.index = 53, .length = 3},
  [30] = {.index = 56, .length = 4},
  [31] = {.index = 60, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 1},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_body, 2},
    {field_parameters, 1},
  [9] =
    {field_as, 2},
    {field_name, 1},
  [11] =
    {field_condition, 1},
    {field_consequence, 2},
  [13] =
    {field_body, 2},
  [14] =
    {field_from, 0},
    {field_name, 2},
  [16] =
    {field_field, 2},
    {field_operand, 0},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_left, 0},
    {field_right, 2},
  [23] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [26] =
    {field_name, 0},
    {field_value, 2},
  [28] =
    {field_name, 1},
    {field_value, 3},
  [30] =
    {field_update, 2},
  [31] =
    {field_condition, 1},
  [32] =
    {field_initializer, 0},
  [33] =
    {field_value, 1},
  [34] =
    {field_as, 3},
    {field_from, 0},
    {field_name, 2},
  [37] =
    {field_index, 2},
    {field_operand, 0},
  [39] =
    {field_default, 2},
    {field_name, 0},
  [41] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [44] =
    {field_condition, 1},
    {field_update, 3},
  [46] =
    {field_initializer, 0},
    {field_update, 3},
  [48] =
    {field_condition, 2},
    {field_initializer, 0},
  [50] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [53] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [56] =
    {field_left, 0},
    {field_left, 1},
    {field_left, 2},
    {field_right, 4},
  [60] =
    {field_condition, 2},
    {field_initializer, 0},
    {field_update, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
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
  [11] = 9,
  [12] = 9,
  [13] = 9,
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
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 23,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 57,
  [60] = 57,
  [61] = 61,
  [62] = 22,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 61,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 25,
  [77] = 77,
  [78] = 34,
  [79] = 26,
  [80] = 80,
  [81] = 70,
  [82] = 27,
  [83] = 83,
  [84] = 28,
  [85] = 85,
  [86] = 61,
  [87] = 67,
  [88] = 63,
  [89] = 64,
  [90] = 61,
  [91] = 91,
  [92] = 33,
  [93] = 63,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 56,
  [101] = 101,
  [102] = 102,
  [103] = 43,
  [104] = 104,
  [105] = 94,
  [106] = 54,
  [107] = 107,
  [108] = 47,
  [109] = 42,
  [110] = 32,
  [111] = 29,
  [112] = 112,
  [113] = 99,
  [114] = 98,
  [115] = 115,
  [116] = 116,
  [117] = 97,
  [118] = 118,
  [119] = 50,
  [120] = 102,
  [121] = 37,
  [122] = 48,
  [123] = 104,
  [124] = 36,
  [125] = 46,
  [126] = 39,
  [127] = 97,
  [128] = 40,
  [129] = 41,
  [130] = 98,
  [131] = 45,
  [132] = 99,
  [133] = 133,
  [134] = 104,
  [135] = 102,
  [136] = 136,
  [137] = 102,
  [138] = 104,
  [139] = 97,
  [140] = 98,
  [141] = 99,
  [142] = 142,
  [143] = 49,
  [144] = 53,
  [145] = 94,
  [146] = 146,
  [147] = 55,
  [148] = 38,
  [149] = 51,
  [150] = 150,
  [151] = 116,
  [152] = 115,
  [153] = 95,
  [154] = 96,
  [155] = 150,
  [156] = 150,
  [157] = 107,
  [158] = 133,
  [159] = 118,
  [160] = 107,
  [161] = 133,
  [162] = 118,
  [163] = 163,
  [164] = 150,
  [165] = 165,
  [166] = 166,
  [167] = 107,
  [168] = 133,
  [169] = 94,
  [170] = 118,
  [171] = 28,
  [172] = 172,
  [173] = 34,
  [174] = 30,
  [175] = 33,
  [176] = 27,
  [177] = 26,
  [178] = 22,
  [179] = 25,
  [180] = 41,
  [181] = 56,
  [182] = 48,
  [183] = 49,
  [184] = 36,
  [185] = 55,
  [186] = 32,
  [187] = 46,
  [188] = 51,
  [189] = 29,
  [190] = 42,
  [191] = 45,
  [192] = 37,
  [193] = 40,
  [194] = 47,
  [195] = 54,
  [196] = 39,
  [197] = 43,
  [198] = 50,
  [199] = 38,
  [200] = 53,
  [201] = 201,
  [202] = 32,
  [203] = 203,
  [204] = 29,
  [205] = 205,
  [206] = 26,
  [207] = 34,
  [208] = 33,
  [209] = 209,
  [210] = 210,
  [211] = 28,
  [212] = 27,
  [213] = 213,
  [214] = 22,
  [215] = 215,
  [216] = 216,
  [217] = 25,
  [218] = 37,
  [219] = 46,
  [220] = 36,
  [221] = 41,
  [222] = 56,
  [223] = 29,
  [224] = 55,
  [225] = 38,
  [226] = 45,
  [227] = 50,
  [228] = 40,
  [229] = 51,
  [230] = 48,
  [231] = 39,
  [232] = 43,
  [233] = 53,
  [234] = 32,
  [235] = 54,
  [236] = 42,
  [237] = 49,
  [238] = 47,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 242,
  [244] = 242,
  [245] = 241,
  [246] = 241,
  [247] = 242,
  [248] = 241,
  [249] = 249,
  [250] = 215,
  [251] = 210,
  [252] = 213,
  [253] = 253,
  [254] = 254,
  [255] = 216,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 256,
  [261] = 261,
  [262] = 259,
  [263] = 257,
  [264] = 264,
  [265] = 257,
  [266] = 257,
  [267] = 259,
  [268] = 268,
  [269] = 269,
  [270] = 259,
  [271] = 256,
  [272] = 272,
  [273] = 273,
  [274] = 256,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 276,
  [280] = 276,
  [281] = 278,
  [282] = 278,
  [283] = 276,
  [284] = 278,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 292,
  [294] = 291,
  [295] = 291,
  [296] = 292,
  [297] = 291,
  [298] = 298,
  [299] = 299,
  [300] = 292,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 305,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 324,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 332,
  [338] = 338,
  [339] = 338,
  [340] = 340,
  [341] = 332,
  [342] = 342,
  [343] = 332,
  [344] = 338,
  [345] = 345,
  [346] = 346,
  [347] = 338,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 309,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 359,
  [361] = 361,
  [362] = 358,
  [363] = 303,
  [364] = 364,
  [365] = 359,
  [366] = 358,
  [367] = 367,
  [368] = 359,
  [369] = 358,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 372,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 378,
  [381] = 378,
  [382] = 382,
  [383] = 378,
  [384] = 379,
  [385] = 385,
  [386] = 372,
  [387] = 373,
  [388] = 373,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 373,
  [394] = 394,
  [395] = 395,
  [396] = 372,
  [397] = 397,
  [398] = 398,
  [399] = 379,
  [400] = 375,
  [401] = 394,
  [402] = 402,
  [403] = 372,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 379,
  [412] = 412,
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
      if (eof) ADVANCE(33);
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(90);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(99);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(116);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 29:
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_string_template_char);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string_template_char);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
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
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_format_sequence);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string_backtick);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 32},
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
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 32},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 32},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 32},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 32},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 32},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 32},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 32},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 32},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 32},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 32},
  [152] = {.lex_state = 32},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 32},
  [156] = {.lex_state = 32},
  [157] = {.lex_state = 32},
  [158] = {.lex_state = 32},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 32},
  [163] = {.lex_state = 32},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 32},
  [166] = {.lex_state = 32},
  [167] = {.lex_state = 32},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 32},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
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
  [201] = {.lex_state = 32},
  [202] = {.lex_state = 32},
  [203] = {.lex_state = 32},
  [204] = {.lex_state = 32},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 32},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 32},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 32},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 32},
  [306] = {.lex_state = 32},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 32},
  [312] = {.lex_state = 32},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 32},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 32},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 32},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 32},
  [328] = {.lex_state = 32},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 32},
  [331] = {.lex_state = 32},
  [332] = {.lex_state = 32},
  [333] = {.lex_state = 32},
  [334] = {.lex_state = 32},
  [335] = {.lex_state = 32},
  [336] = {.lex_state = 32},
  [337] = {.lex_state = 32},
  [338] = {.lex_state = 32},
  [339] = {.lex_state = 32},
  [340] = {.lex_state = 32},
  [341] = {.lex_state = 32},
  [342] = {.lex_state = 32},
  [343] = {.lex_state = 32},
  [344] = {.lex_state = 32},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 32},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 32},
  [352] = {.lex_state = 32},
  [353] = {.lex_state = 32},
  [354] = {.lex_state = 32},
  [355] = {.lex_state = 32},
  [356] = {.lex_state = 32},
  [357] = {.lex_state = 32},
  [358] = {.lex_state = 32},
  [359] = {.lex_state = 32},
  [360] = {.lex_state = 32},
  [361] = {.lex_state = 32},
  [362] = {.lex_state = 32},
  [363] = {.lex_state = 32},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 32},
  [366] = {.lex_state = 32},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 32},
  [369] = {.lex_state = 32},
  [370] = {.lex_state = 32},
  [371] = {.lex_state = 32},
  [372] = {.lex_state = 32},
  [373] = {.lex_state = 32},
  [374] = {.lex_state = 32},
  [375] = {.lex_state = 32},
  [376] = {.lex_state = 32},
  [377] = {.lex_state = 32},
  [378] = {.lex_state = 32},
  [379] = {.lex_state = 32},
  [380] = {.lex_state = 32},
  [381] = {.lex_state = 32},
  [382] = {.lex_state = 32},
  [383] = {.lex_state = 32},
  [384] = {.lex_state = 32},
  [385] = {.lex_state = 32},
  [386] = {.lex_state = 32},
  [387] = {.lex_state = 32},
  [388] = {.lex_state = 32},
  [389] = {.lex_state = 32},
  [390] = {.lex_state = 32},
  [391] = {.lex_state = 32},
  [392] = {.lex_state = 32},
  [393] = {.lex_state = 32},
  [394] = {.lex_state = 32},
  [395] = {.lex_state = 32},
  [396] = {.lex_state = 32},
  [397] = {.lex_state = 32},
  [398] = {.lex_state = 32},
  [399] = {.lex_state = 32},
  [400] = {.lex_state = 32},
  [401] = {.lex_state = 32},
  [402] = {.lex_state = 32},
  [403] = {.lex_state = 32},
  [404] = {.lex_state = 32},
  [405] = {.lex_state = 32},
  [406] = {.lex_state = 32},
  [407] = {.lex_state = 32},
  [408] = {.lex_state = 32},
  [409] = {.lex_state = 32},
  [410] = {.lex_state = 32},
  [411] = {.lex_state = 32},
  [412] = {.lex_state = 32},
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
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
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
    [anon_sym_QMARK] = ACTIONS(1),
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
    [sym_source_file] = STATE(406),
    [sym__definition] = STATE(6),
    [sym_function_declaration] = STATE(6),
    [sym__statement] = STATE(346),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(6),
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
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [2] = {
    [sym__statement_list] = STATE(403),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(44),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_set_literal_values] = STATE(381),
    [sym_map_literal_values] = STATE(381),
    [sym_map_literal_pair] = STATE(334),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [3] = {
    [sym__statement_list] = STATE(353),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(53),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [4] = {
    [sym__definition] = STATE(4),
    [sym_function_declaration] = STATE(4),
    [sym__statement] = STATE(346),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_func] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_const] = ACTIONS(69),
    [anon_sym_var] = ACTIONS(72),
    [anon_sym_break] = ACTIONS(75),
    [anon_sym_continue] = ACTIONS(78),
    [anon_sym_return] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(84),
    [anon_sym_from] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(90),
    [anon_sym_for] = ACTIONS(93),
    [anon_sym_switch] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_BANG] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_LT_DASH] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [sym_string_backtick] = ACTIONS(111),
    [sym_int_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(111),
    [sym_nil] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_comment] = ACTIONS(45),
  },
  [5] = {
    [sym__statement_list] = STATE(354),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [6] = {
    [sym__definition] = STATE(4),
    [sym_function_declaration] = STATE(4),
    [sym__statement] = STATE(346),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [7] = {
    [sym__statement] = STATE(313),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(122),
    [anon_sym_default] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [8] = {
    [sym__statement] = STATE(313),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(126),
    [anon_sym_default] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [9] = {
    [sym__statement_list] = STATE(376),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [10] = {
    [sym__statement_list] = STATE(372),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [11] = {
    [sym__statement_list] = STATE(396),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [12] = {
    [sym__statement_list] = STATE(403),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
  [13] = {
    [sym__statement_list] = STATE(386),
    [sym__statement] = STATE(290),
    [sym__simple_statement] = STATE(315),
    [sym__declaration] = STATE(315),
    [sym_const_declaration] = STATE(315),
    [sym_var_declaration] = STATE(315),
    [sym_short_var_declaration] = STATE(315),
    [sym_inc_statement] = STATE(315),
    [sym_dec_statement] = STATE(315),
    [sym_assignment_statement] = STATE(315),
    [sym_break_statement] = STATE(315),
    [sym_continue_statement] = STATE(315),
    [sym_return_statement] = STATE(315),
    [sym_import_statement] = STATE(315),
    [sym_import_statement_from] = STATE(402),
    [sym_if_statement] = STATE(315),
    [sym_for_statement] = STATE(315),
    [sym_switch_statement] = STATE(315),
    [sym_expression_statement] = STATE(315),
    [sym__expression] = STATE(30),
    [sym_selector_expression] = STATE(51),
    [sym_index_expression] = STATE(51),
    [sym_expression_list] = STATE(306),
    [sym_parenthesized_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym__complex_literal] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_map_or_set_literal] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_conditional_expression] = STATE(51),
    [sym_func_literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_string_template] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_from] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_string_backtick] = ACTIONS(43),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(43),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
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
      anon_sym_import,
    ACTIONS(27), 1,
      anon_sym_from,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_switch,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(30), 1,
      sym__expression,
    STATE(306), 1,
      sym_expression_list,
    STATE(313), 1,
      sym__statement,
    STATE(402), 1,
      sym_import_statement_from,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
    STATE(315), 16,
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
      sym_import_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [117] = 19,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_const,
    ACTIONS(150), 1,
      anon_sym_var,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym__expression,
    STATE(317), 1,
      sym_expression_list,
    STATE(325), 1,
      sym_block,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(356), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(405), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [207] = 16,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      anon_sym_const,
    ACTIONS(166), 1,
      anon_sym_var,
    STATE(174), 1,
      sym__expression,
    STATE(305), 1,
      sym_expression_list,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(374), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [287] = 16,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_const,
    ACTIONS(166), 1,
      anon_sym_var,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__expression,
    STATE(305), 1,
      sym_expression_list,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(377), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [367] = 16,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_const,
    ACTIONS(166), 1,
      anon_sym_var,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__expression,
    STATE(305), 1,
      sym_expression_list,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(390), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [447] = 16,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_const,
    ACTIONS(166), 1,
      anon_sym_var,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__expression,
    STATE(305), 1,
      sym_expression_list,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(385), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [527] = 18,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_case,
    ACTIONS(186), 1,
      anon_sym_default,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(240), 1,
      sym__expression,
    STATE(334), 1,
      sym_map_literal_pair,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(380), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    STATE(311), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [608] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
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
    ACTIONS(212), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(220), 33,
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
      anon_sym_QMARK,
  [730] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__expression,
    STATE(334), 1,
      sym_map_literal_pair,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(381), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [800] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__expression,
    STATE(334), 1,
      sym_map_literal_pair,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(378), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [870] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(220), 27,
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
      anon_sym_QMARK,
  [926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(234), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(220), 24,
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
      anon_sym_QMARK,
  [984] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_QMARK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(234), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(236), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(220), 17,
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
  [1046] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_QMARK,
    ACTIONS(240), 1,
      anon_sym_AMP_AMP,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(234), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(236), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(220), 16,
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
  [1110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 37,
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
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1156] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_QMARK,
    ACTIONS(240), 1,
      anon_sym_AMP_AMP,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(256), 1,
      anon_sym_DASH_DASH,
    ACTIONS(258), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_argument_list,
    STATE(277), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(234), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(236), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(252), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1232] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__expression,
    STATE(334), 1,
      sym_map_literal_pair,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(380), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 37,
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
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1348] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_QMARK,
    ACTIONS(266), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(234), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(236), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(268), 17,
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
  [1410] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(272), 33,
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
      anon_sym_QMARK,
  [1464] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__expression,
    STATE(334), 1,
      sym_map_literal_pair,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(383), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [1894] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_QMARK,
    ACTIONS(240), 1,
      anon_sym_AMP_AMP,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(256), 1,
      anon_sym_DASH_DASH,
    ACTIONS(258), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym_argument_list,
    STATE(286), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(234), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(232), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(236), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(252), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(312), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(332), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 4,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(286), 32,
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
      anon_sym_QMARK,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 36,
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
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
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
      anon_sym_QMARK,
  [2513] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2579] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2645] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2711] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2777] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2840] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_argument_list,
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
    ACTIONS(218), 22,
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
      anon_sym_QMARK,
  [2891] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2954] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3017] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3080] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_range,
    STATE(251), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3143] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(400), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3206] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_range,
    STATE(252), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3269] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3332] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(401), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3395] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_AMP_AMP,
    ACTIONS(416), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(418), 1,
      anon_sym_QMARK,
    STATE(191), 1,
      sym_argument_list,
    STATE(277), 1,
      aux_sym_expression_list_repeat1,
    STATE(308), 1,
      sym_block,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(410), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(394), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3476] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3539] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3602] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(397), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3665] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(398), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3728] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(220), 7,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 18,
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
      anon_sym_QMARK,
  [3783] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    STATE(272), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3846] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_argument_list,
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
    ACTIONS(270), 22,
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
      anon_sym_QMARK,
  [3897] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(220), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(218), 18,
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
      anon_sym_QMARK,
  [3954] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(371), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4017] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(394), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4080] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(220), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(430), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(218), 13,
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
  [4143] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_range,
    STATE(250), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4206] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(220), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(430), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(218), 12,
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
  [4271] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4334] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4397] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    STATE(375), 1,
      sym_expression_list,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4460] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4523] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4586] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4649] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(264), 1,
      sym__expression,
    STATE(370), 1,
      sym_map_literal_pair,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4712] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(268), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(430), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 13,
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
  [4775] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4838] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4898] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(210), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4958] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5018] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5078] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5138] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(217), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(350), 25,
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
      anon_sym_QMARK,
  [5240] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5300] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(211), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5360] = 3,
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
    ACTIONS(304), 25,
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
      anon_sym_QMARK,
  [5402] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5462] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 25,
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
      anon_sym_QMARK,
  [5564] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(263), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 25,
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
      anon_sym_QMARK,
  [5666] = 3,
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
    ACTIONS(300), 25,
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
      anon_sym_QMARK,
  [5708] = 3,
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
    ACTIONS(262), 25,
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
      anon_sym_QMARK,
  [5750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 25,
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
      anon_sym_QMARK,
  [5792] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5852] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5912] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5972] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6032] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(216), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6092] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6152] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(330), 25,
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
      anon_sym_QMARK,
  [6254] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(28), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6314] = 3,
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
    ACTIONS(280), 25,
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
      anon_sym_QMARK,
  [6356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(322), 25,
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
      anon_sym_QMARK,
  [6398] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(27), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6458] = 3,
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
    ACTIONS(276), 25,
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
      anon_sym_QMARK,
  [6500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 25,
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
      anon_sym_QMARK,
  [6542] = 3,
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
    ACTIONS(288), 25,
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
      anon_sym_QMARK,
  [6584] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(26), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6644] = 3,
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
    ACTIONS(292), 25,
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
      anon_sym_QMARK,
  [6686] = 3,
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
    ACTIONS(296), 25,
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
      anon_sym_QMARK,
  [6728] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(22), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 25,
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
      anon_sym_QMARK,
  [6830] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(25), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6890] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(274), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6950] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7010] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7070] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7130] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7190] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7250] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7310] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7370] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7430] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(253), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 25,
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
      anon_sym_QMARK,
  [7532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 25,
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
      anon_sym_QMARK,
  [7574] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7634] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(346), 25,
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
      anon_sym_QMARK,
  [7736] = 3,
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
    ACTIONS(284), 25,
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
      anon_sym_QMARK,
  [7778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(334), 25,
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
      anon_sym_QMARK,
  [7820] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7880] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7940] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8000] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(251), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8060] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8120] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_func,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym__expression,
    ACTIONS(466), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(229), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8180] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_func,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym__expression,
    ACTIONS(160), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(138), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(188), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8240] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8300] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8360] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8420] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8480] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(271), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8540] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(267), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8600] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8660] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(34), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8720] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8780] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8840] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(265), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8900] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8960] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_func,
    STATE(33), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(37), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(51), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [9020] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_func,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym__expression,
    ACTIONS(196), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(174), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(190), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(149), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [9080] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_AMP_AMP,
    ACTIONS(418), 1,
      anon_sym_QMARK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(410), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(218), 11,
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
  [9143] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(430), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(472), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [9208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(272), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 21,
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
      anon_sym_QMARK,
  [9257] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_AMP_AMP,
    ACTIONS(416), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(418), 1,
      anon_sym_QMARK,
    STATE(191), 1,
      sym_argument_list,
    STATE(277), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(410), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(394), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [9332] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_QMARK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(410), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 12,
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
  [9393] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_QMARK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(410), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(218), 12,
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
  [9454] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(220), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(218), 17,
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
      anon_sym_QMARK,
  [9509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(220), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 21,
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
      anon_sym_QMARK,
  [9558] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(220), 6,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 17,
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
      anon_sym_QMARK,
  [9611] = 3,
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
    ACTIONS(296), 24,
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
      anon_sym_QMARK,
  [9651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(350), 24,
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
      anon_sym_QMARK,
  [9691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(322), 24,
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
      anon_sym_QMARK,
  [9731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 24,
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
      anon_sym_QMARK,
  [9771] = 3,
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
    ACTIONS(276), 24,
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
      anon_sym_QMARK,
  [9811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(346), 24,
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
      anon_sym_QMARK,
  [9851] = 3,
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
    ACTIONS(262), 24,
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
      anon_sym_QMARK,
  [9891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 24,
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
      anon_sym_QMARK,
  [9931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(334), 24,
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
      anon_sym_QMARK,
  [9971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 24,
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
      anon_sym_QMARK,
  [10011] = 3,
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
    ACTIONS(300), 24,
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
      anon_sym_QMARK,
  [10051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 24,
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
      anon_sym_QMARK,
  [10091] = 3,
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
    ACTIONS(280), 24,
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
      anon_sym_QMARK,
  [10131] = 3,
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
    ACTIONS(292), 24,
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
      anon_sym_QMARK,
  [10171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 24,
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
      anon_sym_QMARK,
  [10211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 24,
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
      anon_sym_QMARK,
  [10251] = 3,
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
    ACTIONS(288), 24,
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
      anon_sym_QMARK,
  [10291] = 3,
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
    ACTIONS(304), 24,
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
      anon_sym_QMARK,
  [10331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(330), 24,
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
      anon_sym_QMARK,
  [10371] = 3,
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
    ACTIONS(284), 24,
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
      anon_sym_QMARK,
  [10411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 24,
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
      anon_sym_QMARK,
  [10451] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(478), 15,
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
    ACTIONS(480), 16,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [10490] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(262), 15,
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
    ACTIONS(264), 16,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [10529] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(55), 15,
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
    ACTIONS(482), 16,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [10568] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(242), 15,
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
    ACTIONS(244), 16,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [10607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(286), 22,
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
      anon_sym_QMARK,
  [10645] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(220), 14,
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
      anon_sym_QMARK,
  [10693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(272), 23,
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
      anon_sym_QMARK,
  [10737] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(268), 7,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10789] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      anon_sym_AMP_AMP,
    ACTIONS(508), 1,
      anon_sym_PIPE_PIPE,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(504), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10845] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(506), 1,
      anon_sym_AMP_AMP,
    ACTIONS(508), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(512), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10901] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(506), 1,
      anon_sym_AMP_AMP,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(220), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10955] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(220), 7,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11007] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(506), 1,
      anon_sym_AMP_AMP,
    ACTIONS(508), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(516), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11063] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(220), 23,
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
      anon_sym_QMARK,
  [11107] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(506), 1,
      anon_sym_AMP_AMP,
    ACTIONS(508), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(520), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11163] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(506), 1,
      anon_sym_AMP_AMP,
    ACTIONS(508), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(494), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(524), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(498), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11219] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
    STATE(226), 1,
      sym_argument_list,
    ACTIONS(496), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(220), 17,
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
      anon_sym_QMARK,
  [11265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(312), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(332), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [11965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
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
      anon_sym_QMARK,
  [12000] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    STATE(277), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12064] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(530), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_argument_list,
    STATE(351), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12128] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    STATE(344), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12189] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    STATE(337), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12250] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    STATE(332), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12311] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    STATE(341), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12372] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    STATE(338), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12433] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    STATE(347), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12494] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    STATE(343), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12555] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    STATE(339), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12616] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    STATE(301), 1,
      sym_block,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12674] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12730] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(510), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12786] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12842] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12898] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(558), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12954] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(522), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13010] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13065] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13120] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13175] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(566), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13230] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13285] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13340] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(572), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13395] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13450] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(530), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13505] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13560] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13615] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(580), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13670] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13725] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13780] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(586), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13835] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13890] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13945] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [14000] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_AMP_AMP,
    ACTIONS(476), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(426), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [14055] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(472), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [14079] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(601), 1,
      anon_sym_SQUOTE2,
    ACTIONS(603), 1,
      sym_string_template_char,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(609), 1,
      sym_format_sequence,
    STATE(278), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14106] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(611), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14127] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(615), 1,
      anon_sym_SQUOTE2,
    ACTIONS(617), 1,
      sym_string_template_char,
    ACTIONS(619), 1,
      sym_format_sequence,
    STATE(285), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14154] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(621), 1,
      anon_sym_SQUOTE2,
    ACTIONS(623), 1,
      sym_string_template_char,
    ACTIONS(625), 1,
      sym_format_sequence,
    STATE(284), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(627), 1,
      anon_sym_SQUOTE2,
    ACTIONS(629), 1,
      sym_string_template_char,
    ACTIONS(631), 1,
      sym_format_sequence,
    STATE(282), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14208] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(617), 1,
      sym_string_template_char,
    ACTIONS(619), 1,
      sym_format_sequence,
    ACTIONS(633), 1,
      anon_sym_SQUOTE2,
    STATE(285), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14235] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(617), 1,
      sym_string_template_char,
    ACTIONS(619), 1,
      sym_format_sequence,
    ACTIONS(635), 1,
      anon_sym_SQUOTE2,
    STATE(285), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(637), 1,
      anon_sym_SQUOTE2,
    ACTIONS(639), 1,
      sym_string_template_char,
    ACTIONS(641), 1,
      sym_format_sequence,
    STATE(281), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14289] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(607), 1,
      sym_escape_sequence_invalid,
    ACTIONS(617), 1,
      sym_string_template_char,
    ACTIONS(619), 1,
      sym_format_sequence,
    ACTIONS(643), 1,
      anon_sym_SQUOTE2,
    STATE(285), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14316] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_SQUOTE2,
    ACTIONS(650), 1,
      sym_string_template_char,
    ACTIONS(653), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(656), 1,
      sym_escape_sequence_invalid,
    ACTIONS(659), 1,
      sym_format_sequence,
    STATE(285), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14343] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(611), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(668), 1,
      anon_sym_as,
    STATE(322), 1,
      sym_import_statement_as,
    ACTIONS(666), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_as,
    ACTIONS(670), 1,
      anon_sym_LF,
    STATE(316), 1,
      sym_import_statement_as,
    ACTIONS(672), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14404] = 7,
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
    STATE(289), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(298), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(692), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14446] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_DQUOTE2,
    ACTIONS(696), 1,
      sym__string_non_escaped_content,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(702), 1,
      sym_format_sequence,
    STATE(300), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(704), 1,
      anon_sym_DQUOTE2,
    ACTIONS(706), 1,
      sym__string_non_escaped_content,
    ACTIONS(708), 1,
      sym_format_sequence,
    STATE(289), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14492] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(706), 1,
      sym__string_non_escaped_content,
    ACTIONS(708), 1,
      sym_format_sequence,
    ACTIONS(710), 1,
      anon_sym_DQUOTE2,
    STATE(289), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14515] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(712), 1,
      anon_sym_DQUOTE2,
    ACTIONS(714), 1,
      sym__string_non_escaped_content,
    ACTIONS(716), 1,
      sym_format_sequence,
    STATE(296), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(718), 1,
      anon_sym_DQUOTE2,
    ACTIONS(720), 1,
      sym__string_non_escaped_content,
    ACTIONS(722), 1,
      sym_format_sequence,
    STATE(292), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14561] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(706), 1,
      sym__string_non_escaped_content,
    ACTIONS(708), 1,
      sym_format_sequence,
    ACTIONS(724), 1,
      anon_sym_DQUOTE2,
    STATE(289), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(726), 1,
      anon_sym_DQUOTE2,
    ACTIONS(728), 1,
      sym__string_non_escaped_content,
    ACTIONS(730), 1,
      sym_format_sequence,
    STATE(293), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LF,
    STATE(299), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(734), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(299), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(739), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(742), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14645] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(700), 1,
      sym_escape_sequence_invalid,
    ACTIONS(706), 1,
      sym__string_non_escaped_content,
    ACTIONS(708), 1,
      sym_format_sequence,
    ACTIONS(744), 1,
      anon_sym_DQUOTE2,
    STATE(289), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(750), 1,
      anon_sym_else,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14699] = 3,
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
  [14713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14727] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COLON_EQ,
    ACTIONS(764), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14741] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COLON_EQ,
    ACTIONS(768), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14755] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(352), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [14773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(780), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LF,
    ACTIONS(784), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LF,
    ACTIONS(788), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14815] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      anon_sym_case,
    ACTIONS(794), 1,
      anon_sym_default,
    STATE(323), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14833] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_case,
    ACTIONS(794), 1,
      anon_sym_default,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    STATE(320), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LF,
    ACTIONS(742), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LF,
    ACTIONS(802), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LF,
    ACTIONS(806), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LF,
    ACTIONS(810), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14907] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COLON_EQ,
    ACTIONS(764), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LF,
    ACTIONS(816), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14949] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_case,
    ACTIONS(794), 1,
      anon_sym_default,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(323), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LF,
    ACTIONS(826), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(830), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14995] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      anon_sym_case,
    ACTIONS(837), 1,
      anon_sym_default,
    STATE(323), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [15013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(842), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [15027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LF,
    ACTIONS(846), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(850), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [15055] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(367), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [15070] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    STATE(367), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [15085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(842), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [15098] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
    STATE(367), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [15110] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_if,
    STATE(321), 2,
      sym_block,
      sym_if_statement,
  [15124] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15137] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_EQ,
    ACTIONS(860), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15148] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      aux_sym_map_literal_values_repeat1,
  [15161] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_map_literal_values_repeat1,
  [15174] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_identifier,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym_parameter_list,
  [15187] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15200] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15213] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15226] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym_parameter_list_repeat1,
  [15239] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15252] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_parameter_list_repeat1,
  [15265] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15278] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15291] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_import,
    ACTIONS(898), 1,
      anon_sym_DOT,
    STATE(349), 1,
      aux_sym_import_statement_from_repeat1,
  [15304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LF,
    ACTIONS(902), 2,
      anon_sym_SEMI,
      anon_sym_,
  [15315] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15328] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_map_literal_values_repeat1,
  [15341] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_import,
    ACTIONS(910), 1,
      anon_sym_DOT,
    STATE(349), 1,
      aux_sym_import_statement_from_repeat1,
  [15354] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_DOT,
    ACTIONS(913), 1,
      anon_sym_import,
    STATE(345), 1,
      aux_sym_import_statement_from_repeat1,
  [15367] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_expression_list_repeat1,
  [15380] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_parameter_list_repeat1,
  [15393] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(919), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15402] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(921), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15411] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15419] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(308), 1,
      sym_block,
  [15429] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_block,
  [15439] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_block,
  [15449] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_parameter_list,
  [15459] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym_parameter_list,
  [15469] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym_parameter_list,
  [15479] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [15489] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15497] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_import,
      anon_sym_DOT,
  [15505] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_parameter_list,
  [15515] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_block,
  [15525] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(890), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15533] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym_parameter_list,
  [15543] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
  [15553] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15561] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_COLON,
  [15568] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [15575] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [15582] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_LBRACE,
  [15589] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_EQ,
  [15596] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
  [15603] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LBRACE,
  [15610] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
  [15617] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_identifier,
  [15624] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
  [15631] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [15638] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LBRACE,
  [15645] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [15652] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_identifier,
  [15659] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
  [15666] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [15673] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [15680] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [15687] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_identifier,
  [15694] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
  [15701] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACE,
  [15708] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_LBRACE,
  [15715] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [15722] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_EQ,
  [15729] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [15736] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [15743] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_EQ,
  [15750] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_EQ,
  [15757] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_identifier,
  [15764] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_EQ,
  [15771] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_EQ,
  [15778] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_import,
  [15785] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
  [15792] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [15799] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SEMI,
  [15806] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(993), 1,
      ts_builtin_sym_end,
  [15813] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_identifier,
  [15820] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
  [15827] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_identifier,
  [15834] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_identifier,
  [15841] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym_identifier,
  [15848] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 117,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 527,
  [SMALL_STATE(21)] = 608,
  [SMALL_STATE(22)] = 676,
  [SMALL_STATE(23)] = 730,
  [SMALL_STATE(24)] = 800,
  [SMALL_STATE(25)] = 870,
  [SMALL_STATE(26)] = 926,
  [SMALL_STATE(27)] = 984,
  [SMALL_STATE(28)] = 1046,
  [SMALL_STATE(29)] = 1110,
  [SMALL_STATE(30)] = 1156,
  [SMALL_STATE(31)] = 1232,
  [SMALL_STATE(32)] = 1302,
  [SMALL_STATE(33)] = 1348,
  [SMALL_STATE(34)] = 1410,
  [SMALL_STATE(35)] = 1464,
  [SMALL_STATE(36)] = 1534,
  [SMALL_STATE(37)] = 1579,
  [SMALL_STATE(38)] = 1624,
  [SMALL_STATE(39)] = 1669,
  [SMALL_STATE(40)] = 1714,
  [SMALL_STATE(41)] = 1759,
  [SMALL_STATE(42)] = 1804,
  [SMALL_STATE(43)] = 1849,
  [SMALL_STATE(44)] = 1894,
  [SMALL_STATE(45)] = 1971,
  [SMALL_STATE(46)] = 2016,
  [SMALL_STATE(47)] = 2061,
  [SMALL_STATE(48)] = 2106,
  [SMALL_STATE(49)] = 2151,
  [SMALL_STATE(50)] = 2196,
  [SMALL_STATE(51)] = 2241,
  [SMALL_STATE(52)] = 2286,
  [SMALL_STATE(53)] = 2333,
  [SMALL_STATE(54)] = 2378,
  [SMALL_STATE(55)] = 2423,
  [SMALL_STATE(56)] = 2468,
  [SMALL_STATE(57)] = 2513,
  [SMALL_STATE(58)] = 2579,
  [SMALL_STATE(59)] = 2645,
  [SMALL_STATE(60)] = 2711,
  [SMALL_STATE(61)] = 2777,
  [SMALL_STATE(62)] = 2840,
  [SMALL_STATE(63)] = 2891,
  [SMALL_STATE(64)] = 2954,
  [SMALL_STATE(65)] = 3017,
  [SMALL_STATE(66)] = 3080,
  [SMALL_STATE(67)] = 3143,
  [SMALL_STATE(68)] = 3206,
  [SMALL_STATE(69)] = 3269,
  [SMALL_STATE(70)] = 3332,
  [SMALL_STATE(71)] = 3395,
  [SMALL_STATE(72)] = 3476,
  [SMALL_STATE(73)] = 3539,
  [SMALL_STATE(74)] = 3602,
  [SMALL_STATE(75)] = 3665,
  [SMALL_STATE(76)] = 3728,
  [SMALL_STATE(77)] = 3783,
  [SMALL_STATE(78)] = 3846,
  [SMALL_STATE(79)] = 3897,
  [SMALL_STATE(80)] = 3954,
  [SMALL_STATE(81)] = 4017,
  [SMALL_STATE(82)] = 4080,
  [SMALL_STATE(83)] = 4143,
  [SMALL_STATE(84)] = 4206,
  [SMALL_STATE(85)] = 4271,
  [SMALL_STATE(86)] = 4334,
  [SMALL_STATE(87)] = 4397,
  [SMALL_STATE(88)] = 4460,
  [SMALL_STATE(89)] = 4523,
  [SMALL_STATE(90)] = 4586,
  [SMALL_STATE(91)] = 4649,
  [SMALL_STATE(92)] = 4712,
  [SMALL_STATE(93)] = 4775,
  [SMALL_STATE(94)] = 4838,
  [SMALL_STATE(95)] = 4898,
  [SMALL_STATE(96)] = 4958,
  [SMALL_STATE(97)] = 5018,
  [SMALL_STATE(98)] = 5078,
  [SMALL_STATE(99)] = 5138,
  [SMALL_STATE(100)] = 5198,
  [SMALL_STATE(101)] = 5240,
  [SMALL_STATE(102)] = 5300,
  [SMALL_STATE(103)] = 5360,
  [SMALL_STATE(104)] = 5402,
  [SMALL_STATE(105)] = 5462,
  [SMALL_STATE(106)] = 5522,
  [SMALL_STATE(107)] = 5564,
  [SMALL_STATE(108)] = 5624,
  [SMALL_STATE(109)] = 5666,
  [SMALL_STATE(110)] = 5708,
  [SMALL_STATE(111)] = 5750,
  [SMALL_STATE(112)] = 5792,
  [SMALL_STATE(113)] = 5852,
  [SMALL_STATE(114)] = 5912,
  [SMALL_STATE(115)] = 5972,
  [SMALL_STATE(116)] = 6032,
  [SMALL_STATE(117)] = 6092,
  [SMALL_STATE(118)] = 6152,
  [SMALL_STATE(119)] = 6212,
  [SMALL_STATE(120)] = 6254,
  [SMALL_STATE(121)] = 6314,
  [SMALL_STATE(122)] = 6356,
  [SMALL_STATE(123)] = 6398,
  [SMALL_STATE(124)] = 6458,
  [SMALL_STATE(125)] = 6500,
  [SMALL_STATE(126)] = 6542,
  [SMALL_STATE(127)] = 6584,
  [SMALL_STATE(128)] = 6644,
  [SMALL_STATE(129)] = 6686,
  [SMALL_STATE(130)] = 6728,
  [SMALL_STATE(131)] = 6788,
  [SMALL_STATE(132)] = 6830,
  [SMALL_STATE(133)] = 6890,
  [SMALL_STATE(134)] = 6950,
  [SMALL_STATE(135)] = 7010,
  [SMALL_STATE(136)] = 7070,
  [SMALL_STATE(137)] = 7130,
  [SMALL_STATE(138)] = 7190,
  [SMALL_STATE(139)] = 7250,
  [SMALL_STATE(140)] = 7310,
  [SMALL_STATE(141)] = 7370,
  [SMALL_STATE(142)] = 7430,
  [SMALL_STATE(143)] = 7490,
  [SMALL_STATE(144)] = 7532,
  [SMALL_STATE(145)] = 7574,
  [SMALL_STATE(146)] = 7634,
  [SMALL_STATE(147)] = 7694,
  [SMALL_STATE(148)] = 7736,
  [SMALL_STATE(149)] = 7778,
  [SMALL_STATE(150)] = 7820,
  [SMALL_STATE(151)] = 7880,
  [SMALL_STATE(152)] = 7940,
  [SMALL_STATE(153)] = 8000,
  [SMALL_STATE(154)] = 8060,
  [SMALL_STATE(155)] = 8120,
  [SMALL_STATE(156)] = 8180,
  [SMALL_STATE(157)] = 8240,
  [SMALL_STATE(158)] = 8300,
  [SMALL_STATE(159)] = 8360,
  [SMALL_STATE(160)] = 8420,
  [SMALL_STATE(161)] = 8480,
  [SMALL_STATE(162)] = 8540,
  [SMALL_STATE(163)] = 8600,
  [SMALL_STATE(164)] = 8660,
  [SMALL_STATE(165)] = 8720,
  [SMALL_STATE(166)] = 8780,
  [SMALL_STATE(167)] = 8840,
  [SMALL_STATE(168)] = 8900,
  [SMALL_STATE(169)] = 8960,
  [SMALL_STATE(170)] = 9020,
  [SMALL_STATE(171)] = 9080,
  [SMALL_STATE(172)] = 9143,
  [SMALL_STATE(173)] = 9208,
  [SMALL_STATE(174)] = 9257,
  [SMALL_STATE(175)] = 9332,
  [SMALL_STATE(176)] = 9393,
  [SMALL_STATE(177)] = 9454,
  [SMALL_STATE(178)] = 9509,
  [SMALL_STATE(179)] = 9558,
  [SMALL_STATE(180)] = 9611,
  [SMALL_STATE(181)] = 9651,
  [SMALL_STATE(182)] = 9691,
  [SMALL_STATE(183)] = 9731,
  [SMALL_STATE(184)] = 9771,
  [SMALL_STATE(185)] = 9811,
  [SMALL_STATE(186)] = 9851,
  [SMALL_STATE(187)] = 9891,
  [SMALL_STATE(188)] = 9931,
  [SMALL_STATE(189)] = 9971,
  [SMALL_STATE(190)] = 10011,
  [SMALL_STATE(191)] = 10051,
  [SMALL_STATE(192)] = 10091,
  [SMALL_STATE(193)] = 10131,
  [SMALL_STATE(194)] = 10171,
  [SMALL_STATE(195)] = 10211,
  [SMALL_STATE(196)] = 10251,
  [SMALL_STATE(197)] = 10291,
  [SMALL_STATE(198)] = 10331,
  [SMALL_STATE(199)] = 10371,
  [SMALL_STATE(200)] = 10411,
  [SMALL_STATE(201)] = 10451,
  [SMALL_STATE(202)] = 10490,
  [SMALL_STATE(203)] = 10529,
  [SMALL_STATE(204)] = 10568,
  [SMALL_STATE(205)] = 10607,
  [SMALL_STATE(206)] = 10645,
  [SMALL_STATE(207)] = 10693,
  [SMALL_STATE(208)] = 10737,
  [SMALL_STATE(209)] = 10789,
  [SMALL_STATE(210)] = 10845,
  [SMALL_STATE(211)] = 10901,
  [SMALL_STATE(212)] = 10955,
  [SMALL_STATE(213)] = 11007,
  [SMALL_STATE(214)] = 11063,
  [SMALL_STATE(215)] = 11107,
  [SMALL_STATE(216)] = 11163,
  [SMALL_STATE(217)] = 11219,
  [SMALL_STATE(218)] = 11265,
  [SMALL_STATE(219)] = 11300,
  [SMALL_STATE(220)] = 11335,
  [SMALL_STATE(221)] = 11370,
  [SMALL_STATE(222)] = 11405,
  [SMALL_STATE(223)] = 11440,
  [SMALL_STATE(224)] = 11475,
  [SMALL_STATE(225)] = 11510,
  [SMALL_STATE(226)] = 11545,
  [SMALL_STATE(227)] = 11580,
  [SMALL_STATE(228)] = 11615,
  [SMALL_STATE(229)] = 11650,
  [SMALL_STATE(230)] = 11685,
  [SMALL_STATE(231)] = 11720,
  [SMALL_STATE(232)] = 11755,
  [SMALL_STATE(233)] = 11790,
  [SMALL_STATE(234)] = 11825,
  [SMALL_STATE(235)] = 11860,
  [SMALL_STATE(236)] = 11895,
  [SMALL_STATE(237)] = 11930,
  [SMALL_STATE(238)] = 11965,
  [SMALL_STATE(239)] = 12000,
  [SMALL_STATE(240)] = 12064,
  [SMALL_STATE(241)] = 12128,
  [SMALL_STATE(242)] = 12189,
  [SMALL_STATE(243)] = 12250,
  [SMALL_STATE(244)] = 12311,
  [SMALL_STATE(245)] = 12372,
  [SMALL_STATE(246)] = 12433,
  [SMALL_STATE(247)] = 12494,
  [SMALL_STATE(248)] = 12555,
  [SMALL_STATE(249)] = 12616,
  [SMALL_STATE(250)] = 12674,
  [SMALL_STATE(251)] = 12730,
  [SMALL_STATE(252)] = 12786,
  [SMALL_STATE(253)] = 12842,
  [SMALL_STATE(254)] = 12898,
  [SMALL_STATE(255)] = 12954,
  [SMALL_STATE(256)] = 13010,
  [SMALL_STATE(257)] = 13065,
  [SMALL_STATE(258)] = 13120,
  [SMALL_STATE(259)] = 13175,
  [SMALL_STATE(260)] = 13230,
  [SMALL_STATE(261)] = 13285,
  [SMALL_STATE(262)] = 13340,
  [SMALL_STATE(263)] = 13395,
  [SMALL_STATE(264)] = 13450,
  [SMALL_STATE(265)] = 13505,
  [SMALL_STATE(266)] = 13560,
  [SMALL_STATE(267)] = 13615,
  [SMALL_STATE(268)] = 13670,
  [SMALL_STATE(269)] = 13725,
  [SMALL_STATE(270)] = 13780,
  [SMALL_STATE(271)] = 13835,
  [SMALL_STATE(272)] = 13890,
  [SMALL_STATE(273)] = 13945,
  [SMALL_STATE(274)] = 14000,
  [SMALL_STATE(275)] = 14055,
  [SMALL_STATE(276)] = 14079,
  [SMALL_STATE(277)] = 14106,
  [SMALL_STATE(278)] = 14127,
  [SMALL_STATE(279)] = 14154,
  [SMALL_STATE(280)] = 14181,
  [SMALL_STATE(281)] = 14208,
  [SMALL_STATE(282)] = 14235,
  [SMALL_STATE(283)] = 14262,
  [SMALL_STATE(284)] = 14289,
  [SMALL_STATE(285)] = 14316,
  [SMALL_STATE(286)] = 14343,
  [SMALL_STATE(287)] = 14364,
  [SMALL_STATE(288)] = 14384,
  [SMALL_STATE(289)] = 14404,
  [SMALL_STATE(290)] = 14427,
  [SMALL_STATE(291)] = 14446,
  [SMALL_STATE(292)] = 14469,
  [SMALL_STATE(293)] = 14492,
  [SMALL_STATE(294)] = 14515,
  [SMALL_STATE(295)] = 14538,
  [SMALL_STATE(296)] = 14561,
  [SMALL_STATE(297)] = 14584,
  [SMALL_STATE(298)] = 14607,
  [SMALL_STATE(299)] = 14626,
  [SMALL_STATE(300)] = 14645,
  [SMALL_STATE(301)] = 14668,
  [SMALL_STATE(302)] = 14685,
  [SMALL_STATE(303)] = 14699,
  [SMALL_STATE(304)] = 14713,
  [SMALL_STATE(305)] = 14727,
  [SMALL_STATE(306)] = 14741,
  [SMALL_STATE(307)] = 14755,
  [SMALL_STATE(308)] = 14773,
  [SMALL_STATE(309)] = 14787,
  [SMALL_STATE(310)] = 14801,
  [SMALL_STATE(311)] = 14815,
  [SMALL_STATE(312)] = 14833,
  [SMALL_STATE(313)] = 14851,
  [SMALL_STATE(314)] = 14865,
  [SMALL_STATE(315)] = 14879,
  [SMALL_STATE(316)] = 14893,
  [SMALL_STATE(317)] = 14907,
  [SMALL_STATE(318)] = 14921,
  [SMALL_STATE(319)] = 14935,
  [SMALL_STATE(320)] = 14949,
  [SMALL_STATE(321)] = 14967,
  [SMALL_STATE(322)] = 14981,
  [SMALL_STATE(323)] = 14995,
  [SMALL_STATE(324)] = 15013,
  [SMALL_STATE(325)] = 15027,
  [SMALL_STATE(326)] = 15041,
  [SMALL_STATE(327)] = 15055,
  [SMALL_STATE(328)] = 15070,
  [SMALL_STATE(329)] = 15085,
  [SMALL_STATE(330)] = 15098,
  [SMALL_STATE(331)] = 15110,
  [SMALL_STATE(332)] = 15124,
  [SMALL_STATE(333)] = 15137,
  [SMALL_STATE(334)] = 15148,
  [SMALL_STATE(335)] = 15161,
  [SMALL_STATE(336)] = 15174,
  [SMALL_STATE(337)] = 15187,
  [SMALL_STATE(338)] = 15200,
  [SMALL_STATE(339)] = 15213,
  [SMALL_STATE(340)] = 15226,
  [SMALL_STATE(341)] = 15239,
  [SMALL_STATE(342)] = 15252,
  [SMALL_STATE(343)] = 15265,
  [SMALL_STATE(344)] = 15278,
  [SMALL_STATE(345)] = 15291,
  [SMALL_STATE(346)] = 15304,
  [SMALL_STATE(347)] = 15315,
  [SMALL_STATE(348)] = 15328,
  [SMALL_STATE(349)] = 15341,
  [SMALL_STATE(350)] = 15354,
  [SMALL_STATE(351)] = 15367,
  [SMALL_STATE(352)] = 15380,
  [SMALL_STATE(353)] = 15393,
  [SMALL_STATE(354)] = 15402,
  [SMALL_STATE(355)] = 15411,
  [SMALL_STATE(356)] = 15419,
  [SMALL_STATE(357)] = 15429,
  [SMALL_STATE(358)] = 15439,
  [SMALL_STATE(359)] = 15449,
  [SMALL_STATE(360)] = 15459,
  [SMALL_STATE(361)] = 15469,
  [SMALL_STATE(362)] = 15479,
  [SMALL_STATE(363)] = 15489,
  [SMALL_STATE(364)] = 15497,
  [SMALL_STATE(365)] = 15505,
  [SMALL_STATE(366)] = 15515,
  [SMALL_STATE(367)] = 15525,
  [SMALL_STATE(368)] = 15533,
  [SMALL_STATE(369)] = 15543,
  [SMALL_STATE(370)] = 15553,
  [SMALL_STATE(371)] = 15561,
  [SMALL_STATE(372)] = 15568,
  [SMALL_STATE(373)] = 15575,
  [SMALL_STATE(374)] = 15582,
  [SMALL_STATE(375)] = 15589,
  [SMALL_STATE(376)] = 15596,
  [SMALL_STATE(377)] = 15603,
  [SMALL_STATE(378)] = 15610,
  [SMALL_STATE(379)] = 15617,
  [SMALL_STATE(380)] = 15624,
  [SMALL_STATE(381)] = 15631,
  [SMALL_STATE(382)] = 15638,
  [SMALL_STATE(383)] = 15645,
  [SMALL_STATE(384)] = 15652,
  [SMALL_STATE(385)] = 15659,
  [SMALL_STATE(386)] = 15666,
  [SMALL_STATE(387)] = 15673,
  [SMALL_STATE(388)] = 15680,
  [SMALL_STATE(389)] = 15687,
  [SMALL_STATE(390)] = 15694,
  [SMALL_STATE(391)] = 15701,
  [SMALL_STATE(392)] = 15708,
  [SMALL_STATE(393)] = 15715,
  [SMALL_STATE(394)] = 15722,
  [SMALL_STATE(395)] = 15729,
  [SMALL_STATE(396)] = 15736,
  [SMALL_STATE(397)] = 15743,
  [SMALL_STATE(398)] = 15750,
  [SMALL_STATE(399)] = 15757,
  [SMALL_STATE(400)] = 15764,
  [SMALL_STATE(401)] = 15771,
  [SMALL_STATE(402)] = 15778,
  [SMALL_STATE(403)] = 15785,
  [SMALL_STATE(404)] = 15792,
  [SMALL_STATE(405)] = 15799,
  [SMALL_STATE(406)] = 15806,
  [SMALL_STATE(407)] = 15813,
  [SMALL_STATE(408)] = 15820,
  [SMALL_STATE(409)] = 15827,
  [SMALL_STATE(410)] = 15834,
  [SMALL_STATE(411)] = 15841,
  [SMALL_STATE(412)] = 15848,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(336),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(410),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(409),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 20),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 20),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 18),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 27),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 19),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 29),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, .production_id = 29),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_literal, 3, .production_id = 6),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_literal, 3, .production_id = 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 11),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 11),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 22),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 22),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 16),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 16),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 16),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 16),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 13),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 13),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 12),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 12),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 23),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_pair, 3, .production_id = 15),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 30),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 28),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(136),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(146),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(285),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(324),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(324),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(285),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 10),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, .production_id = 10),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(289),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(329),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(329),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(289),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_statement, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_as, 2, .production_id = 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement_as, 2, .production_id = 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 9),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 9),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 2),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec_statement, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 20),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 20),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 21),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 21),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 20),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 20),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 7),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, .production_id = 7),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(80),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(395),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 2),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 2),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 5),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 1),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2), SHIFT_REPEAT(91),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(330),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_from, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_from_repeat1, 2),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_from_repeat1, 2), SHIFT_REPEAT(404),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_from, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 20),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 25),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 31),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 26),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 17),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [993] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
