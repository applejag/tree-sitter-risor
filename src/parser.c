#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 389
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 1
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 31

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
  anon_sym_import = 25,
  anon_sym_from = 26,
  anon_sym_DOT = 27,
  anon_sym_as = 28,
  anon_sym_if = 29,
  anon_sym_else = 30,
  anon_sym_for = 31,
  anon_sym_range = 32,
  anon_sym_switch = 33,
  anon_sym_case = 34,
  anon_sym_COLON = 35,
  anon_sym_default = 36,
  anon_sym_LBRACK = 37,
  anon_sym_RBRACK = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  anon_sym_BANG = 41,
  anon_sym_CARET = 42,
  anon_sym_STAR = 43,
  anon_sym_AMP = 44,
  anon_sym_LT_DASH = 45,
  anon_sym_SLASH = 46,
  anon_sym_STAR_STAR = 47,
  anon_sym_PERCENT = 48,
  anon_sym_LT_LT = 49,
  anon_sym_GT_GT = 50,
  anon_sym_PIPE = 51,
  anon_sym_EQ_EQ = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_LT = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_GT = 56,
  anon_sym_GT_EQ = 57,
  anon_sym_AMP_AMP = 58,
  anon_sym_PIPE_PIPE = 59,
  anon_sym_QMARK = 60,
  anon_sym_DQUOTE = 61,
  anon_sym_DQUOTE2 = 62,
  sym__string_non_escaped_content = 63,
  anon_sym_SQUOTE = 64,
  anon_sym_SQUOTE2 = 65,
  sym_string_template_char = 66,
  aux_sym_escape_sequence_token1 = 67,
  sym_escape_sequence_invalid = 68,
  sym_format_sequence = 69,
  sym_string_backtick = 70,
  sym_int_literal = 71,
  sym_float_literal = 72,
  sym_nil = 73,
  sym_true = 74,
  sym_false = 75,
  sym_comment = 76,
  sym_source_file = 77,
  sym__definition = 78,
  sym_function_declaration = 79,
  sym_parameter_list = 80,
  sym__parameter_declaration = 81,
  sym_parameter_declaration = 82,
  sym_parameter_declaration_default = 83,
  sym_block = 84,
  sym__statement_list = 85,
  sym__statement = 86,
  sym__simple_statement = 87,
  sym__declaration = 88,
  sym_const_declaration = 89,
  sym_var_declaration = 90,
  sym_short_var_declaration = 91,
  sym_inc_statement = 92,
  sym_dec_statement = 93,
  sym_assignment_statement = 94,
  sym_break_statement = 95,
  sym_continue_statement = 96,
  sym_return_statement = 97,
  sym_import_statement = 98,
  sym_import_statement_from = 99,
  sym_import_statement_as = 100,
  sym_if_statement = 101,
  sym_for_statement = 102,
  sym_for_clause = 103,
  sym_range_clause = 104,
  sym_switch_statement = 105,
  sym_switch_case = 106,
  sym_default_case = 107,
  sym_expression_statement = 108,
  sym__expression = 109,
  sym_selector_expression = 110,
  sym_index_expression = 111,
  sym_expression_list = 112,
  sym_parenthesized_expression = 113,
  sym_call_expression = 114,
  sym_argument_list = 115,
  sym__complex_literal = 116,
  sym_list_literal = 117,
  sym_map_or_set_literal = 118,
  sym_set_literal_values = 119,
  sym_map_literal_values = 120,
  sym_map_literal_pair = 121,
  sym_unary_expression = 122,
  sym_binary_expression = 123,
  sym_conditional_expression = 124,
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
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 1},
  [19] = {.index = 31, .length = 1},
  [20] = {.index = 32, .length = 3},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 3},
  [23] = {.index = 40, .length = 2},
  [24] = {.index = 42, .length = 2},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 3},
  [27] = {.index = 49, .length = 3},
  [28] = {.index = 52, .length = 2},
  [29] = {.index = 54, .length = 4},
  [30] = {.index = 58, .length = 3},
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
    {field_as, 2},
    {field_name, 1},
  [8] =
    {field_condition, 1},
    {field_consequence, 2},
  [10] =
    {field_body, 2},
  [11] =
    {field_from, 0},
    {field_name, 2},
  [13] =
    {field_field, 2},
    {field_operand, 0},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [18] =
    {field_left, 0},
    {field_right, 2},
  [20] =
    {field_name, 0},
  [21] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_name, 1},
    {field_value, 3},
  [28] =
    {field_update, 2},
  [29] =
    {field_condition, 1},
  [30] =
    {field_initializer, 0},
  [31] =
    {field_value, 1},
  [32] =
    {field_as, 3},
    {field_from, 0},
    {field_name, 2},
  [35] =
    {field_index, 2},
    {field_operand, 0},
  [37] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [40] =
    {field_condition, 1},
    {field_update, 3},
  [42] =
    {field_initializer, 0},
    {field_update, 3},
  [44] =
    {field_condition, 2},
    {field_initializer, 0},
  [46] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [49] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [52] =
    {field_default, 2},
    {field_name, 0},
  [54] =
    {field_left, 0},
    {field_left, 1},
    {field_left, 2},
    {field_right, 4},
  [58] =
    {field_condition, 2},
    {field_initializer, 0},
    {field_update, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
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
  [47] = 47,
  [48] = 47,
  [49] = 47,
  [50] = 47,
  [51] = 51,
  [52] = 24,
  [53] = 22,
  [54] = 20,
  [55] = 18,
  [56] = 25,
  [57] = 23,
  [58] = 21,
  [59] = 32,
  [60] = 36,
  [61] = 42,
  [62] = 62,
  [63] = 44,
  [64] = 30,
  [65] = 37,
  [66] = 28,
  [67] = 45,
  [68] = 27,
  [69] = 38,
  [70] = 46,
  [71] = 62,
  [72] = 41,
  [73] = 43,
  [74] = 31,
  [75] = 34,
  [76] = 40,
  [77] = 33,
  [78] = 62,
  [79] = 29,
  [80] = 62,
  [81] = 81,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 82,
  [90] = 87,
  [91] = 21,
  [92] = 23,
  [93] = 88,
  [94] = 87,
  [95] = 95,
  [96] = 87,
  [97] = 97,
  [98] = 26,
  [99] = 88,
  [100] = 88,
  [101] = 82,
  [102] = 25,
  [103] = 103,
  [104] = 24,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 22,
  [109] = 20,
  [110] = 18,
  [111] = 111,
  [112] = 112,
  [113] = 106,
  [114] = 111,
  [115] = 37,
  [116] = 116,
  [117] = 28,
  [118] = 45,
  [119] = 31,
  [120] = 120,
  [121] = 121,
  [122] = 30,
  [123] = 44,
  [124] = 34,
  [125] = 125,
  [126] = 38,
  [127] = 27,
  [128] = 42,
  [129] = 116,
  [130] = 40,
  [131] = 131,
  [132] = 120,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 32,
  [140] = 33,
  [141] = 43,
  [142] = 36,
  [143] = 143,
  [144] = 121,
  [145] = 29,
  [146] = 41,
  [147] = 125,
  [148] = 120,
  [149] = 121,
  [150] = 116,
  [151] = 46,
  [152] = 125,
  [153] = 153,
  [154] = 120,
  [155] = 131,
  [156] = 156,
  [157] = 143,
  [158] = 134,
  [159] = 135,
  [160] = 160,
  [161] = 136,
  [162] = 162,
  [163] = 137,
  [164] = 137,
  [165] = 143,
  [166] = 143,
  [167] = 167,
  [168] = 168,
  [169] = 116,
  [170] = 170,
  [171] = 167,
  [172] = 172,
  [173] = 170,
  [174] = 136,
  [175] = 153,
  [176] = 176,
  [177] = 156,
  [178] = 125,
  [179] = 137,
  [180] = 135,
  [181] = 134,
  [182] = 121,
  [183] = 131,
  [184] = 184,
  [185] = 136,
  [186] = 131,
  [187] = 135,
  [188] = 134,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 23,
  [197] = 25,
  [198] = 24,
  [199] = 199,
  [200] = 22,
  [201] = 20,
  [202] = 202,
  [203] = 203,
  [204] = 18,
  [205] = 21,
  [206] = 29,
  [207] = 34,
  [208] = 44,
  [209] = 36,
  [210] = 40,
  [211] = 33,
  [212] = 32,
  [213] = 31,
  [214] = 41,
  [215] = 30,
  [216] = 37,
  [217] = 38,
  [218] = 27,
  [219] = 42,
  [220] = 43,
  [221] = 28,
  [222] = 46,
  [223] = 45,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 226,
  [229] = 227,
  [230] = 226,
  [231] = 227,
  [232] = 226,
  [233] = 227,
  [234] = 234,
  [235] = 235,
  [236] = 195,
  [237] = 202,
  [238] = 193,
  [239] = 194,
  [240] = 240,
  [241] = 241,
  [242] = 241,
  [243] = 243,
  [244] = 241,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 249,
  [251] = 241,
  [252] = 249,
  [253] = 245,
  [254] = 254,
  [255] = 245,
  [256] = 256,
  [257] = 257,
  [258] = 245,
  [259] = 249,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 262,
  [265] = 263,
  [266] = 266,
  [267] = 263,
  [268] = 262,
  [269] = 269,
  [270] = 263,
  [271] = 262,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 189,
  [276] = 276,
  [277] = 276,
  [278] = 190,
  [279] = 279,
  [280] = 280,
  [281] = 279,
  [282] = 282,
  [283] = 279,
  [284] = 276,
  [285] = 279,
  [286] = 276,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 295,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 300,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 319,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 319,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 328,
  [334] = 328,
  [335] = 335,
  [336] = 336,
  [337] = 319,
  [338] = 338,
  [339] = 328,
  [340] = 340,
  [341] = 341,
  [342] = 304,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 313,
  [349] = 349,
  [350] = 349,
  [351] = 351,
  [352] = 349,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 349,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 351,
  [365] = 365,
  [366] = 351,
  [367] = 351,
  [368] = 368,
  [369] = 362,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 360,
  [375] = 375,
  [376] = 376,
  [377] = 363,
  [378] = 358,
  [379] = 379,
  [380] = 380,
  [381] = 362,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 362,
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
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 80:
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
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
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
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 32},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 32},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 32},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 32},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 32},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 32},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 32},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 32},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 7},
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
  [171] = {.lex_state = 32},
  [172] = {.lex_state = 32},
  [173] = {.lex_state = 32},
  [174] = {.lex_state = 32},
  [175] = {.lex_state = 32},
  [176] = {.lex_state = 32},
  [177] = {.lex_state = 32},
  [178] = {.lex_state = 32},
  [179] = {.lex_state = 32},
  [180] = {.lex_state = 32},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 32},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 32},
  [185] = {.lex_state = 32},
  [186] = {.lex_state = 32},
  [187] = {.lex_state = 32},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 32},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 32},
  [192] = {.lex_state = 32},
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
  [260] = {.lex_state = 32},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 32},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 32},
  [296] = {.lex_state = 32},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 32},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 32},
  [302] = {.lex_state = 32},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 32},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 32},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 32},
  [316] = {.lex_state = 32},
  [317] = {.lex_state = 32},
  [318] = {.lex_state = 32},
  [319] = {.lex_state = 32},
  [320] = {.lex_state = 32},
  [321] = {.lex_state = 32},
  [322] = {.lex_state = 32},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 32},
  [326] = {.lex_state = 32},
  [327] = {.lex_state = 32},
  [328] = {.lex_state = 32},
  [329] = {.lex_state = 32},
  [330] = {.lex_state = 32},
  [331] = {.lex_state = 32},
  [332] = {.lex_state = 32},
  [333] = {.lex_state = 32},
  [334] = {.lex_state = 32},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 32},
  [337] = {.lex_state = 32},
  [338] = {.lex_state = 8},
  [339] = {.lex_state = 32},
  [340] = {.lex_state = 32},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 32},
  [343] = {.lex_state = 32},
  [344] = {.lex_state = 32},
  [345] = {.lex_state = 32},
  [346] = {.lex_state = 32},
  [347] = {.lex_state = 32},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 32},
  [350] = {.lex_state = 32},
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
  [364] = {.lex_state = 32},
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
    [sym_source_file] = STATE(382),
    [sym__definition] = STATE(4),
    [sym_function_declaration] = STATE(4),
    [sym__statement] = STATE(323),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [sym__statement_list] = STATE(374),
    [sym__statement] = STATE(280),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(39),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_set_literal_values] = STATE(362),
    [sym_map_literal_values] = STATE(362),
    [sym_map_literal_pair] = STATE(330),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(47),
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
    [sym__definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym__statement] = STATE(323),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_func] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_const] = ACTIONS(63),
    [anon_sym_var] = ACTIONS(66),
    [anon_sym_break] = ACTIONS(69),
    [anon_sym_continue] = ACTIONS(72),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(78),
    [anon_sym_from] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(84),
    [anon_sym_for] = ACTIONS(87),
    [anon_sym_switch] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_LT_DASH] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_string_backtick] = ACTIONS(105),
    [sym_int_literal] = ACTIONS(51),
    [sym_float_literal] = ACTIONS(105),
    [sym_nil] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_comment] = ACTIONS(45),
  },
  [4] = {
    [sym__definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym__statement] = STATE(323),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(108),
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
  [5] = {
    [sym__statement_list] = STATE(332),
    [sym__statement] = STATE(280),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(110),
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
    [anon_sym_case] = ACTIONS(112),
    [anon_sym_default] = ACTIONS(112),
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
    [sym__statement_list] = STATE(322),
    [sym__statement] = STATE(280),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [sym_identifier] = ACTIONS(7),
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
  [7] = {
    [sym__statement] = STATE(312),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(118),
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
    [anon_sym_case] = ACTIONS(120),
    [anon_sym_default] = ACTIONS(120),
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
    [sym__statement] = STATE(312),
    [sym__simple_statement] = STATE(294),
    [sym__declaration] = STATE(294),
    [sym_const_declaration] = STATE(294),
    [sym_var_declaration] = STATE(294),
    [sym_short_var_declaration] = STATE(294),
    [sym_inc_statement] = STATE(294),
    [sym_dec_statement] = STATE(294),
    [sym_assignment_statement] = STATE(294),
    [sym_break_statement] = STATE(294),
    [sym_continue_statement] = STATE(294),
    [sym_return_statement] = STATE(294),
    [sym_import_statement] = STATE(294),
    [sym_import_statement_from] = STATE(379),
    [sym_if_statement] = STATE(294),
    [sym_for_statement] = STATE(294),
    [sym_switch_statement] = STATE(294),
    [sym_expression_statement] = STATE(294),
    [sym__expression] = STATE(26),
    [sym_selector_expression] = STATE(41),
    [sym_index_expression] = STATE(41),
    [sym_expression_list] = STATE(296),
    [sym_parenthesized_expression] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym__complex_literal] = STATE(41),
    [sym_list_literal] = STATE(41),
    [sym_map_or_set_literal] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_conditional_expression] = STATE(41),
    [sym_string] = STATE(41),
    [sym_string_template] = STATE(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(122),
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
    [anon_sym_case] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
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
  [0] = 27,
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
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym__expression,
    STATE(280), 1,
      sym__statement,
    STATE(296), 1,
      sym_expression_list,
    STATE(360), 1,
      sym__statement_list,
    STATE(379), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
    STATE(294), 16,
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
  [119] = 27,
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
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym__expression,
    STATE(280), 1,
      sym__statement,
    STATE(296), 1,
      sym_expression_list,
    STATE(374), 1,
      sym__statement_list,
    STATE(379), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
    STATE(294), 16,
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
  [238] = 25,
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
    STATE(26), 1,
      sym__expression,
    STATE(296), 1,
      sym_expression_list,
    STATE(312), 1,
      sym__statement,
    STATE(379), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
    STATE(294), 16,
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
  [351] = 18,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_const,
    ACTIONS(140), 1,
      anon_sym_var,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__expression,
    STATE(303), 1,
      sym_block,
    STATE(307), 1,
      sym_expression_list,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(347), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(353), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [437] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_const,
    ACTIONS(156), 1,
      anon_sym_var,
    STATE(98), 1,
      sym__expression,
    STATE(295), 1,
      sym_expression_list,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(387), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [513] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_const,
    ACTIONS(156), 1,
      anon_sym_var,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym__expression,
    STATE(295), 1,
      sym_expression_list,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(361), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [589] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_const,
    ACTIONS(156), 1,
      anon_sym_var,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym__expression,
    STATE(295), 1,
      sym_expression_list,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(384), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [665] = 15,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_const,
    ACTIONS(156), 1,
      anon_sym_var,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym__expression,
    STATE(295), 1,
      sym_expression_list,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(380), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [741] = 17,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_case,
    ACTIONS(174), 1,
      anon_sym_default,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      sym__expression,
    STATE(330), 1,
      sym_map_literal_pair,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(381), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    STATE(302), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(188), 27,
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
  [874] = 12,
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
    STATE(203), 1,
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
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(188), 33,
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
  [992] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(218), 33,
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
  [1046] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(220), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(188), 24,
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
  [1104] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(228), 1,
      anon_sym_QMARK,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(220), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(224), 17,
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
  [1166] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_QMARK,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(220), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(188), 17,
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
  [1228] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_QMARK,
    ACTIONS(230), 1,
      anon_sym_AMP_AMP,
    STATE(40), 1,
      sym_argument_list,
    ACTIONS(220), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(188), 16,
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
  [1292] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_QMARK,
    ACTIONS(230), 1,
      anon_sym_AMP_AMP,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(242), 1,
      anon_sym_DASH_DASH,
    ACTIONS(244), 1,
      anon_sym_PIPE_PIPE,
    STATE(40), 1,
      sym_argument_list,
    STATE(266), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(220), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(234), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(238), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 36,
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
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 36,
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
  [1458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 36,
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
  [1503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 36,
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
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 36,
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
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 36,
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
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 36,
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
  [1683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 36,
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
  [1728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 4,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(256), 32,
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
  [1775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 36,
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
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 36,
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
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 36,
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
  [1910] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_QMARK,
    ACTIONS(230), 1,
      anon_sym_AMP_AMP,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(242), 1,
      anon_sym_DASH_DASH,
    ACTIONS(244), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(294), 1,
      anon_sym_COLON,
    STATE(40), 1,
      sym_argument_list,
    STATE(269), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(220), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(234), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(196), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(238), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1987] = 3,
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
  [2032] = 3,
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
  [2077] = 3,
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
  [2122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 36,
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
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 36,
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
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 36,
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
  [2257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 36,
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
  [2302] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym__expression,
    STATE(330), 1,
      sym_map_literal_pair,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(362), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [2368] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym__expression,
    STATE(330), 1,
      sym_map_literal_pair,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(381), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [2434] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym__expression,
    STATE(330), 1,
      sym_map_literal_pair,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(369), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [2500] = 14,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym__expression,
    STATE(330), 1,
      sym_map_literal_pair,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(388), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [2566] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(342), 1,
      anon_sym_DASH_DASH,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(360), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    STATE(266), 1,
      aux_sym_expression_list_repeat1,
    STATE(290), 1,
      sym_block,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(352), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(338), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [2647] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(188), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(370), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(374), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(186), 13,
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
  [2710] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(370), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(188), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(374), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(186), 18,
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
  [2767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_argument_list,
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
    ACTIONS(186), 22,
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
  [2818] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(188), 7,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 18,
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
  [2873] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(188), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(370), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(374), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(186), 12,
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
  [2938] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(224), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(370), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(374), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(376), 4,
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
  [3001] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(218), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 22,
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
  [3052] = 3,
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
    ACTIONS(266), 25,
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
  [3094] = 3,
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
    ACTIONS(282), 25,
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
  [3136] = 3,
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
  [3178] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 25,
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
  [3282] = 3,
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
    ACTIONS(258), 25,
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
  [3324] = 3,
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
    ACTIONS(286), 25,
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
  [3366] = 3,
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
    ACTIONS(250), 25,
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
  [3408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 25,
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
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 25,
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
  [3492] = 3,
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
    ACTIONS(290), 25,
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
  [3534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 25,
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
  [3576] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [3638] = 3,
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
  [3680] = 3,
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
    ACTIONS(308), 25,
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
  [3722] = 3,
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
  [3764] = 3,
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
    ACTIONS(274), 25,
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
  [3806] = 3,
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
  [3848] = 3,
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
    ACTIONS(270), 25,
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
  [3890] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [3952] = 3,
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
    ACTIONS(254), 25,
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
  [3994] = 13,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4056] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(354), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4115] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4174] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(230), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4233] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(404), 1,
      anon_sym_range,
    STATE(236), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4292] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      sym__expression,
    STATE(343), 1,
      sym_map_literal_pair,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4351] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(404), 1,
      anon_sym_range,
    STATE(237), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4410] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4469] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4528] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4587] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4646] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(218), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 21,
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
  [4695] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(352), 4,
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
  [4756] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4815] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4874] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4933] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [4992] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(368), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5051] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(342), 1,
      anon_sym_DASH_DASH,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(360), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    STATE(266), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(352), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(338), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [5126] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5185] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5244] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5303] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(352), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(186), 11,
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
  [5366] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    STATE(243), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5425] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(352), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(354), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(186), 12,
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
  [5486] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      anon_sym_range,
    STATE(238), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5545] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(378), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5604] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(373), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5663] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(188), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(352), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(186), 17,
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
  [5718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(188), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 21,
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
  [5767] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(350), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(188), 6,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 17,
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
  [5820] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(377), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [5879] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(370), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(374), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [5944] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(358), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6003] = 12,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__expression,
    STATE(363), 1,
      sym_expression_list,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6062] = 3,
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
    ACTIONS(286), 24,
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
  [6102] = 11,
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
    STATE(23), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [6158] = 3,
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
    ACTIONS(250), 24,
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
  [6198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 24,
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
  [6238] = 3,
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
  [6278] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(253), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6334] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6390] = 3,
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
    ACTIONS(258), 24,
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
  [6430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 24,
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
  [6470] = 3,
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
    ACTIONS(274), 24,
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
  [6510] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6566] = 3,
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
    ACTIONS(290), 24,
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
  [6606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 24,
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
  [6646] = 3,
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
  [6686] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [6742] = 3,
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
  [6782] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [6838] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(245), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6894] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(240), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [6950] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [7006] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [7062] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [7118] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [7174] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [7230] = 3,
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
    ACTIONS(266), 24,
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
  [7270] = 3,
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
    ACTIONS(270), 24,
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
  [7310] = 3,
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
    ACTIONS(308), 24,
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
  [7350] = 3,
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
    ACTIONS(282), 24,
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
  [7390] = 11,
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
    STATE(21), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [7446] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [7502] = 3,
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
    ACTIONS(254), 24,
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
  [7542] = 3,
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
  [7582] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(251), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [7638] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [7694] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [7750] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(196), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [7806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 24,
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
  [7846] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [7902] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [7958] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8014] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8070] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [8126] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8182] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8238] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8294] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8350] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8406] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8462] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8518] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [8574] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym__expression,
    ACTIONS(150), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(130), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(144), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(146), 12,
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
      sym_string,
      sym_string_template,
  [8630] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(205), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [8686] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8742] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8798] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [8854] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [8910] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [8966] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9022] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9078] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [9134] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9190] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9246] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9302] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9358] = 11,
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
    STATE(18), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [9414] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(200), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [9470] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [9526] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9582] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym__expression,
    ACTIONS(454), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(198), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(214), 12,
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
      sym_string,
      sym_string_template,
  [9638] = 11,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(246), 1,
      sym__expression,
    ACTIONS(184), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(164), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(178), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(72), 12,
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
      sym_string,
      sym_string_template,
  [9694] = 11,
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
    STATE(20), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [9750] = 11,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [9806] = 11,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [9862] = 11,
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
    STATE(24), 1,
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
    STATE(41), 12,
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
      sym_string,
      sym_string_template,
  [9918] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(456), 15,
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
    ACTIONS(458), 16,
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
  [9957] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(278), 15,
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
    ACTIONS(280), 16,
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
  [9996] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(460), 15,
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
    ACTIONS(462), 16,
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
  [10035] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(49), 15,
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
    ACTIONS(464), 16,
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
  [10074] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(468), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10130] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    ACTIONS(488), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(490), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10186] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(494), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10242] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
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
  [10294] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(188), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10348] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(188), 7,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LF,
    ACTIONS(498), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(256), 22,
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
  [10438] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(188), 14,
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
  [10486] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(188), 23,
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
  [10530] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(502), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10586] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_QMARK,
    ACTIONS(504), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(476), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(506), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(480), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10642] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(478), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(188), 17,
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
  [10688] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(218), 23,
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
  [10732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 26,
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
  [10767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 26,
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
  [10802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 26,
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
  [10837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 26,
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
  [10872] = 3,
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
  [10907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 26,
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
  [10942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 26,
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
  [10977] = 3,
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
  [11012] = 3,
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
  [11047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 26,
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
  [11082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 26,
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
  [11117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 26,
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
  [11152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 26,
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
  [11187] = 3,
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
  [11222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 26,
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
  [11257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 26,
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
  [11292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 26,
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
  [11327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 26,
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
  [11362] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    STATE(266), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11426] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
    STATE(329), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11490] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    STATE(333), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11551] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    STATE(327), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11612] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    STATE(334), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11673] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    STATE(337), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11734] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    STATE(328), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11795] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    STATE(320), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11856] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    STATE(339), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11917] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    STATE(319), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [11978] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12034] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12090] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(492), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12146] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(500), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12202] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(466), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12258] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12314] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    STATE(76), 1,
      sym_argument_list,
    STATE(282), 1,
      sym_block,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12372] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12427] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12482] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(546), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12537] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12592] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12647] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12702] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12757] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12812] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(558), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12867] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12922] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12977] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(564), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13032] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13087] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13142] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13197] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13252] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(512), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13307] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13362] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(576), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13417] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_COLON,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(432), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [13441] = 8,
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
    STATE(261), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13468] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_SQUOTE2,
    ACTIONS(602), 1,
      sym_string_template_char,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(608), 1,
      sym_format_sequence,
    STATE(265), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13495] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(610), 1,
      anon_sym_SQUOTE2,
    ACTIONS(612), 1,
      sym_string_template_char,
    ACTIONS(614), 1,
      sym_format_sequence,
    STATE(261), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13522] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(616), 1,
      anon_sym_SQUOTE2,
    ACTIONS(618), 1,
      sym_string_template_char,
    ACTIONS(620), 1,
      sym_format_sequence,
    STATE(263), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13549] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(612), 1,
      sym_string_template_char,
    ACTIONS(614), 1,
      sym_format_sequence,
    ACTIONS(622), 1,
      anon_sym_SQUOTE2,
    STATE(261), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13576] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(624), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13597] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(612), 1,
      sym_string_template_char,
    ACTIONS(614), 1,
      sym_format_sequence,
    ACTIONS(628), 1,
      anon_sym_SQUOTE2,
    STATE(261), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13624] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(630), 1,
      anon_sym_SQUOTE2,
    ACTIONS(632), 1,
      sym_string_template_char,
    ACTIONS(634), 1,
      sym_format_sequence,
    STATE(270), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13651] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(624), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [13672] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(612), 1,
      sym_string_template_char,
    ACTIONS(614), 1,
      sym_format_sequence,
    ACTIONS(638), 1,
      anon_sym_SQUOTE2,
    STATE(261), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13699] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(606), 1,
      sym_escape_sequence_invalid,
    ACTIONS(640), 1,
      anon_sym_SQUOTE2,
    ACTIONS(642), 1,
      sym_string_template_char,
    ACTIONS(644), 1,
      sym_format_sequence,
    STATE(267), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [13726] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      anon_sym_as,
    STATE(289), 1,
      sym_import_statement_as,
    ACTIONS(648), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_as,
    ACTIONS(652), 1,
      anon_sym_LF,
    STATE(305), 1,
      sym_import_statement_as,
    ACTIONS(654), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LF,
    STATE(288), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(658), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(124), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(458), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [13800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE2,
    ACTIONS(662), 1,
      sym__string_non_escaped_content,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(668), 1,
      sym_format_sequence,
    STATE(287), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__string_non_escaped_content,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(668), 1,
      sym_format_sequence,
    ACTIONS(670), 1,
      anon_sym_DQUOTE2,
    STATE(287), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [13861] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(672), 1,
      anon_sym_DQUOTE2,
    ACTIONS(674), 1,
      sym__string_non_escaped_content,
    ACTIONS(676), 1,
      sym_format_sequence,
    STATE(276), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LF,
    STATE(274), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(682), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13903] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(684), 1,
      anon_sym_DQUOTE2,
    ACTIONS(686), 1,
      sym__string_non_escaped_content,
    ACTIONS(688), 1,
      sym_format_sequence,
    STATE(284), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(694), 1,
      anon_sym_else,
    ACTIONS(692), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [13943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(696), 1,
      anon_sym_DQUOTE2,
    ACTIONS(698), 1,
      sym__string_non_escaped_content,
    ACTIONS(700), 1,
      sym_format_sequence,
    STATE(277), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__string_non_escaped_content,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(668), 1,
      sym_format_sequence,
    ACTIONS(702), 1,
      anon_sym_DQUOTE2,
    STATE(287), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [13989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(704), 1,
      anon_sym_DQUOTE2,
    ACTIONS(706), 1,
      sym__string_non_escaped_content,
    ACTIONS(708), 1,
      sym_format_sequence,
    STATE(286), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__string_non_escaped_content,
    ACTIONS(664), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(666), 1,
      sym_escape_sequence_invalid,
    ACTIONS(668), 1,
      sym_format_sequence,
    ACTIONS(710), 1,
      anon_sym_DQUOTE2,
    STATE(287), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14035] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_DQUOTE2,
    ACTIONS(714), 1,
      sym__string_non_escaped_content,
    ACTIONS(717), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(720), 1,
      sym_escape_sequence_invalid,
    ACTIONS(723), 1,
      sym_format_sequence,
    STATE(287), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(288), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(729), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(732), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(736), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14105] = 3,
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
  [14119] = 3,
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
  [14133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LF,
    ACTIONS(752), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14147] = 3,
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
  [14161] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COLON_EQ,
    ACTIONS(758), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14175] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COLON_EQ,
    ACTIONS(762), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(772), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [14217] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      anon_sym_case,
    ACTIONS(778), 1,
      anon_sym_default,
    STATE(308), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(782), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [14249] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_case,
    ACTIONS(778), 1,
      anon_sym_default,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(299), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14267] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_case,
    ACTIONS(778), 1,
      anon_sym_default,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(308), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(794), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LF,
    ACTIONS(798), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14327] = 3,
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
  [14341] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_COLON_EQ,
    ACTIONS(758), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14355] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    ACTIONS(808), 1,
      anon_sym_case,
    ACTIONS(811), 1,
      anon_sym_default,
    STATE(308), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14373] = 3,
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
  [14387] = 5,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(321), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [14405] = 3,
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
  [14419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(732), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LF,
    ACTIONS(832), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(782), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [14460] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    STATE(345), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [14475] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(345), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [14490] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(838), 1,
      anon_sym_if,
    STATE(306), 2,
      sym_block,
      sym_if_statement,
  [14504] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_identifier,
    STATE(345), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [14516] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14529] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14542] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_parameter_list_repeat1,
  [14555] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(848), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LF,
    ACTIONS(852), 2,
      anon_sym_SEMI,
      anon_sym_,
  [14575] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_import,
    ACTIONS(856), 1,
      anon_sym_DOT,
    STATE(324), 1,
      aux_sym_import_statement_from_repeat1,
  [14588] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(859), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14599] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_map_literal_values_repeat1,
  [14612] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14625] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14638] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14651] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      aux_sym_map_literal_values_repeat1,
  [14664] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_parameter_list_repeat1,
  [14677] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(878), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14686] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14699] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14712] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_import,
    ACTIONS(886), 1,
      anon_sym_DOT,
    STATE(338), 1,
      aux_sym_import_statement_from_repeat1,
  [14725] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_map_literal_values_repeat1,
  [14738] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14751] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_DOT,
    ACTIONS(895), 1,
      anon_sym_import,
    STATE(324), 1,
      aux_sym_import_statement_from_repeat1,
  [14764] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_expression_list_repeat1,
  [14777] = 4,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_parameter_list_repeat1,
  [14790] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_import,
      anon_sym_DOT,
  [14798] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(792), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14806] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14814] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(346), 1,
      sym_parameter_list,
  [14824] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(876), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14832] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_block,
  [14842] = 3,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(290), 1,
      sym_block,
  [14852] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14860] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [14867] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [14874] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym_identifier,
  [14881] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [14888] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_SEMI,
  [14895] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_EQ,
  [14902] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_COLON,
  [14909] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_identifier,
  [14916] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [14923] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_EQ,
  [14930] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
  [14937] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
  [14944] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
  [14951] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [14958] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_EQ,
  [14965] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_identifier,
  [14972] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_identifier,
  [14979] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_identifier,
  [14986] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_identifier,
  [14993] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_EQ,
  [15000] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [15007] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_LBRACE,
  [15014] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LBRACE,
  [15021] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_identifier,
  [15028] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_COLON,
  [15035] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
  [15042] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [15049] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LBRACE,
  [15056] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_EQ,
  [15063] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_EQ,
  [15070] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_import,
  [15077] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
  [15084] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [15091] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(961), 1,
      ts_builtin_sym_end,
  [15098] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_identifier,
  [15105] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACE,
  [15112] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_identifier,
  [15119] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_identifier,
  [15126] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_LBRACE,
  [15133] = 2,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 513,
  [SMALL_STATE(15)] = 589,
  [SMALL_STATE(16)] = 665,
  [SMALL_STATE(17)] = 741,
  [SMALL_STATE(18)] = 818,
  [SMALL_STATE(19)] = 874,
  [SMALL_STATE(20)] = 938,
  [SMALL_STATE(21)] = 992,
  [SMALL_STATE(22)] = 1046,
  [SMALL_STATE(23)] = 1104,
  [SMALL_STATE(24)] = 1166,
  [SMALL_STATE(25)] = 1228,
  [SMALL_STATE(26)] = 1292,
  [SMALL_STATE(27)] = 1368,
  [SMALL_STATE(28)] = 1413,
  [SMALL_STATE(29)] = 1458,
  [SMALL_STATE(30)] = 1503,
  [SMALL_STATE(31)] = 1548,
  [SMALL_STATE(32)] = 1593,
  [SMALL_STATE(33)] = 1638,
  [SMALL_STATE(34)] = 1683,
  [SMALL_STATE(35)] = 1728,
  [SMALL_STATE(36)] = 1775,
  [SMALL_STATE(37)] = 1820,
  [SMALL_STATE(38)] = 1865,
  [SMALL_STATE(39)] = 1910,
  [SMALL_STATE(40)] = 1987,
  [SMALL_STATE(41)] = 2032,
  [SMALL_STATE(42)] = 2077,
  [SMALL_STATE(43)] = 2122,
  [SMALL_STATE(44)] = 2167,
  [SMALL_STATE(45)] = 2212,
  [SMALL_STATE(46)] = 2257,
  [SMALL_STATE(47)] = 2302,
  [SMALL_STATE(48)] = 2368,
  [SMALL_STATE(49)] = 2434,
  [SMALL_STATE(50)] = 2500,
  [SMALL_STATE(51)] = 2566,
  [SMALL_STATE(52)] = 2647,
  [SMALL_STATE(53)] = 2710,
  [SMALL_STATE(54)] = 2767,
  [SMALL_STATE(55)] = 2818,
  [SMALL_STATE(56)] = 2873,
  [SMALL_STATE(57)] = 2938,
  [SMALL_STATE(58)] = 3001,
  [SMALL_STATE(59)] = 3052,
  [SMALL_STATE(60)] = 3094,
  [SMALL_STATE(61)] = 3136,
  [SMALL_STATE(62)] = 3178,
  [SMALL_STATE(63)] = 3240,
  [SMALL_STATE(64)] = 3282,
  [SMALL_STATE(65)] = 3324,
  [SMALL_STATE(66)] = 3366,
  [SMALL_STATE(67)] = 3408,
  [SMALL_STATE(68)] = 3450,
  [SMALL_STATE(69)] = 3492,
  [SMALL_STATE(70)] = 3534,
  [SMALL_STATE(71)] = 3576,
  [SMALL_STATE(72)] = 3638,
  [SMALL_STATE(73)] = 3680,
  [SMALL_STATE(74)] = 3722,
  [SMALL_STATE(75)] = 3764,
  [SMALL_STATE(76)] = 3806,
  [SMALL_STATE(77)] = 3848,
  [SMALL_STATE(78)] = 3890,
  [SMALL_STATE(79)] = 3952,
  [SMALL_STATE(80)] = 3994,
  [SMALL_STATE(81)] = 4056,
  [SMALL_STATE(82)] = 4115,
  [SMALL_STATE(83)] = 4174,
  [SMALL_STATE(84)] = 4233,
  [SMALL_STATE(85)] = 4292,
  [SMALL_STATE(86)] = 4351,
  [SMALL_STATE(87)] = 4410,
  [SMALL_STATE(88)] = 4469,
  [SMALL_STATE(89)] = 4528,
  [SMALL_STATE(90)] = 4587,
  [SMALL_STATE(91)] = 4646,
  [SMALL_STATE(92)] = 4695,
  [SMALL_STATE(93)] = 4756,
  [SMALL_STATE(94)] = 4815,
  [SMALL_STATE(95)] = 4874,
  [SMALL_STATE(96)] = 4933,
  [SMALL_STATE(97)] = 4992,
  [SMALL_STATE(98)] = 5051,
  [SMALL_STATE(99)] = 5126,
  [SMALL_STATE(100)] = 5185,
  [SMALL_STATE(101)] = 5244,
  [SMALL_STATE(102)] = 5303,
  [SMALL_STATE(103)] = 5366,
  [SMALL_STATE(104)] = 5425,
  [SMALL_STATE(105)] = 5486,
  [SMALL_STATE(106)] = 5545,
  [SMALL_STATE(107)] = 5604,
  [SMALL_STATE(108)] = 5663,
  [SMALL_STATE(109)] = 5718,
  [SMALL_STATE(110)] = 5767,
  [SMALL_STATE(111)] = 5820,
  [SMALL_STATE(112)] = 5879,
  [SMALL_STATE(113)] = 5944,
  [SMALL_STATE(114)] = 6003,
  [SMALL_STATE(115)] = 6062,
  [SMALL_STATE(116)] = 6102,
  [SMALL_STATE(117)] = 6158,
  [SMALL_STATE(118)] = 6198,
  [SMALL_STATE(119)] = 6238,
  [SMALL_STATE(120)] = 6278,
  [SMALL_STATE(121)] = 6334,
  [SMALL_STATE(122)] = 6390,
  [SMALL_STATE(123)] = 6430,
  [SMALL_STATE(124)] = 6470,
  [SMALL_STATE(125)] = 6510,
  [SMALL_STATE(126)] = 6566,
  [SMALL_STATE(127)] = 6606,
  [SMALL_STATE(128)] = 6646,
  [SMALL_STATE(129)] = 6686,
  [SMALL_STATE(130)] = 6742,
  [SMALL_STATE(131)] = 6782,
  [SMALL_STATE(132)] = 6838,
  [SMALL_STATE(133)] = 6894,
  [SMALL_STATE(134)] = 6950,
  [SMALL_STATE(135)] = 7006,
  [SMALL_STATE(136)] = 7062,
  [SMALL_STATE(137)] = 7118,
  [SMALL_STATE(138)] = 7174,
  [SMALL_STATE(139)] = 7230,
  [SMALL_STATE(140)] = 7270,
  [SMALL_STATE(141)] = 7310,
  [SMALL_STATE(142)] = 7350,
  [SMALL_STATE(143)] = 7390,
  [SMALL_STATE(144)] = 7446,
  [SMALL_STATE(145)] = 7502,
  [SMALL_STATE(146)] = 7542,
  [SMALL_STATE(147)] = 7582,
  [SMALL_STATE(148)] = 7638,
  [SMALL_STATE(149)] = 7694,
  [SMALL_STATE(150)] = 7750,
  [SMALL_STATE(151)] = 7806,
  [SMALL_STATE(152)] = 7846,
  [SMALL_STATE(153)] = 7902,
  [SMALL_STATE(154)] = 7958,
  [SMALL_STATE(155)] = 8014,
  [SMALL_STATE(156)] = 8070,
  [SMALL_STATE(157)] = 8126,
  [SMALL_STATE(158)] = 8182,
  [SMALL_STATE(159)] = 8238,
  [SMALL_STATE(160)] = 8294,
  [SMALL_STATE(161)] = 8350,
  [SMALL_STATE(162)] = 8406,
  [SMALL_STATE(163)] = 8462,
  [SMALL_STATE(164)] = 8518,
  [SMALL_STATE(165)] = 8574,
  [SMALL_STATE(166)] = 8630,
  [SMALL_STATE(167)] = 8686,
  [SMALL_STATE(168)] = 8742,
  [SMALL_STATE(169)] = 8798,
  [SMALL_STATE(170)] = 8854,
  [SMALL_STATE(171)] = 8910,
  [SMALL_STATE(172)] = 8966,
  [SMALL_STATE(173)] = 9022,
  [SMALL_STATE(174)] = 9078,
  [SMALL_STATE(175)] = 9134,
  [SMALL_STATE(176)] = 9190,
  [SMALL_STATE(177)] = 9246,
  [SMALL_STATE(178)] = 9302,
  [SMALL_STATE(179)] = 9358,
  [SMALL_STATE(180)] = 9414,
  [SMALL_STATE(181)] = 9470,
  [SMALL_STATE(182)] = 9526,
  [SMALL_STATE(183)] = 9582,
  [SMALL_STATE(184)] = 9638,
  [SMALL_STATE(185)] = 9694,
  [SMALL_STATE(186)] = 9750,
  [SMALL_STATE(187)] = 9806,
  [SMALL_STATE(188)] = 9862,
  [SMALL_STATE(189)] = 9918,
  [SMALL_STATE(190)] = 9957,
  [SMALL_STATE(191)] = 9996,
  [SMALL_STATE(192)] = 10035,
  [SMALL_STATE(193)] = 10074,
  [SMALL_STATE(194)] = 10130,
  [SMALL_STATE(195)] = 10186,
  [SMALL_STATE(196)] = 10242,
  [SMALL_STATE(197)] = 10294,
  [SMALL_STATE(198)] = 10348,
  [SMALL_STATE(199)] = 10400,
  [SMALL_STATE(200)] = 10438,
  [SMALL_STATE(201)] = 10486,
  [SMALL_STATE(202)] = 10530,
  [SMALL_STATE(203)] = 10586,
  [SMALL_STATE(204)] = 10642,
  [SMALL_STATE(205)] = 10688,
  [SMALL_STATE(206)] = 10732,
  [SMALL_STATE(207)] = 10767,
  [SMALL_STATE(208)] = 10802,
  [SMALL_STATE(209)] = 10837,
  [SMALL_STATE(210)] = 10872,
  [SMALL_STATE(211)] = 10907,
  [SMALL_STATE(212)] = 10942,
  [SMALL_STATE(213)] = 10977,
  [SMALL_STATE(214)] = 11012,
  [SMALL_STATE(215)] = 11047,
  [SMALL_STATE(216)] = 11082,
  [SMALL_STATE(217)] = 11117,
  [SMALL_STATE(218)] = 11152,
  [SMALL_STATE(219)] = 11187,
  [SMALL_STATE(220)] = 11222,
  [SMALL_STATE(221)] = 11257,
  [SMALL_STATE(222)] = 11292,
  [SMALL_STATE(223)] = 11327,
  [SMALL_STATE(224)] = 11362,
  [SMALL_STATE(225)] = 11426,
  [SMALL_STATE(226)] = 11490,
  [SMALL_STATE(227)] = 11551,
  [SMALL_STATE(228)] = 11612,
  [SMALL_STATE(229)] = 11673,
  [SMALL_STATE(230)] = 11734,
  [SMALL_STATE(231)] = 11795,
  [SMALL_STATE(232)] = 11856,
  [SMALL_STATE(233)] = 11917,
  [SMALL_STATE(234)] = 11978,
  [SMALL_STATE(235)] = 12034,
  [SMALL_STATE(236)] = 12090,
  [SMALL_STATE(237)] = 12146,
  [SMALL_STATE(238)] = 12202,
  [SMALL_STATE(239)] = 12258,
  [SMALL_STATE(240)] = 12314,
  [SMALL_STATE(241)] = 12372,
  [SMALL_STATE(242)] = 12427,
  [SMALL_STATE(243)] = 12482,
  [SMALL_STATE(244)] = 12537,
  [SMALL_STATE(245)] = 12592,
  [SMALL_STATE(246)] = 12647,
  [SMALL_STATE(247)] = 12702,
  [SMALL_STATE(248)] = 12757,
  [SMALL_STATE(249)] = 12812,
  [SMALL_STATE(250)] = 12867,
  [SMALL_STATE(251)] = 12922,
  [SMALL_STATE(252)] = 12977,
  [SMALL_STATE(253)] = 13032,
  [SMALL_STATE(254)] = 13087,
  [SMALL_STATE(255)] = 13142,
  [SMALL_STATE(256)] = 13197,
  [SMALL_STATE(257)] = 13252,
  [SMALL_STATE(258)] = 13307,
  [SMALL_STATE(259)] = 13362,
  [SMALL_STATE(260)] = 13417,
  [SMALL_STATE(261)] = 13441,
  [SMALL_STATE(262)] = 13468,
  [SMALL_STATE(263)] = 13495,
  [SMALL_STATE(264)] = 13522,
  [SMALL_STATE(265)] = 13549,
  [SMALL_STATE(266)] = 13576,
  [SMALL_STATE(267)] = 13597,
  [SMALL_STATE(268)] = 13624,
  [SMALL_STATE(269)] = 13651,
  [SMALL_STATE(270)] = 13672,
  [SMALL_STATE(271)] = 13699,
  [SMALL_STATE(272)] = 13726,
  [SMALL_STATE(273)] = 13746,
  [SMALL_STATE(274)] = 13766,
  [SMALL_STATE(275)] = 13785,
  [SMALL_STATE(276)] = 13800,
  [SMALL_STATE(277)] = 13823,
  [SMALL_STATE(278)] = 13846,
  [SMALL_STATE(279)] = 13861,
  [SMALL_STATE(280)] = 13884,
  [SMALL_STATE(281)] = 13903,
  [SMALL_STATE(282)] = 13926,
  [SMALL_STATE(283)] = 13943,
  [SMALL_STATE(284)] = 13966,
  [SMALL_STATE(285)] = 13989,
  [SMALL_STATE(286)] = 14012,
  [SMALL_STATE(287)] = 14035,
  [SMALL_STATE(288)] = 14058,
  [SMALL_STATE(289)] = 14077,
  [SMALL_STATE(290)] = 14091,
  [SMALL_STATE(291)] = 14105,
  [SMALL_STATE(292)] = 14119,
  [SMALL_STATE(293)] = 14133,
  [SMALL_STATE(294)] = 14147,
  [SMALL_STATE(295)] = 14161,
  [SMALL_STATE(296)] = 14175,
  [SMALL_STATE(297)] = 14189,
  [SMALL_STATE(298)] = 14203,
  [SMALL_STATE(299)] = 14217,
  [SMALL_STATE(300)] = 14235,
  [SMALL_STATE(301)] = 14249,
  [SMALL_STATE(302)] = 14267,
  [SMALL_STATE(303)] = 14285,
  [SMALL_STATE(304)] = 14299,
  [SMALL_STATE(305)] = 14313,
  [SMALL_STATE(306)] = 14327,
  [SMALL_STATE(307)] = 14341,
  [SMALL_STATE(308)] = 14355,
  [SMALL_STATE(309)] = 14373,
  [SMALL_STATE(310)] = 14387,
  [SMALL_STATE(311)] = 14405,
  [SMALL_STATE(312)] = 14419,
  [SMALL_STATE(313)] = 14433,
  [SMALL_STATE(314)] = 14447,
  [SMALL_STATE(315)] = 14460,
  [SMALL_STATE(316)] = 14475,
  [SMALL_STATE(317)] = 14490,
  [SMALL_STATE(318)] = 14504,
  [SMALL_STATE(319)] = 14516,
  [SMALL_STATE(320)] = 14529,
  [SMALL_STATE(321)] = 14542,
  [SMALL_STATE(322)] = 14555,
  [SMALL_STATE(323)] = 14564,
  [SMALL_STATE(324)] = 14575,
  [SMALL_STATE(325)] = 14588,
  [SMALL_STATE(326)] = 14599,
  [SMALL_STATE(327)] = 14612,
  [SMALL_STATE(328)] = 14625,
  [SMALL_STATE(329)] = 14638,
  [SMALL_STATE(330)] = 14651,
  [SMALL_STATE(331)] = 14664,
  [SMALL_STATE(332)] = 14677,
  [SMALL_STATE(333)] = 14686,
  [SMALL_STATE(334)] = 14699,
  [SMALL_STATE(335)] = 14712,
  [SMALL_STATE(336)] = 14725,
  [SMALL_STATE(337)] = 14738,
  [SMALL_STATE(338)] = 14751,
  [SMALL_STATE(339)] = 14764,
  [SMALL_STATE(340)] = 14777,
  [SMALL_STATE(341)] = 14790,
  [SMALL_STATE(342)] = 14798,
  [SMALL_STATE(343)] = 14806,
  [SMALL_STATE(344)] = 14814,
  [SMALL_STATE(345)] = 14824,
  [SMALL_STATE(346)] = 14832,
  [SMALL_STATE(347)] = 14842,
  [SMALL_STATE(348)] = 14852,
  [SMALL_STATE(349)] = 14860,
  [SMALL_STATE(350)] = 14867,
  [SMALL_STATE(351)] = 14874,
  [SMALL_STATE(352)] = 14881,
  [SMALL_STATE(353)] = 14888,
  [SMALL_STATE(354)] = 14895,
  [SMALL_STATE(355)] = 14902,
  [SMALL_STATE(356)] = 14909,
  [SMALL_STATE(357)] = 14916,
  [SMALL_STATE(358)] = 14923,
  [SMALL_STATE(359)] = 14930,
  [SMALL_STATE(360)] = 14937,
  [SMALL_STATE(361)] = 14944,
  [SMALL_STATE(362)] = 14951,
  [SMALL_STATE(363)] = 14958,
  [SMALL_STATE(364)] = 14965,
  [SMALL_STATE(365)] = 14972,
  [SMALL_STATE(366)] = 14979,
  [SMALL_STATE(367)] = 14986,
  [SMALL_STATE(368)] = 14993,
  [SMALL_STATE(369)] = 15000,
  [SMALL_STATE(370)] = 15007,
  [SMALL_STATE(371)] = 15014,
  [SMALL_STATE(372)] = 15021,
  [SMALL_STATE(373)] = 15028,
  [SMALL_STATE(374)] = 15035,
  [SMALL_STATE(375)] = 15042,
  [SMALL_STATE(376)] = 15049,
  [SMALL_STATE(377)] = 15056,
  [SMALL_STATE(378)] = 15063,
  [SMALL_STATE(379)] = 15070,
  [SMALL_STATE(380)] = 15077,
  [SMALL_STATE(381)] = 15084,
  [SMALL_STATE(382)] = 15091,
  [SMALL_STATE(383)] = 15098,
  [SMALL_STATE(384)] = 15105,
  [SMALL_STATE(385)] = 15112,
  [SMALL_STATE(386)] = 15119,
  [SMALL_STATE(387)] = 15126,
  [SMALL_STATE(388)] = 15133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(372),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 19),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 19),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 17),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 25),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 18),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 27),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, .production_id = 27),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 21),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 21),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 9),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 13),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 13),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 11),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 15),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 15),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 15),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 15),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 28),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_pair, 3, .production_id = 14),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 29),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 26),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(172),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(168),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(261),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(300),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(300),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(261),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2, .production_id = 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 8),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, .production_id = 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(287),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(314),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(314),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(287),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 5),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, .production_id = 5),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 7),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 7),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_as, 2, .production_id = 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement_as, 2, .production_id = 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 19),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 19),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 2),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_statement, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 20),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 20),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 22),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 22),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(107),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(355),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 19),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 19),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec_statement, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_from_repeat1, 2),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_from_repeat1, 2), SHIFT_REPEAT(356),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 12),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 1),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(318),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 19),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_from, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2), SHIFT_REPEAT(85),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_from, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 30),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 16),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [961] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 24),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 23),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
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
