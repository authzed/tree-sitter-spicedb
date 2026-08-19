#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 5
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  sym_comment = 2,
  sym_qualified_identifier = 3,
  anon_sym_LT = 4,
  anon_sym_COMMA = 5,
  anon_sym_GT = 6,
  anon_sym_definition = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_use = 10,
  anon_sym_import = 11,
  aux_sym_import_token1 = 12,
  anon_sym_partial = 13,
  anon_sym_DOT_DOT_DOT = 14,
  anon_sym_COLON = 15,
  anon_sym_STAR = 16,
  anon_sym_POUND = 17,
  anon_sym_with = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_DOT = 20,
  anon_sym_any = 21,
  anon_sym_all = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_relation = 25,
  anon_sym_PIPE = 26,
  anon_sym_permission = 27,
  anon_sym_EQ = 28,
  anon_sym_nil = 29,
  sym_self_expression = 30,
  anon_sym_PLUS = 31,
  anon_sym_AMP = 32,
  anon_sym_DASH = 33,
  anon_sym_caveat = 34,
  aux_sym_caveat_expr_token1 = 35,
  sym_source_file = 36,
  sym__top_level = 37,
  sym_parameter_identifier = 38,
  sym_parameter_type_identifier = 39,
  sym_object_definition = 40,
  sym_use_flag = 41,
  sym_import = 42,
  sym_partial_definition = 43,
  sym_partial_reference = 44,
  sym_relation_type = 45,
  sym_wildcard_type = 46,
  sym_reference_type = 47,
  sym_caveat = 48,
  sym_userset = 49,
  sym_arrow_expression = 50,
  sym_relation = 51,
  sym_relation_expr = 52,
  sym_unary_relation_expr = 53,
  sym_binary_relation_expr = 54,
  sym_permission = 55,
  sym_permission_expr = 56,
  sym_unary_permission_expr = 57,
  sym_parenthesized_permission_expression = 58,
  sym_binary_permission_expr = 59,
  sym_caveat_definition = 60,
  sym_parameter = 61,
  sym_caveat_expr = 62,
  sym_caveat_object = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_parameter_type_identifier_repeat1 = 65,
  aux_sym_object_definition_repeat1 = 66,
  aux_sym_caveat_definition_repeat1 = 67,
  aux_sym_caveat_expr_repeat1 = 68,
  alias_sym_cel_variable_identifier = 69,
  alias_sym_field_identifier = 70,
  alias_sym_func_identifier = 71,
  alias_sym_method_identifier = 72,
  alias_sym_type_identifier = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_qualified_identifier] = "cel_type_identifier",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_definition] = "definition",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_use] = "use",
  [anon_sym_import] = "import",
  [aux_sym_import_token1] = "import_token1",
  [anon_sym_partial] = "partial",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_with] = "with",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_any] = "any",
  [anon_sym_all] = "all",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_relation] = "relation",
  [anon_sym_PIPE] = "|",
  [anon_sym_permission] = "permission",
  [anon_sym_EQ] = "=",
  [anon_sym_nil] = "nil",
  [sym_self_expression] = "self_expression",
  [anon_sym_PLUS] = "+",
  [anon_sym_AMP] = "&",
  [anon_sym_DASH] = "-",
  [anon_sym_caveat] = "caveat",
  [aux_sym_caveat_expr_token1] = "caveat_expr_token1",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_parameter_identifier] = "parameter_identifier",
  [sym_parameter_type_identifier] = "parameter_type_identifier",
  [sym_object_definition] = "object_definition",
  [sym_use_flag] = "use_flag",
  [sym_import] = "import",
  [sym_partial_definition] = "partial_definition",
  [sym_partial_reference] = "partial_reference",
  [sym_relation_type] = "relation_type",
  [sym_wildcard_type] = "wildcard_type",
  [sym_reference_type] = "reference_type",
  [sym_caveat] = "caveat",
  [sym_userset] = "userset",
  [sym_arrow_expression] = "arrow_expression",
  [sym_relation] = "relation",
  [sym_relation_expr] = "relation_expr",
  [sym_unary_relation_expr] = "unary_relation_expr",
  [sym_binary_relation_expr] = "binary_relation_expr",
  [sym_permission] = "permission",
  [sym_permission_expr] = "permission_expr",
  [sym_unary_permission_expr] = "unary_permission_expr",
  [sym_parenthesized_permission_expression] = "parenthesized_permission_expression",
  [sym_binary_permission_expr] = "binary_permission_expr",
  [sym_caveat_definition] = "caveat_definition",
  [sym_parameter] = "parameter",
  [sym_caveat_expr] = "caveat_expr",
  [sym_caveat_object] = "caveat_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_type_identifier_repeat1] = "parameter_type_identifier_repeat1",
  [aux_sym_object_definition_repeat1] = "object_definition_repeat1",
  [aux_sym_caveat_definition_repeat1] = "caveat_definition_repeat1",
  [aux_sym_caveat_expr_repeat1] = "caveat_expr_repeat1",
  [alias_sym_cel_variable_identifier] = "cel_variable_identifier",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_func_identifier] = "func_identifier",
  [alias_sym_method_identifier] = "method_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_definition] = anon_sym_definition,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_permission] = anon_sym_permission,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_nil] = anon_sym_nil,
  [sym_self_expression] = sym_self_expression,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_caveat] = anon_sym_caveat,
  [aux_sym_caveat_expr_token1] = aux_sym_caveat_expr_token1,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_parameter_identifier] = sym_parameter_identifier,
  [sym_parameter_type_identifier] = sym_parameter_type_identifier,
  [sym_object_definition] = sym_object_definition,
  [sym_use_flag] = sym_use_flag,
  [sym_import] = sym_import,
  [sym_partial_definition] = sym_partial_definition,
  [sym_partial_reference] = sym_partial_reference,
  [sym_relation_type] = sym_relation_type,
  [sym_wildcard_type] = sym_wildcard_type,
  [sym_reference_type] = sym_reference_type,
  [sym_caveat] = sym_caveat,
  [sym_userset] = sym_userset,
  [sym_arrow_expression] = sym_arrow_expression,
  [sym_relation] = sym_relation,
  [sym_relation_expr] = sym_relation_expr,
  [sym_unary_relation_expr] = sym_unary_relation_expr,
  [sym_binary_relation_expr] = sym_binary_relation_expr,
  [sym_permission] = sym_permission,
  [sym_permission_expr] = sym_permission_expr,
  [sym_unary_permission_expr] = sym_unary_permission_expr,
  [sym_parenthesized_permission_expression] = sym_parenthesized_permission_expression,
  [sym_binary_permission_expr] = sym_binary_permission_expr,
  [sym_caveat_definition] = sym_caveat_definition,
  [sym_parameter] = sym_parameter,
  [sym_caveat_expr] = sym_caveat_expr,
  [sym_caveat_object] = sym_caveat_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_type_identifier_repeat1] = aux_sym_parameter_type_identifier_repeat1,
  [aux_sym_object_definition_repeat1] = aux_sym_object_definition_repeat1,
  [aux_sym_caveat_definition_repeat1] = aux_sym_caveat_definition_repeat1,
  [aux_sym_caveat_expr_repeat1] = aux_sym_caveat_expr_repeat1,
  [alias_sym_cel_variable_identifier] = alias_sym_cel_variable_identifier,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_func_identifier] = alias_sym_func_identifier,
  [alias_sym_method_identifier] = alias_sym_method_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definition] = {
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [sym_self_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caveat] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_caveat_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_use_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat] = {
    .visible = true,
    .named = true,
  },
  [sym_userset] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_permission] = {
    .visible = true,
    .named = true,
  },
  [sym_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_permission_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_object] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_type_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caveat_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caveat_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_cel_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_func_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_method_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_expr = 2,
  field_name = 3,
  field_parameters = 4,
  field_path = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_expr] = "expr",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 0, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 2},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 8, .length = 2},
  [12] = {.index = 10, .length = 3},
  [17] = {.index = 13, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_path, 1},
  [2] =
    {field_body, 3},
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_type, 1},
  [6] =
    {field_expr, 3},
    {field_name, 1},
  [8] =
    {field_expr, 5},
    {field_name, 1},
  [10] =
    {field_expr, 6},
    {field_name, 1},
    {field_parameters, 3},
  [13] =
    {field_expr, 7},
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = alias_sym_type_identifier,
  },
  [4] = {
    [0] = alias_sym_cel_variable_identifier,
  },
  [5] = {
    [1] = alias_sym_type_identifier,
  },
  [7] = {
    [0] = alias_sym_type_identifier,
  },
  [8] = {
    [1] = alias_sym_field_identifier,
  },
  [9] = {
    [0] = alias_sym_field_identifier,
  },
  [10] = {
    [1] = alias_sym_method_identifier,
  },
  [11] = {
    [1] = alias_sym_func_identifier,
  },
  [12] = {
    [1] = alias_sym_func_identifier,
  },
  [13] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_field_identifier,
  },
  [14] = {
    [1] = alias_sym_func_identifier,
  },
  [15] = {
    [0] = alias_sym_field_identifier,
    [2] = alias_sym_field_identifier,
  },
  [16] = {
    [2] = alias_sym_field_identifier,
  },
  [17] = {
    [1] = alias_sym_func_identifier,
  },
  [18] = {
    [0] = alias_sym_field_identifier,
    [4] = alias_sym_field_identifier,
  },
  [19] = {
    [4] = alias_sym_field_identifier,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_self_expression);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
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
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_caveat);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_permission);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_definition] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_permission] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym_self_expression] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_caveat] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym__top_level] = STATE(2),
    [sym_object_definition] = STATE(2),
    [sym_use_flag] = STATE(2),
    [sym_import] = STATE(2),
    [sym_partial_definition] = STATE(2),
    [sym_caveat_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_definition] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_partial] = ACTIONS(15),
    [anon_sym_caveat] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_definition,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_partial,
    ACTIONS(17), 1,
      anon_sym_caveat,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_comment,
    STATE(3), 7,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
      aux_sym_source_file_repeat1,
  [31] = 8,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_definition,
    ACTIONS(31), 1,
      anon_sym_use,
    ACTIONS(34), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_partial,
    ACTIONS(40), 1,
      anon_sym_caveat,
    STATE(3), 7,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
      aux_sym_source_file_repeat1,
  [62] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_qualified_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_nil,
    ACTIONS(49), 1,
      sym_self_expression,
    STATE(6), 1,
      sym_arrow_expression,
    STATE(17), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(25), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(51), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DASH_GT,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(55), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [132] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_qualified_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_nil,
    ACTIONS(49), 1,
      sym_self_expression,
    STATE(6), 1,
      sym_arrow_expression,
    STATE(23), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(25), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [162] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_qualified_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_nil,
    ACTIONS(49), 1,
      sym_self_expression,
    STATE(6), 1,
      sym_arrow_expression,
    STATE(24), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(25), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(63), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [210] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_qualified_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_nil,
    ACTIONS(49), 1,
      sym_self_expression,
    STATE(6), 1,
      sym_arrow_expression,
    STATE(30), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(25), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [240] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_qualified_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_nil,
    ACTIONS(49), 1,
      sym_self_expression,
    STATE(6), 1,
      sym_arrow_expression,
    STATE(56), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(25), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(67), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(71), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DASH_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_DASH,
    ACTIONS(75), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_with,
    STATE(46), 1,
      sym_caveat,
    ACTIONS(83), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [351] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    STATE(26), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(16), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [409] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(21), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(26), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(99), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
  [499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(99), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [529] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(122), 1,
      anon_sym_relation,
    ACTIONS(125), 1,
      anon_sym_permission,
    STATE(26), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_with,
    STATE(44), 1,
      sym_caveat,
    ACTIONS(128), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_qualified_identifier,
    STATE(42), 1,
      sym_relation_expr,
    STATE(52), 1,
      sym_relation_type,
    STATE(27), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(53), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_qualified_identifier,
    STATE(43), 1,
      sym_relation_expr,
    STATE(52), 1,
      sym_relation_type,
    STATE(27), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(53), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      anon_sym_PLUS,
    ACTIONS(132), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [629] = 1,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [639] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [649] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [659] = 1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [669] = 1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [679] = 1,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [689] = 1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_with,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [711] = 1,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_with,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [733] = 1,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    ACTIONS(158), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [778] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      aux_sym_caveat_expr_token1,
    STATE(54), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [806] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      aux_sym_caveat_expr_token1,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [823] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(88), 1,
      sym_caveat_expr,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [851] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(92), 1,
      sym_caveat_expr,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [868] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      aux_sym_caveat_expr_token1,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [907] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      aux_sym_caveat_expr_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [924] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(103), 1,
      sym_caveat_expr,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      anon_sym_PLUS,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
  [957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_qualified_identifier,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_parameter,
    STATE(78), 1,
      sym_parameter_identifier,
  [983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LT,
    ACTIONS(208), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_qualified_identifier,
    STATE(73), 1,
      sym_parameter,
    STATE(78), 1,
      sym_parameter_identifier,
  [1017] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_GT,
    STATE(63), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_caveat_definition_repeat1,
  [1052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_GT,
    STATE(66), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_GT,
    STATE(63), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1078] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_caveat_definition_repeat1,
  [1109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_caveat_definition_repeat1,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_qualified_identifier,
    STATE(72), 1,
      sym_parameter_type_identifier,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_qualified_identifier,
    STATE(65), 1,
      sym_parameter_type_identifier,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_any,
      anon_sym_all,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_any,
      anon_sym_all,
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_qualified_identifier,
    STATE(71), 1,
      sym_parameter_type_identifier,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_EQ,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_qualified_identifier,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_qualified_identifier,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_qualified_identifier,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_qualified_identifier,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_qualified_identifier,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_qualified_identifier,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_qualified_identifier,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_STAR,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_qualified_identifier,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_qualified_identifier,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_qualified_identifier,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_qualified_identifier,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_qualified_identifier,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_import_token1,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 351,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 431,
  [SMALL_STATE(21)] = 445,
  [SMALL_STATE(22)] = 467,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 499,
  [SMALL_STATE(25)] = 515,
  [SMALL_STATE(26)] = 529,
  [SMALL_STATE(27)] = 551,
  [SMALL_STATE(28)] = 568,
  [SMALL_STATE(29)] = 589,
  [SMALL_STATE(30)] = 610,
  [SMALL_STATE(31)] = 629,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 649,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 669,
  [SMALL_STATE(36)] = 679,
  [SMALL_STATE(37)] = 689,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 711,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 733,
  [SMALL_STATE(42)] = 743,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 767,
  [SMALL_STATE(45)] = 778,
  [SMALL_STATE(46)] = 795,
  [SMALL_STATE(47)] = 806,
  [SMALL_STATE(48)] = 823,
  [SMALL_STATE(49)] = 840,
  [SMALL_STATE(50)] = 851,
  [SMALL_STATE(51)] = 868,
  [SMALL_STATE(52)] = 885,
  [SMALL_STATE(53)] = 896,
  [SMALL_STATE(54)] = 907,
  [SMALL_STATE(55)] = 924,
  [SMALL_STATE(56)] = 941,
  [SMALL_STATE(57)] = 957,
  [SMALL_STATE(58)] = 967,
  [SMALL_STATE(59)] = 983,
  [SMALL_STATE(60)] = 995,
  [SMALL_STATE(61)] = 1004,
  [SMALL_STATE(62)] = 1017,
  [SMALL_STATE(63)] = 1026,
  [SMALL_STATE(64)] = 1039,
  [SMALL_STATE(65)] = 1052,
  [SMALL_STATE(66)] = 1065,
  [SMALL_STATE(67)] = 1078,
  [SMALL_STATE(68)] = 1087,
  [SMALL_STATE(69)] = 1096,
  [SMALL_STATE(70)] = 1109,
  [SMALL_STATE(71)] = 1122,
  [SMALL_STATE(72)] = 1130,
  [SMALL_STATE(73)] = 1138,
  [SMALL_STATE(74)] = 1146,
  [SMALL_STATE(75)] = 1156,
  [SMALL_STATE(76)] = 1166,
  [SMALL_STATE(77)] = 1174,
  [SMALL_STATE(78)] = 1182,
  [SMALL_STATE(79)] = 1192,
  [SMALL_STATE(80)] = 1199,
  [SMALL_STATE(81)] = 1206,
  [SMALL_STATE(82)] = 1213,
  [SMALL_STATE(83)] = 1220,
  [SMALL_STATE(84)] = 1227,
  [SMALL_STATE(85)] = 1234,
  [SMALL_STATE(86)] = 1241,
  [SMALL_STATE(87)] = 1248,
  [SMALL_STATE(88)] = 1255,
  [SMALL_STATE(89)] = 1262,
  [SMALL_STATE(90)] = 1269,
  [SMALL_STATE(91)] = 1276,
  [SMALL_STATE(92)] = 1283,
  [SMALL_STATE(93)] = 1290,
  [SMALL_STATE(94)] = 1297,
  [SMALL_STATE(95)] = 1304,
  [SMALL_STATE(96)] = 1311,
  [SMALL_STATE(97)] = 1318,
  [SMALL_STATE(98)] = 1325,
  [SMALL_STATE(99)] = 1332,
  [SMALL_STATE(100)] = 1339,
  [SMALL_STATE(101)] = 1346,
  [SMALL_STATE(102)] = 1353,
  [SMALL_STATE(103)] = 1360,
  [SMALL_STATE(104)] = 1367,
  [SMALL_STATE(105)] = 1374,
  [SMALL_STATE(106)] = 1381,
  [SMALL_STATE(107)] = 1388,
  [SMALL_STATE(108)] = 1395,
  [SMALL_STATE(109)] = 1402,
  [SMALL_STATE(110)] = 1409,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 18),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(90),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(89),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(87),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 7, .production_id = 11),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 17),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 12),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3, .production_id = 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 13),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2, .production_id = 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat, 2, .production_id = 14),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(45),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(51),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(61),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [288] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_spicedb(void) {
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
