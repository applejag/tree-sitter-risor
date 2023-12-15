#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum {
  sym_identifier = 1,
  anon_sym_func = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_EQ = 6,
  anon_sym_bool = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_const = 10,
  anon_sym_var = 11,
  anon_sym_COLON_EQ = 12,
  anon_sym_STAR_EQ = 13,
  anon_sym_DASH_EQ = 14,
  anon_sym_PLUS_EQ = 15,
  anon_sym_SLASH_EQ = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_return = 19,
  anon_sym_if = 20,
  anon_sym_else = 21,
  anon_sym_DOT = 22,
  anon_sym_DQUOTE = 23,
  anon_sym_DQUOTE2 = 24,
  sym__string_non_escaped_content = 25,
  anon_sym_SQUOTE = 26,
  anon_sym_SQUOTE2 = 27,
  sym_string_template_plain = 28,
  sym_escape_sequence = 29,
  sym_string_backtick = 30,
  sym_int_literal = 31,
  sym_float_literal = 32,
  sym_nil = 33,
  sym_true = 34,
  sym_false = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym__definition = 38,
  sym_function_definition = 39,
  sym_parameter_list = 40,
  sym__parameter_declaration = 41,
  sym_parameter_declaration = 42,
  sym_parameter_declaration_default = 43,
  sym_block = 44,
  sym__statement = 45,
  sym__declaration = 46,
  sym_const_declaration = 47,
  sym_var_declaration = 48,
  sym_short_var_declaration = 49,
  sym_assignment_statement = 50,
  sym_assignment_statement_index = 51,
  sym_return_statement = 52,
  sym_if_statement = 53,
  sym_expression_statement = 54,
  sym__expression = 55,
  sym_selector_expression = 56,
  sym_index_expression = 57,
  sym_parenthesized_expression = 58,
  sym_call_expression = 59,
  sym_argument_list = 60,
  sym__field_identifier = 61,
  sym__string_literal = 62,
  sym_string = 63,
  sym_string_template = 64,
  sym_string_template_argument = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_parameter_list_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_argument_list_repeat1 = 69,
  aux_sym_string_repeat1 = 70,
  aux_sym_string_template_repeat1 = 71,
  alias_sym_field_identifier = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__string_non_escaped_content] = "_string_non_escaped_content",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym_string_template_plain] = "string_template_plain",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_backtick] = "string_backtick",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter_declaration] = "_parameter_declaration",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parameter_declaration_default] = "parameter_declaration_default",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym__declaration] = "_declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym_short_var_declaration] = "short_var_declaration",
  [sym_assignment_statement] = "assignment_statement",
  [sym_assignment_statement_index] = "assignment_statement_index",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_index_expression] = "index_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym__field_identifier] = "_field_identifier",
  [sym__string_literal] = "_string_literal",
  [sym_string] = "string",
  [sym_string_template] = "string_template",
  [sym_string_template_argument] = "string_template_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_template_repeat1] = "string_template_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__string_non_escaped_content] = sym__string_non_escaped_content,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_string_template_plain] = sym_string_template_plain,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_backtick] = sym_string_backtick,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_nil] = sym_nil,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter_declaration] = sym__parameter_declaration,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_parameter_declaration_default] = sym_parameter_declaration_default,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym__declaration] = sym__declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym_short_var_declaration] = sym_short_var_declaration,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_assignment_statement_index] = sym_assignment_statement_index,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_index_expression] = sym_index_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__field_identifier] = sym__field_identifier,
  [sym__string_literal] = sym__string_literal,
  [sym_string] = sym_string,
  [sym_string_template] = sym_string_template,
  [sym_string_template_argument] = sym_string_template_argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_DOT] = {
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
  [sym_string_template_plain] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_function_definition] = {
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
  [sym_assignment_statement_index] = {
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
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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
  field_left = 10,
  field_name = 11,
  field_operand = 12,
  field_operator = 13,
  field_parameters = 14,
  field_right = 15,
  field_value = 16,
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
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 1},
    {field_function, 0},
  [2] =
    {field_condition, 1},
    {field_consequence, 2},
  [4] =
    {field_left, 0},
    {field_right, 2},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_field, 2},
    {field_operand, 0},
  [11] =
    {field_name, 0},
  [12] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [15] =
    {field_name, 1},
    {field_value, 3},
  [17] =
    {field_index, 1},
  [18] =
    {field_index, 2},
    {field_operand, 0},
  [20] =
    {field_left, 0},
    {field_operator, 2},
    {field_right, 3},
  [23] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [26] =
    {field_default, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_field_identifier,
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
  [6] = 4,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
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
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 15,
  [29] = 9,
  [30] = 19,
  [31] = 13,
  [32] = 20,
  [33] = 21,
  [34] = 10,
  [35] = 17,
  [36] = 18,
  [37] = 11,
  [38] = 12,
  [39] = 16,
  [40] = 14,
  [41] = 26,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 48,
  [54] = 44,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 61,
  [62] = 58,
  [63] = 63,
  [64] = 61,
  [65] = 51,
  [66] = 47,
  [67] = 63,
  [68] = 52,
  [69] = 69,
  [70] = 45,
  [71] = 71,
  [72] = 72,
  [73] = 57,
  [74] = 74,
  [75] = 75,
  [76] = 49,
  [77] = 69,
  [78] = 55,
  [79] = 71,
  [80] = 72,
  [81] = 81,
  [82] = 56,
  [83] = 83,
  [84] = 27,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 83,
  [90] = 86,
  [91] = 85,
  [92] = 92,
  [93] = 88,
  [94] = 87,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 104,
  [105] = 99,
  [106] = 97,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 111,
  [115] = 107,
  [116] = 108,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 119,
  [124] = 121,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 134,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 143,
  [150] = 144,
  [151] = 147,
  [152] = 140,
  [153] = 153,
  [154] = 154,
  [155] = 155,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(47);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(43);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(55);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_template_plain);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string_template_plain);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string_template_plain);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string_template_plain);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == '{') ADVANCE(8);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string_template_plain);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == '{') ADVANCE(8);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_template_plain);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_backtick);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
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
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 24},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_string_backtick] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(141),
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__statement] = STATE(3),
    [sym__declaration] = STATE(87),
    [sym_const_declaration] = STATE(87),
    [sym_var_declaration] = STATE(87),
    [sym_short_var_declaration] = STATE(87),
    [sym_assignment_statement] = STATE(87),
    [sym_return_statement] = STATE(87),
    [sym_if_statement] = STATE(87),
    [sym_expression_statement] = STATE(87),
    [sym__expression] = STATE(22),
    [sym_selector_expression] = STATE(13),
    [sym_index_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym__string_literal] = STATE(13),
    [sym_string] = STATE(13),
    [sym_string_template] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_string_backtick] = ACTIONS(25),
    [sym_int_literal] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__statement] = STATE(2),
    [sym__declaration] = STATE(87),
    [sym_const_declaration] = STATE(87),
    [sym_var_declaration] = STATE(87),
    [sym_short_var_declaration] = STATE(87),
    [sym_assignment_statement] = STATE(87),
    [sym_return_statement] = STATE(87),
    [sym_if_statement] = STATE(87),
    [sym_expression_statement] = STATE(87),
    [sym__expression] = STATE(22),
    [sym_selector_expression] = STATE(13),
    [sym_index_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym__string_literal] = STATE(13),
    [sym_string] = STATE(13),
    [sym_string_template] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_func] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(40),
    [anon_sym_var] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_string_backtick] = ACTIONS(58),
    [sym_int_literal] = ACTIONS(61),
    [sym_float_literal] = ACTIONS(58),
    [sym_nil] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__statement] = STATE(2),
    [sym__declaration] = STATE(87),
    [sym_const_declaration] = STATE(87),
    [sym_var_declaration] = STATE(87),
    [sym_short_var_declaration] = STATE(87),
    [sym_assignment_statement] = STATE(87),
    [sym_return_statement] = STATE(87),
    [sym_if_statement] = STATE(87),
    [sym_expression_statement] = STATE(87),
    [sym__expression] = STATE(22),
    [sym_selector_expression] = STATE(13),
    [sym_index_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym__string_literal] = STATE(13),
    [sym_string] = STATE(13),
    [sym_string_template] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_string_backtick] = ACTIONS(25),
    [sym_int_literal] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_const,
    ACTIONS(74), 1,
      anon_sym_var,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(8), 2,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(86), 4,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
    STATE(94), 8,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_expression_statement,
  [67] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_const,
    ACTIONS(74), 1,
      anon_sym_var,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(7), 2,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(86), 4,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
    STATE(94), 8,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_expression_statement,
  [134] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_const,
    ACTIONS(74), 1,
      anon_sym_var,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(5), 2,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(86), 4,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
    STATE(94), 8,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_expression_statement,
  [201] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_const,
    ACTIONS(103), 1,
      anon_sym_var,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(109), 1,
      anon_sym_if,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym__expression,
    ACTIONS(118), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(7), 2,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(121), 4,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
    STATE(94), 8,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_expression_statement,
  [268] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_const,
    ACTIONS(74), 1,
      anon_sym_var,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(7), 2,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(86), 4,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
    STATE(94), 8,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_assignment_statement,
      sym_return_statement,
      sym_if_statement,
      sym_expression_statement,
  [335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(126), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(130), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(138), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(142), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(146), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(150), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(158), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(162), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(166), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(170), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(174), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [803] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_argument_list,
    STATE(107), 1,
      sym_assignment_statement_index,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(180), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COLON_EQ,
    ACTIONS(144), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(142), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [882] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_argument_list,
    STATE(115), 1,
      sym_assignment_statement_index,
    ACTIONS(178), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(194), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(180), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON_EQ,
    ACTIONS(144), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(142), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(202), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(202), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(150), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(126), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(166), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(142), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(170), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(174), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(130), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(158), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(162), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(134), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(138), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(154), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(146), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(202), 12,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
  [1441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1483] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(216), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(222), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1595] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(228), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1669] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1708] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(234), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1743] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1782] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(240), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1817] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(244), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1852] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1891] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(214), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(216), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [1925] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(86), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [1997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2069] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2141] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2177] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2249] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(86), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2285] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(238), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(240), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2319] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(226), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(228), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2353] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(86), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2389] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(242), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(244), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2459] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(220), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(222), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2493] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(86), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2529] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(86), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2565] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2637] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2673] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(232), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(234), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2707] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym__expression,
    ACTIONS(84), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(86), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2743] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2779] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2815] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2851] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2887] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym__expression,
    ACTIONS(25), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(27), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__string_literal,
      sym_string,
      sym_string_template,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(252), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(204), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [2973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_else,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(256), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(262), 11,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(266), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(270), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(252), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(262), 10,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_else,
    ACTIONS(254), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(256), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(276), 10,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(270), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(266), 9,
      anon_sym_const,
      anon_sym_var,
      anon_sym_return,
      anon_sym_if,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [3217] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_argument_list,
    STATE(127), 1,
      aux_sym_argument_list_repeat1,
  [3242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_argument_list,
    STATE(130), 1,
      aux_sym_argument_list_repeat1,
  [3267] = 6,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_SQUOTE2,
    ACTIONS(292), 1,
      sym_string_template_plain,
    ACTIONS(294), 1,
      sym_escape_sequence,
    ACTIONS(296), 1,
      sym_comment,
    STATE(103), 2,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3307] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_argument_list,
    STATE(91), 1,
      sym_block,
  [3329] = 6,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_SQUOTE2,
    ACTIONS(304), 1,
      sym_string_template_plain,
    ACTIONS(306), 1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3369] = 6,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SQUOTE2,
    ACTIONS(312), 1,
      sym_string_template_plain,
    ACTIONS(314), 1,
      sym_escape_sequence,
    STATE(106), 2,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3389] = 6,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_SQUOTE2,
    ACTIONS(321), 1,
      sym_string_template_plain,
    ACTIONS(324), 1,
      sym_escape_sequence,
    STATE(103), 2,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(129), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [3427] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_argument_list,
    STATE(85), 1,
      sym_block,
  [3449] = 6,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      sym_string_template_plain,
    ACTIONS(294), 1,
      sym_escape_sequence,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SQUOTE2,
    STATE(103), 2,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_argument_list,
  [3499] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_argument_list,
  [3518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(135), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [3533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_argument_list,
  [3552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_argument_list,
  [3571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_argument_list,
  [3590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_argument_list,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3620] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_argument_list,
  [3639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(135), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [3654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(135), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [3666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_if,
    STATE(93), 2,
      sym_block,
      sym_if_statement,
  [3680] = 4,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_DQUOTE2,
    STATE(120), 1,
      aux_sym_string_repeat1,
    ACTIONS(363), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence,
  [3694] = 4,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DQUOTE2,
    STATE(120), 1,
      aux_sym_string_repeat1,
    ACTIONS(368), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence,
  [3708] = 3,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_LBRACE,
      sym_string_template_plain,
    ACTIONS(372), 2,
      anon_sym_SQUOTE2,
      sym_escape_sequence,
  [3720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_if,
    STATE(88), 2,
      sym_block,
      sym_if_statement,
  [3734] = 4,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE2,
    STATE(120), 1,
      aux_sym_string_repeat1,
    ACTIONS(368), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence,
  [3748] = 4,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE2,
    STATE(124), 1,
      aux_sym_string_repeat1,
    ACTIONS(380), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence,
  [3762] = 4,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE2,
    STATE(121), 1,
      aux_sym_string_repeat1,
    ACTIONS(384), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence,
  [3776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
  [3789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_parameter_list_repeat1,
  [3802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_parameter_list_repeat1,
  [3815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
  [3828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_parameter_list_repeat1,
  [3841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
  [3865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(12), 1,
      sym__field_identifier,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_parameter_list,
  [3903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(38), 1,
      sym__field_identifier,
  [3913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [3920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
  [3927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_EQ,
  [3941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_EQ,
  [3948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
  [3955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_EQ,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_EQ,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [4018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 371,
  [SMALL_STATE(11)] = 407,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 623,
  [SMALL_STATE(18)] = 659,
  [SMALL_STATE(19)] = 695,
  [SMALL_STATE(20)] = 731,
  [SMALL_STATE(21)] = 767,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 848,
  [SMALL_STATE(24)] = 882,
  [SMALL_STATE(25)] = 926,
  [SMALL_STATE(26)] = 959,
  [SMALL_STATE(27)] = 990,
  [SMALL_STATE(28)] = 1021,
  [SMALL_STATE(29)] = 1051,
  [SMALL_STATE(30)] = 1081,
  [SMALL_STATE(31)] = 1111,
  [SMALL_STATE(32)] = 1141,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1201,
  [SMALL_STATE(35)] = 1231,
  [SMALL_STATE(36)] = 1261,
  [SMALL_STATE(37)] = 1291,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1351,
  [SMALL_STATE(40)] = 1381,
  [SMALL_STATE(41)] = 1411,
  [SMALL_STATE(42)] = 1441,
  [SMALL_STATE(43)] = 1483,
  [SMALL_STATE(44)] = 1525,
  [SMALL_STATE(45)] = 1560,
  [SMALL_STATE(46)] = 1595,
  [SMALL_STATE(47)] = 1634,
  [SMALL_STATE(48)] = 1669,
  [SMALL_STATE(49)] = 1708,
  [SMALL_STATE(50)] = 1743,
  [SMALL_STATE(51)] = 1782,
  [SMALL_STATE(52)] = 1817,
  [SMALL_STATE(53)] = 1852,
  [SMALL_STATE(54)] = 1891,
  [SMALL_STATE(55)] = 1925,
  [SMALL_STATE(56)] = 1961,
  [SMALL_STATE(57)] = 1997,
  [SMALL_STATE(58)] = 2033,
  [SMALL_STATE(59)] = 2069,
  [SMALL_STATE(60)] = 2105,
  [SMALL_STATE(61)] = 2141,
  [SMALL_STATE(62)] = 2177,
  [SMALL_STATE(63)] = 2213,
  [SMALL_STATE(64)] = 2249,
  [SMALL_STATE(65)] = 2285,
  [SMALL_STATE(66)] = 2319,
  [SMALL_STATE(67)] = 2353,
  [SMALL_STATE(68)] = 2389,
  [SMALL_STATE(69)] = 2423,
  [SMALL_STATE(70)] = 2459,
  [SMALL_STATE(71)] = 2493,
  [SMALL_STATE(72)] = 2529,
  [SMALL_STATE(73)] = 2565,
  [SMALL_STATE(74)] = 2601,
  [SMALL_STATE(75)] = 2637,
  [SMALL_STATE(76)] = 2673,
  [SMALL_STATE(77)] = 2707,
  [SMALL_STATE(78)] = 2743,
  [SMALL_STATE(79)] = 2779,
  [SMALL_STATE(80)] = 2815,
  [SMALL_STATE(81)] = 2851,
  [SMALL_STATE(82)] = 2887,
  [SMALL_STATE(83)] = 2923,
  [SMALL_STATE(84)] = 2948,
  [SMALL_STATE(85)] = 2973,
  [SMALL_STATE(86)] = 3000,
  [SMALL_STATE(87)] = 3025,
  [SMALL_STATE(88)] = 3049,
  [SMALL_STATE(89)] = 3073,
  [SMALL_STATE(90)] = 3097,
  [SMALL_STATE(91)] = 3121,
  [SMALL_STATE(92)] = 3147,
  [SMALL_STATE(93)] = 3171,
  [SMALL_STATE(94)] = 3194,
  [SMALL_STATE(95)] = 3217,
  [SMALL_STATE(96)] = 3242,
  [SMALL_STATE(97)] = 3267,
  [SMALL_STATE(98)] = 3287,
  [SMALL_STATE(99)] = 3307,
  [SMALL_STATE(100)] = 3329,
  [SMALL_STATE(101)] = 3349,
  [SMALL_STATE(102)] = 3369,
  [SMALL_STATE(103)] = 3389,
  [SMALL_STATE(104)] = 3409,
  [SMALL_STATE(105)] = 3427,
  [SMALL_STATE(106)] = 3449,
  [SMALL_STATE(107)] = 3469,
  [SMALL_STATE(108)] = 3480,
  [SMALL_STATE(109)] = 3499,
  [SMALL_STATE(110)] = 3518,
  [SMALL_STATE(111)] = 3533,
  [SMALL_STATE(112)] = 3552,
  [SMALL_STATE(113)] = 3571,
  [SMALL_STATE(114)] = 3590,
  [SMALL_STATE(115)] = 3609,
  [SMALL_STATE(116)] = 3620,
  [SMALL_STATE(117)] = 3639,
  [SMALL_STATE(118)] = 3654,
  [SMALL_STATE(119)] = 3666,
  [SMALL_STATE(120)] = 3680,
  [SMALL_STATE(121)] = 3694,
  [SMALL_STATE(122)] = 3708,
  [SMALL_STATE(123)] = 3720,
  [SMALL_STATE(124)] = 3734,
  [SMALL_STATE(125)] = 3748,
  [SMALL_STATE(126)] = 3762,
  [SMALL_STATE(127)] = 3776,
  [SMALL_STATE(128)] = 3789,
  [SMALL_STATE(129)] = 3802,
  [SMALL_STATE(130)] = 3815,
  [SMALL_STATE(131)] = 3828,
  [SMALL_STATE(132)] = 3841,
  [SMALL_STATE(133)] = 3852,
  [SMALL_STATE(134)] = 3865,
  [SMALL_STATE(135)] = 3875,
  [SMALL_STATE(136)] = 3883,
  [SMALL_STATE(137)] = 3893,
  [SMALL_STATE(138)] = 3903,
  [SMALL_STATE(139)] = 3913,
  [SMALL_STATE(140)] = 3920,
  [SMALL_STATE(141)] = 3927,
  [SMALL_STATE(142)] = 3934,
  [SMALL_STATE(143)] = 3941,
  [SMALL_STATE(144)] = 3948,
  [SMALL_STATE(145)] = 3955,
  [SMALL_STATE(146)] = 3962,
  [SMALL_STATE(147)] = 3969,
  [SMALL_STATE(148)] = 3976,
  [SMALL_STATE(149)] = 3983,
  [SMALL_STATE(150)] = 3990,
  [SMALL_STATE(151)] = 3997,
  [SMALL_STATE(152)] = 4004,
  [SMALL_STATE(153)] = 4011,
  [SMALL_STATE(154)] = 4018,
  [SMALL_STATE(155)] = 4025,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(151),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(100),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 11),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 11),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 9),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 9),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 9),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 12),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 12),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 13),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 13),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 14),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(81),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(103),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(103),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(120),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(118),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 7),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(74),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [418] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
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
