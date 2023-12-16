#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 1
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 24

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
  anon_sym_STAR_EQ = 16,
  anon_sym_DASH_EQ = 17,
  anon_sym_PLUS_EQ = 18,
  anon_sym_SLASH_EQ = 19,
  anon_sym_return = 20,
  anon_sym_if = 21,
  anon_sym_else = 22,
  anon_sym_for = 23,
  anon_sym_range = 24,
  anon_sym_switch = 25,
  anon_sym_case = 26,
  anon_sym_COLON = 27,
  anon_sym_default = 28,
  anon_sym_DOT = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_DQUOTE = 32,
  anon_sym_DQUOTE2 = 33,
  sym__string_non_escaped_content = 34,
  anon_sym_SQUOTE = 35,
  anon_sym_SQUOTE2 = 36,
  sym_string_template_char = 37,
  aux_sym_escape_sequence_token1 = 38,
  sym_escape_sequence_invalid = 39,
  sym_format_sequence = 40,
  sym_string_backtick = 41,
  sym_int_literal = 42,
  sym_float_literal = 43,
  sym_nil = 44,
  sym_true = 45,
  sym_false = 46,
  sym_comment = 47,
  sym_source_file = 48,
  sym__definition = 49,
  sym_function_declaration = 50,
  sym_parameter_list = 51,
  sym__parameter_declaration = 52,
  sym_parameter_declaration = 53,
  sym_parameter_declaration_default = 54,
  sym_block = 55,
  sym__statement_list = 56,
  sym__statement = 57,
  sym__declaration = 58,
  sym_const_declaration = 59,
  sym_var_declaration = 60,
  sym_short_var_declaration = 61,
  sym_assignment_statement = 62,
  sym_return_statement = 63,
  sym_if_statement = 64,
  sym_for_statement = 65,
  sym_for_clause = 66,
  sym_range_clause = 67,
  sym_switch_statement = 68,
  sym_switch_case = 69,
  sym_default_case = 70,
  sym_expression_statement = 71,
  sym__expression = 72,
  sym_selector_expression = 73,
  sym_index_expression = 74,
  sym_expression_list = 75,
  sym_parenthesized_expression = 76,
  sym_call_expression = 77,
  sym_argument_list = 78,
  sym_string = 79,
  sym_string_template = 80,
  sym_escape_sequence = 81,
  sym_string_template_argument = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_parameter_list_repeat1 = 84,
  aux_sym__statement_list_repeat1 = 85,
  aux_sym_switch_statement_repeat1 = 86,
  aux_sym_expression_list_repeat1 = 87,
  aux_sym_string_repeat1 = 88,
  aux_sym_string_template_repeat1 = 89,
  alias_sym_field_identifier = 90,
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
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 3},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 4},
  [23] = {.index = 43, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_condition, 1},
    {field_consequence, 2},
  [5] =
    {field_body, 2},
  [6] =
    {field_field, 2},
    {field_operand, 0},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_left, 0},
    {field_right, 2},
  [13] =
    {field_name, 0},
  [14] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [17] =
    {field_name, 1},
    {field_value, 3},
  [19] =
    {field_update, 2},
  [20] =
    {field_condition, 1},
  [21] =
    {field_initializer, 0},
  [22] =
    {field_value, 1},
  [23] =
    {field_index, 2},
    {field_operand, 0},
  [25] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [28] =
    {field_condition, 1},
    {field_update, 3},
  [30] =
    {field_initializer, 0},
    {field_update, 3},
  [32] =
    {field_condition, 2},
    {field_initializer, 0},
  [34] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [37] =
    {field_default, 2},
    {field_name, 0},
  [39] =
    {field_left, 0},
    {field_left, 1},
    {field_left, 2},
    {field_right, 4},
  [43] =
    {field_condition, 2},
    {field_initializer, 0},
    {field_update, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
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
  [4] = 3,
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
  [19] = 18,
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
  [36] = 23,
  [37] = 25,
  [38] = 21,
  [39] = 39,
  [40] = 40,
  [41] = 24,
  [42] = 39,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 43,
  [53] = 53,
  [54] = 54,
  [55] = 47,
  [56] = 56,
  [57] = 57,
  [58] = 50,
  [59] = 44,
  [60] = 51,
  [61] = 56,
  [62] = 57,
  [63] = 48,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 67,
  [74] = 68,
  [75] = 70,
  [76] = 65,
  [77] = 77,
  [78] = 66,
  [79] = 71,
  [80] = 69,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 77,
  [85] = 64,
  [86] = 82,
  [87] = 72,
  [88] = 81,
  [89] = 83,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 22,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 100,
  [105] = 103,
  [106] = 106,
  [107] = 107,
  [108] = 26,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 27,
  [116] = 112,
  [117] = 117,
  [118] = 111,
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
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 126,
  [134] = 134,
  [135] = 135,
  [136] = 125,
  [137] = 131,
  [138] = 99,
  [139] = 98,
  [140] = 95,
  [141] = 97,
  [142] = 142,
  [143] = 130,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 124,
  [150] = 94,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 155,
  [161] = 148,
  [162] = 153,
  [163] = 163,
  [164] = 164,
  [165] = 156,
  [166] = 166,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 27,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 26,
  [176] = 117,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 170,
  [181] = 145,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 134,
  [186] = 186,
  [187] = 127,
  [188] = 122,
  [189] = 128,
  [190] = 151,
  [191] = 120,
  [192] = 186,
  [193] = 121,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 194,
  [207] = 207,
  [208] = 200,
  [209] = 209,
  [210] = 210,
  [211] = 203,
  [212] = 212,
  [213] = 201,
  [214] = 204,
  [215] = 215,
  [216] = 216,
  [217] = 201,
  [218] = 218,
  [219] = 219,
  [220] = 220,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(60);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(56);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '[') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(65);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(82);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 28:
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_template_char);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string_template_char);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_format_sequence);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_string_backtick);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
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
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 31},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [sym_escape_sequence_invalid] = ACTIONS(1),
    [sym_format_sequence] = ACTIONS(1),
    [sym_string_backtick] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(216),
    [sym__definition] = STATE(5),
    [sym_function_declaration] = STATE(5),
    [sym__statement] = STATE(179),
    [sym__declaration] = STATE(122),
    [sym_const_declaration] = STATE(122),
    [sym_var_declaration] = STATE(122),
    [sym_short_var_declaration] = STATE(122),
    [sym_assignment_statement] = STATE(122),
    [sym_return_statement] = STATE(122),
    [sym_if_statement] = STATE(122),
    [sym_for_statement] = STATE(122),
    [sym_switch_statement] = STATE(122),
    [sym_expression_statement] = STATE(122),
    [sym__expression] = STATE(22),
    [sym_selector_expression] = STATE(67),
    [sym_index_expression] = STATE(67),
    [sym_expression_list] = STATE(123),
    [sym_parenthesized_expression] = STATE(67),
    [sym_call_expression] = STATE(67),
    [sym_string] = STATE(67),
    [sym_string_template] = STATE(67),
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
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_string_backtick] = ACTIONS(29),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(29),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_func,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_const,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(48), 1,
      anon_sym_return,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym__expression,
    STATE(123), 1,
      sym_expression_list,
    STATE(179), 1,
      sym__statement,
    ACTIONS(66), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(2), 3,
      sym__definition,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(33), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [82] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_const,
    ACTIONS(79), 1,
      anon_sym_var,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      anon_sym_switch,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym__expression,
    STATE(120), 1,
      sym_block,
    STATE(142), 1,
      sym_expression_list,
    STATE(220), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(186), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(188), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [166] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_const,
    ACTIONS(79), 1,
      anon_sym_var,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      anon_sym_switch,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym__expression,
    STATE(142), 1,
      sym_expression_list,
    STATE(191), 1,
      sym_block,
    STATE(220), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(192), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(188), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [250] = 20,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym__expression,
    STATE(123), 1,
      sym_expression_list,
    STATE(179), 1,
      sym__statement,
    ACTIONS(29), 2,
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
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [332] = 20,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(113), 1,
      sym__statement,
    STATE(123), 1,
      sym_expression_list,
    STATE(177), 1,
      sym__statement_list,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(101), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [413] = 20,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(113), 1,
      sym__statement,
    STATE(123), 1,
      sym_expression_list,
    STATE(172), 1,
      sym__statement_list,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(105), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [494] = 19,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(123), 1,
      sym_expression_list,
    STATE(129), 1,
      sym__statement,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(109), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [572] = 19,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(123), 1,
      sym_expression_list,
    STATE(129), 1,
      sym__statement,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(113), 2,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [650] = 19,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(113), 1,
      sym__statement,
    STATE(123), 1,
      sym_expression_list,
    STATE(201), 1,
      sym__statement_list,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [727] = 19,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(113), 1,
      sym__statement,
    STATE(123), 1,
      sym_expression_list,
    STATE(213), 1,
      sym__statement_list,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [804] = 19,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__expression,
    STATE(113), 1,
      sym__statement,
    STATE(123), 1,
      sym_expression_list,
    STATE(217), 1,
      sym__statement_list,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [881] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      anon_sym_switch,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_const,
    ACTIONS(125), 1,
      anon_sym_var,
    STATE(93), 1,
      sym__expression,
    STATE(132), 1,
      sym_expression_list,
    STATE(198), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(188), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [955] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      anon_sym_switch,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_const,
    ACTIONS(125), 1,
      anon_sym_var,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__expression,
    STATE(132), 1,
      sym_expression_list,
    STATE(196), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(188), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1029] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      anon_sym_switch,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_const,
    ACTIONS(125), 1,
      anon_sym_var,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__expression,
    STATE(132), 1,
      sym_expression_list,
    STATE(202), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(188), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1103] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      anon_sym_switch,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_const,
    ACTIONS(125), 1,
      anon_sym_var,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__expression,
    STATE(132), 1,
      sym_expression_list,
    STATE(209), 1,
      sym__statement,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(188), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1177] = 17,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym__expression,
    STATE(123), 1,
      sym_expression_list,
    STATE(129), 1,
      sym__statement,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
    STATE(122), 10,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_expression_statement,
  [1248] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1289] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1330] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1368] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(211), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1406] = 10,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_comment,
    STATE(84), 1,
      sym_argument_list,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(145), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(151), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1446] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1484] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1522] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(194), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(165), 12,
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
  [1586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(169), 12,
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
  [1612] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1650] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(205), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1688] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(199), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(173), 12,
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
  [1752] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_range,
    STATE(138), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1790] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(195), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1828] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_range,
    STATE(139), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1866] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_range,
    STATE(140), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1942] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(206), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [1980] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__expression,
    STATE(203), 1,
      sym_expression_list,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2018] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(185), 12,
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
  [2082] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2120] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2158] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2193] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(150), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2228] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2263] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(135), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2298] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2333] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2403] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(97), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2438] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2473] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2508] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2578] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(156), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2613] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2648] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2683] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2718] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2788] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2823] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2858] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(155), 1,
      sym__expression,
    ACTIONS(93), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(69), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(73), 6,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_string,
      sym_string_template,
  [2893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(191), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [2917] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [2941] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [2965] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(205), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [2989] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3013] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3037] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3061] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(221), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3085] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(203), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(207), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COLON,
    ACTIONS(215), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(195), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(227), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(199), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(219), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(211), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(231), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3325] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(237), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3349] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3373] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(229), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3397] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(235), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(223), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3469] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_default,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [3493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(239), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [3517] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
    STATE(128), 1,
      sym_block,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3556] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
    STATE(189), 1,
      sym_block,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_COLON,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(253), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3624] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3657] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_argument_list,
    ACTIONS(259), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3683] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_argument_list,
    ACTIONS(263), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(253), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3731] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_argument_list,
    ACTIONS(270), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3757] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_argument_list,
    ACTIONS(274), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3783] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_argument_list,
    ACTIONS(278), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3809] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_SQUOTE2,
    ACTIONS(284), 1,
      sym_string_template_char,
    ACTIONS(286), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(288), 1,
      sym_escape_sequence_invalid,
    ACTIONS(290), 1,
      sym_format_sequence,
    STATE(103), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_COLON,
    STATE(96), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(292), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3857] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_SQUOTE2,
    ACTIONS(301), 1,
      sym_string_template_char,
    ACTIONS(304), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(307), 1,
      sym_escape_sequence_invalid,
    ACTIONS(310), 1,
      sym_format_sequence,
    STATE(102), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3884] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(288), 1,
      sym_escape_sequence_invalid,
    ACTIONS(313), 1,
      anon_sym_SQUOTE2,
    ACTIONS(315), 1,
      sym_string_template_char,
    ACTIONS(317), 1,
      sym_format_sequence,
    STATE(102), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3911] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(288), 1,
      sym_escape_sequence_invalid,
    ACTIONS(319), 1,
      anon_sym_SQUOTE2,
    ACTIONS(321), 1,
      sym_string_template_char,
    ACTIONS(323), 1,
      sym_format_sequence,
    STATE(105), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3938] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(288), 1,
      sym_escape_sequence_invalid,
    ACTIONS(315), 1,
      sym_string_template_char,
    ACTIONS(317), 1,
      sym_format_sequence,
    ACTIONS(325), 1,
      anon_sym_SQUOTE2,
    STATE(102), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(247), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_argument_list,
    STATE(170), 1,
      aux_sym_expression_list_repeat1,
  [4016] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [4031] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LF,
    STATE(119), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4050] = 7,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_DQUOTE2,
    ACTIONS(337), 1,
      sym__string_non_escaped_content,
    ACTIONS(340), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(343), 1,
      sym_escape_sequence_invalid,
    ACTIONS(346), 1,
      sym_format_sequence,
    STATE(110), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4073] = 7,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DQUOTE2,
    ACTIONS(351), 1,
      sym__string_non_escaped_content,
    ACTIONS(353), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(355), 1,
      sym_escape_sequence_invalid,
    ACTIONS(357), 1,
      sym_format_sequence,
    STATE(112), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4096] = 7,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(355), 1,
      sym_escape_sequence_invalid,
    ACTIONS(359), 1,
      anon_sym_DQUOTE2,
    ACTIONS(361), 1,
      sym__string_non_escaped_content,
    ACTIONS(363), 1,
      sym_format_sequence,
    STATE(110), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4119] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LF,
    STATE(109), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(367), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(369), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_argument_list,
    STATE(180), 1,
      aux_sym_expression_list_repeat1,
  [4163] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 6,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_case,
      anon_sym_default,
  [4178] = 7,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(355), 1,
      sym_escape_sequence_invalid,
    ACTIONS(361), 1,
      sym__string_non_escaped_content,
    ACTIONS(363), 1,
      sym_format_sequence,
    ACTIONS(375), 1,
      anon_sym_DQUOTE2,
    STATE(110), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4201] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      anon_sym_else,
    ACTIONS(379), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4218] = 7,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(355), 1,
      sym_escape_sequence_invalid,
    ACTIONS(383), 1,
      anon_sym_DQUOTE2,
    ACTIONS(385), 1,
      sym__string_non_escaped_content,
    ACTIONS(387), 1,
      sym_format_sequence,
    STATE(116), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4241] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LF,
    STATE(119), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(395), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4260] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4274] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(403), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4288] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(407), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COLON_EQ,
    ACTIONS(409), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [4316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    STATE(146), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(124), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(146), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4370] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4384] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4398] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(395), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(126), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    STATE(176), 1,
      sym_block,
  [4452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COLON_EQ,
    ACTIONS(435), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [4466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(146), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4484] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(149), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4536] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    STATE(117), 1,
      sym_block,
  [4558] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(276), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(272), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(261), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(268), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COLON_EQ,
    ACTIONS(435), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [4652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(133), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(173), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [4688] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_case,
    ACTIONS(468), 1,
      anon_sym_default,
    STATE(146), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4720] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(473), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [4734] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(477), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [4748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(417), 1,
      anon_sym_default,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(146), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [4766] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_argument_list,
    ACTIONS(257), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4786] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(483), 5,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_argument_list,
  [4819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_argument_list,
  [4838] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_argument_list,
  [4857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_argument_list,
  [4876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_argument_list,
  [4895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_argument_list,
  [4914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(184), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [4929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_argument_list,
  [4948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_argument_list,
  [4967] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(475), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(477), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [4980] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_argument_list,
  [4999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_argument_list,
  [5018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(184), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [5033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_argument_list,
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    STATE(184), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [5064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      anon_sym_if,
    STATE(187), 2,
      sym_block,
      sym_if_statement,
  [5078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      anon_sym_if,
    STATE(127), 2,
      sym_block,
      sym_if_statement,
  [5092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_parameter_list_repeat1,
  [5105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_expression_list_repeat1,
  [5118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_else,
  [5127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_parameter_list_repeat1,
  [5149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_parameter_list_repeat1,
  [5162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_else,
  [5171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_else,
    ACTIONS(377), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_EQ,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5202] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 2,
      anon_sym_SEMI,
      anon_sym_,
  [5213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_expression_list_repeat1,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [5244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_parameter_list,
  [5254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
  [5280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_block,
  [5330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_EQ,
  [5345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [5352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [5359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_identifier,
  [5366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [5373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_EQ,
  [5380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_identifier,
  [5387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [5394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
  [5401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_EQ,
  [5408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [5415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [5422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_EQ,
  [5429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [5436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_identifier,
  [5443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
  [5450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [5457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_EQ,
  [5464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [5471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [5478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
  [5485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [5492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
  [5499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [5506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
  [5513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [5520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 250,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 413,
  [SMALL_STATE(8)] = 494,
  [SMALL_STATE(9)] = 572,
  [SMALL_STATE(10)] = 650,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 804,
  [SMALL_STATE(13)] = 881,
  [SMALL_STATE(14)] = 955,
  [SMALL_STATE(15)] = 1029,
  [SMALL_STATE(16)] = 1103,
  [SMALL_STATE(17)] = 1177,
  [SMALL_STATE(18)] = 1248,
  [SMALL_STATE(19)] = 1289,
  [SMALL_STATE(20)] = 1330,
  [SMALL_STATE(21)] = 1368,
  [SMALL_STATE(22)] = 1406,
  [SMALL_STATE(23)] = 1446,
  [SMALL_STATE(24)] = 1484,
  [SMALL_STATE(25)] = 1522,
  [SMALL_STATE(26)] = 1560,
  [SMALL_STATE(27)] = 1586,
  [SMALL_STATE(28)] = 1612,
  [SMALL_STATE(29)] = 1650,
  [SMALL_STATE(30)] = 1688,
  [SMALL_STATE(31)] = 1726,
  [SMALL_STATE(32)] = 1752,
  [SMALL_STATE(33)] = 1790,
  [SMALL_STATE(34)] = 1828,
  [SMALL_STATE(35)] = 1866,
  [SMALL_STATE(36)] = 1904,
  [SMALL_STATE(37)] = 1942,
  [SMALL_STATE(38)] = 1980,
  [SMALL_STATE(39)] = 2018,
  [SMALL_STATE(40)] = 2056,
  [SMALL_STATE(41)] = 2082,
  [SMALL_STATE(42)] = 2120,
  [SMALL_STATE(43)] = 2158,
  [SMALL_STATE(44)] = 2193,
  [SMALL_STATE(45)] = 2228,
  [SMALL_STATE(46)] = 2263,
  [SMALL_STATE(47)] = 2298,
  [SMALL_STATE(48)] = 2333,
  [SMALL_STATE(49)] = 2368,
  [SMALL_STATE(50)] = 2403,
  [SMALL_STATE(51)] = 2438,
  [SMALL_STATE(52)] = 2473,
  [SMALL_STATE(53)] = 2508,
  [SMALL_STATE(54)] = 2543,
  [SMALL_STATE(55)] = 2578,
  [SMALL_STATE(56)] = 2613,
  [SMALL_STATE(57)] = 2648,
  [SMALL_STATE(58)] = 2683,
  [SMALL_STATE(59)] = 2718,
  [SMALL_STATE(60)] = 2753,
  [SMALL_STATE(61)] = 2788,
  [SMALL_STATE(62)] = 2823,
  [SMALL_STATE(63)] = 2858,
  [SMALL_STATE(64)] = 2893,
  [SMALL_STATE(65)] = 2917,
  [SMALL_STATE(66)] = 2941,
  [SMALL_STATE(67)] = 2965,
  [SMALL_STATE(68)] = 2989,
  [SMALL_STATE(69)] = 3013,
  [SMALL_STATE(70)] = 3037,
  [SMALL_STATE(71)] = 3061,
  [SMALL_STATE(72)] = 3085,
  [SMALL_STATE(73)] = 3109,
  [SMALL_STATE(74)] = 3133,
  [SMALL_STATE(75)] = 3157,
  [SMALL_STATE(76)] = 3181,
  [SMALL_STATE(77)] = 3205,
  [SMALL_STATE(78)] = 3229,
  [SMALL_STATE(79)] = 3253,
  [SMALL_STATE(80)] = 3277,
  [SMALL_STATE(81)] = 3301,
  [SMALL_STATE(82)] = 3325,
  [SMALL_STATE(83)] = 3349,
  [SMALL_STATE(84)] = 3373,
  [SMALL_STATE(85)] = 3397,
  [SMALL_STATE(86)] = 3421,
  [SMALL_STATE(87)] = 3445,
  [SMALL_STATE(88)] = 3469,
  [SMALL_STATE(89)] = 3493,
  [SMALL_STATE(90)] = 3517,
  [SMALL_STATE(91)] = 3556,
  [SMALL_STATE(92)] = 3595,
  [SMALL_STATE(93)] = 3624,
  [SMALL_STATE(94)] = 3657,
  [SMALL_STATE(95)] = 3683,
  [SMALL_STATE(96)] = 3709,
  [SMALL_STATE(97)] = 3731,
  [SMALL_STATE(98)] = 3757,
  [SMALL_STATE(99)] = 3783,
  [SMALL_STATE(100)] = 3809,
  [SMALL_STATE(101)] = 3836,
  [SMALL_STATE(102)] = 3857,
  [SMALL_STATE(103)] = 3884,
  [SMALL_STATE(104)] = 3911,
  [SMALL_STATE(105)] = 3938,
  [SMALL_STATE(106)] = 3965,
  [SMALL_STATE(107)] = 3991,
  [SMALL_STATE(108)] = 4016,
  [SMALL_STATE(109)] = 4031,
  [SMALL_STATE(110)] = 4050,
  [SMALL_STATE(111)] = 4073,
  [SMALL_STATE(112)] = 4096,
  [SMALL_STATE(113)] = 4119,
  [SMALL_STATE(114)] = 4138,
  [SMALL_STATE(115)] = 4163,
  [SMALL_STATE(116)] = 4178,
  [SMALL_STATE(117)] = 4201,
  [SMALL_STATE(118)] = 4218,
  [SMALL_STATE(119)] = 4241,
  [SMALL_STATE(120)] = 4260,
  [SMALL_STATE(121)] = 4274,
  [SMALL_STATE(122)] = 4288,
  [SMALL_STATE(123)] = 4302,
  [SMALL_STATE(124)] = 4316,
  [SMALL_STATE(125)] = 4334,
  [SMALL_STATE(126)] = 4352,
  [SMALL_STATE(127)] = 4370,
  [SMALL_STATE(128)] = 4384,
  [SMALL_STATE(129)] = 4398,
  [SMALL_STATE(130)] = 4412,
  [SMALL_STATE(131)] = 4430,
  [SMALL_STATE(132)] = 4452,
  [SMALL_STATE(133)] = 4466,
  [SMALL_STATE(134)] = 4484,
  [SMALL_STATE(135)] = 4498,
  [SMALL_STATE(136)] = 4518,
  [SMALL_STATE(137)] = 4536,
  [SMALL_STATE(138)] = 4558,
  [SMALL_STATE(139)] = 4578,
  [SMALL_STATE(140)] = 4598,
  [SMALL_STATE(141)] = 4618,
  [SMALL_STATE(142)] = 4638,
  [SMALL_STATE(143)] = 4652,
  [SMALL_STATE(144)] = 4670,
  [SMALL_STATE(145)] = 4688,
  [SMALL_STATE(146)] = 4702,
  [SMALL_STATE(147)] = 4720,
  [SMALL_STATE(148)] = 4734,
  [SMALL_STATE(149)] = 4748,
  [SMALL_STATE(150)] = 4766,
  [SMALL_STATE(151)] = 4786,
  [SMALL_STATE(152)] = 4800,
  [SMALL_STATE(153)] = 4819,
  [SMALL_STATE(154)] = 4838,
  [SMALL_STATE(155)] = 4857,
  [SMALL_STATE(156)] = 4876,
  [SMALL_STATE(157)] = 4895,
  [SMALL_STATE(158)] = 4914,
  [SMALL_STATE(159)] = 4929,
  [SMALL_STATE(160)] = 4948,
  [SMALL_STATE(161)] = 4967,
  [SMALL_STATE(162)] = 4980,
  [SMALL_STATE(163)] = 4999,
  [SMALL_STATE(164)] = 5018,
  [SMALL_STATE(165)] = 5033,
  [SMALL_STATE(166)] = 5052,
  [SMALL_STATE(167)] = 5064,
  [SMALL_STATE(168)] = 5078,
  [SMALL_STATE(169)] = 5092,
  [SMALL_STATE(170)] = 5105,
  [SMALL_STATE(171)] = 5118,
  [SMALL_STATE(172)] = 5127,
  [SMALL_STATE(173)] = 5136,
  [SMALL_STATE(174)] = 5149,
  [SMALL_STATE(175)] = 5162,
  [SMALL_STATE(176)] = 5171,
  [SMALL_STATE(177)] = 5182,
  [SMALL_STATE(178)] = 5191,
  [SMALL_STATE(179)] = 5202,
  [SMALL_STATE(180)] = 5213,
  [SMALL_STATE(181)] = 5226,
  [SMALL_STATE(182)] = 5234,
  [SMALL_STATE(183)] = 5244,
  [SMALL_STATE(184)] = 5254,
  [SMALL_STATE(185)] = 5262,
  [SMALL_STATE(186)] = 5270,
  [SMALL_STATE(187)] = 5280,
  [SMALL_STATE(188)] = 5288,
  [SMALL_STATE(189)] = 5296,
  [SMALL_STATE(190)] = 5304,
  [SMALL_STATE(191)] = 5312,
  [SMALL_STATE(192)] = 5320,
  [SMALL_STATE(193)] = 5330,
  [SMALL_STATE(194)] = 5338,
  [SMALL_STATE(195)] = 5345,
  [SMALL_STATE(196)] = 5352,
  [SMALL_STATE(197)] = 5359,
  [SMALL_STATE(198)] = 5366,
  [SMALL_STATE(199)] = 5373,
  [SMALL_STATE(200)] = 5380,
  [SMALL_STATE(201)] = 5387,
  [SMALL_STATE(202)] = 5394,
  [SMALL_STATE(203)] = 5401,
  [SMALL_STATE(204)] = 5408,
  [SMALL_STATE(205)] = 5415,
  [SMALL_STATE(206)] = 5422,
  [SMALL_STATE(207)] = 5429,
  [SMALL_STATE(208)] = 5436,
  [SMALL_STATE(209)] = 5443,
  [SMALL_STATE(210)] = 5450,
  [SMALL_STATE(211)] = 5457,
  [SMALL_STATE(212)] = 5464,
  [SMALL_STATE(213)] = 5471,
  [SMALL_STATE(214)] = 5478,
  [SMALL_STATE(215)] = 5485,
  [SMALL_STATE(216)] = 5492,
  [SMALL_STATE(217)] = 5499,
  [SMALL_STATE(218)] = 5506,
  [SMALL_STATE(219)] = 5513,
  [SMALL_STATE(220)] = 5520,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 14),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 14),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 12),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 19),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 9),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 15),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 15),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 7),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 7),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(45),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 10),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 10),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(49),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(102),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(148),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(148),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(161),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(161),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 16),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 16),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 14),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 14),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 21),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(33),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(207),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 14),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 14),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 22),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 20),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 14),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(166),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 8),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 18),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 17),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 11),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 23),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [586] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
