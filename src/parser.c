#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 163
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_DQUOTE = 1,
  anon_sym_PIPE = 2,
  anon_sym_DOT = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym__ = 6,
  anon_sym_AT = 7,
  anon_sym_COMMA = 8,
  anon_sym_EQ = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  sym_conid = 12,
  sym_varid = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_code_block_content = 16,
  sym_string_content = 17,
  anon_sym_data = 18,
  anon_sym_DATA = 19,
  anon_sym_attr = 20,
  anon_sym_ATTR = 21,
  anon_sym_sem = 22,
  anon_sym_SEM = 23,
  anon_sym_type = 24,
  anon_sym_TYPE = 25,
  anon_sym_use = 26,
  anon_sym_USE = 27,
  anon_sym_INH = 28,
  anon_sym_inh = 29,
  anon_sym_SYN = 30,
  anon_sym_syn = 31,
  anon_sym_CHN = 32,
  anon_sym_chn = 33,
  anon_sym_INCLUDE = 34,
  anon_sym_include = 35,
  sym_lhs_keyword = 36,
  sym_loc_keyword = 37,
  anon_sym_COLON = 38,
  anon_sym_COLON_COLON = 39,
  anon_sym_COLON_EQ = 40,
  sym_comment = 41,
  sym__layout_open_brace = 42,
  sym__layout_line_content = 43,
  sym__layout_close_brace = 44,
  sym_source_file = 45,
  sym__elem = 46,
  sym_include_definition = 47,
  sym_code_block_definition = 48,
  sym_sem_definition = 49,
  sym_sem_alternatives = 50,
  sym_sem_impl = 51,
  sym_attribute = 52,
  sym_local_attribute = 53,
  sym_attr_impl = 54,
  sym_local_attr_impl = 55,
  sym_expr = 56,
  sym_layout_code_block = 57,
  sym_pattern = 58,
  sym_pattern1 = 59,
  sym_at_pattern1 = 60,
  sym_pattern_list = 61,
  sym_type_definition = 62,
  sym_attr_definition = 63,
  sym_attr_declarations = 64,
  sym_old_attr_style = 65,
  sym_new_attr_style = 66,
  sym_inh_attr_declaration_new_style = 67,
  sym_syn_attr_declaration_new_style = 68,
  sym_chn_attr_declaration_new_style = 69,
  sym_inh_attr_declaration_old_style = 70,
  sym_syn_attr_declaration_old_style = 71,
  sym_use_operator = 72,
  sym_data_definition = 73,
  sym_data_alternatives = 74,
  sym_field = 75,
  sym_var_type_definitions = 76,
  sym_var_type_definition = 77,
  sym_type = 78,
  sym_varids = 79,
  sym_code_block = 80,
  sym_data_keyword = 81,
  sym_attr_keyword = 82,
  sym_sem_keyword = 83,
  sym_type_keyword = 84,
  sym_use_keyword = 85,
  sym_inh_keyword = 86,
  sym_syn_keyword = 87,
  sym_chn_keyword = 88,
  sym_include_keyword = 89,
  sym_type_symbol = 90,
  sym_assign_symbol = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_sem_definition_repeat1 = 93,
  aux_sym_sem_alternatives_repeat1 = 94,
  aux_sym_sem_alternatives_repeat2 = 95,
  aux_sym_attribute_repeat1 = 96,
  aux_sym_layout_code_block_repeat1 = 97,
  aux_sym_pattern_repeat1 = 98,
  aux_sym_pattern_list_repeat1 = 99,
  aux_sym_type_definition_repeat1 = 100,
  aux_sym_attr_declarations_repeat1 = 101,
  aux_sym_old_attr_style_repeat1 = 102,
  aux_sym_old_attr_style_repeat2 = 103,
  aux_sym_data_definition_repeat1 = 104,
  aux_sym_data_alternatives_repeat1 = 105,
  aux_sym_var_type_definitions_repeat1 = 106,
  aux_sym_varids_repeat1 = 107,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym__] = "_",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_conid] = "conid",
  [sym_varid] = "varid",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_code_block_content] = "code_block_content",
  [sym_string_content] = "string_content",
  [anon_sym_data] = "data",
  [anon_sym_DATA] = "DATA",
  [anon_sym_attr] = "attr",
  [anon_sym_ATTR] = "ATTR",
  [anon_sym_sem] = "sem",
  [anon_sym_SEM] = "SEM",
  [anon_sym_type] = "type",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_use] = "use",
  [anon_sym_USE] = "USE",
  [anon_sym_INH] = "INH",
  [anon_sym_inh] = "inh",
  [anon_sym_SYN] = "SYN",
  [anon_sym_syn] = "syn",
  [anon_sym_CHN] = "CHN",
  [anon_sym_chn] = "chn",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_include] = "include",
  [sym_lhs_keyword] = "lhs_keyword",
  [sym_loc_keyword] = "loc_keyword",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_EQ] = ":=",
  [sym_comment] = "comment",
  [sym__layout_open_brace] = "_layout_open_brace",
  [sym__layout_line_content] = "_layout_line_content",
  [sym__layout_close_brace] = "_layout_close_brace",
  [sym_source_file] = "source_file",
  [sym__elem] = "_elem",
  [sym_include_definition] = "include_definition",
  [sym_code_block_definition] = "code_block_definition",
  [sym_sem_definition] = "sem_definition",
  [sym_sem_alternatives] = "sem_alternatives",
  [sym_sem_impl] = "sem_impl",
  [sym_attribute] = "attribute",
  [sym_local_attribute] = "local_attribute",
  [sym_attr_impl] = "attr_impl",
  [sym_local_attr_impl] = "local_attr_impl",
  [sym_expr] = "expr",
  [sym_layout_code_block] = "layout_code_block",
  [sym_pattern] = "pattern",
  [sym_pattern1] = "pattern1",
  [sym_at_pattern1] = "at_pattern1",
  [sym_pattern_list] = "pattern_list",
  [sym_type_definition] = "type_definition",
  [sym_attr_definition] = "attr_definition",
  [sym_attr_declarations] = "attr_declarations",
  [sym_old_attr_style] = "old_attr_style",
  [sym_new_attr_style] = "new_attr_style",
  [sym_inh_attr_declaration_new_style] = "inh_attr_declaration_new_style",
  [sym_syn_attr_declaration_new_style] = "syn_attr_declaration_new_style",
  [sym_chn_attr_declaration_new_style] = "chn_attr_declaration_new_style",
  [sym_inh_attr_declaration_old_style] = "inh_attr_declaration_old_style",
  [sym_syn_attr_declaration_old_style] = "syn_attr_declaration_old_style",
  [sym_use_operator] = "use_operator",
  [sym_data_definition] = "data_definition",
  [sym_data_alternatives] = "data_alternatives",
  [sym_field] = "field",
  [sym_var_type_definitions] = "var_type_definitions",
  [sym_var_type_definition] = "var_type_definition",
  [sym_type] = "type",
  [sym_varids] = "varids",
  [sym_code_block] = "code_block",
  [sym_data_keyword] = "data_keyword",
  [sym_attr_keyword] = "attr_keyword",
  [sym_sem_keyword] = "sem_keyword",
  [sym_type_keyword] = "type_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_inh_keyword] = "inh_keyword",
  [sym_syn_keyword] = "syn_keyword",
  [sym_chn_keyword] = "chn_keyword",
  [sym_include_keyword] = "include_keyword",
  [sym_type_symbol] = "type_symbol",
  [sym_assign_symbol] = "assign_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sem_definition_repeat1] = "sem_definition_repeat1",
  [aux_sym_sem_alternatives_repeat1] = "sem_alternatives_repeat1",
  [aux_sym_sem_alternatives_repeat2] = "sem_alternatives_repeat2",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_layout_code_block_repeat1] = "layout_code_block_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_pattern_list_repeat1] = "pattern_list_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_attr_declarations_repeat1] = "attr_declarations_repeat1",
  [aux_sym_old_attr_style_repeat1] = "old_attr_style_repeat1",
  [aux_sym_old_attr_style_repeat2] = "old_attr_style_repeat2",
  [aux_sym_data_definition_repeat1] = "data_definition_repeat1",
  [aux_sym_data_alternatives_repeat1] = "data_alternatives_repeat1",
  [aux_sym_var_type_definitions_repeat1] = "var_type_definitions_repeat1",
  [aux_sym_varids_repeat1] = "varids_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_conid] = {
    .visible = true,
    .named = true,
  },
  [sym_varid] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_lhs_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_loc_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__layout_open_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_line_content] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_close_brace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__elem] = {
    .visible = false,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sem_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sem_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_sem_impl] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_local_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_impl] = {
    .visible = true,
    .named = true,
  },
  [sym_local_attr_impl] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern1] = {
    .visible = true,
    .named = true,
  },
  [sym_at_pattern1] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_old_attr_style] = {
    .visible = true,
    .named = true,
  },
  [sym_new_attr_style] = {
    .visible = true,
    .named = true,
  },
  [sym_inh_attr_declaration_new_style] = {
    .visible = true,
    .named = true,
  },
  [sym_syn_attr_declaration_new_style] = {
    .visible = true,
    .named = true,
  },
  [sym_chn_attr_declaration_new_style] = {
    .visible = true,
    .named = true,
  },
  [sym_inh_attr_declaration_old_style] = {
    .visible = true,
    .named = true,
  },
  [sym_syn_attr_declaration_old_style] = {
    .visible = true,
    .named = true,
  },
  [sym_use_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_data_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_data_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_var_type_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_var_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_varids] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_data_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_sem_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_inh_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_syn_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_chn_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_include_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sem_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sem_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sem_alternatives_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_layout_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_attr_style_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_attr_style_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_type_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varids_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(47);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(47);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'C') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(47);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(47);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(47);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(47);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'Y') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(137);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(154);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'Y') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(132);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(83);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'H') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'C') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'D') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'Y') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'L') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'M') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'P') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'S') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'U') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(130);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(114);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'h') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'd') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'y') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'l') ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'm') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'p') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'u') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'y') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_sem);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SEM);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SEM);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_use);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_inh);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_syn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_chn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_include);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_lhs_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_loc_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 126},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 121},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 121},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 121},
  [161] = {.lex_state = 121},
  [162] = {.lex_state = 121},
};

enum {
  ts_external_token__layout_open_brace = 0,
  ts_external_token__layout_line_content = 1,
  ts_external_token__layout_close_brace = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__layout_open_brace] = sym__layout_open_brace,
  [ts_external_token__layout_line_content] = sym__layout_line_content,
  [ts_external_token__layout_close_brace] = sym__layout_close_brace,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_line_content] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [2] = {
    [ts_external_token__layout_open_brace] = true,
  },
  [3] = {
    [ts_external_token__layout_line_content] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [4] = {
    [ts_external_token__layout_line_content] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_conid] = ACTIONS(1),
    [sym_varid] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_DATA] = ACTIONS(1),
    [anon_sym_attr] = ACTIONS(1),
    [anon_sym_ATTR] = ACTIONS(1),
    [anon_sym_sem] = ACTIONS(1),
    [anon_sym_SEM] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_USE] = ACTIONS(1),
    [anon_sym_INH] = ACTIONS(1),
    [anon_sym_inh] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_syn] = ACTIONS(1),
    [anon_sym_CHN] = ACTIONS(1),
    [anon_sym_chn] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [sym_lhs_keyword] = ACTIONS(1),
    [sym_loc_keyword] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__layout_open_brace] = ACTIONS(1),
    [sym__layout_line_content] = ACTIONS(1),
    [sym__layout_close_brace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(146),
    [sym__elem] = STATE(2),
    [sym_include_definition] = STATE(2),
    [sym_code_block_definition] = STATE(2),
    [sym_sem_definition] = STATE(2),
    [sym_type_definition] = STATE(2),
    [sym_attr_definition] = STATE(2),
    [sym_data_definition] = STATE(2),
    [sym_code_block] = STATE(46),
    [sym_data_keyword] = STATE(143),
    [sym_attr_keyword] = STATE(130),
    [sym_sem_keyword] = STATE(138),
    [sym_type_keyword] = STATE(137),
    [sym_include_keyword] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_varid] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(11),
    [anon_sym_DATA] = ACTIONS(13),
    [anon_sym_attr] = ACTIONS(15),
    [anon_sym_ATTR] = ACTIONS(17),
    [anon_sym_sem] = ACTIONS(19),
    [anon_sym_SEM] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_TYPE] = ACTIONS(25),
    [anon_sym_INCLUDE] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__elem] = STATE(4),
    [sym_include_definition] = STATE(4),
    [sym_code_block_definition] = STATE(4),
    [sym_sem_definition] = STATE(4),
    [sym_type_definition] = STATE(4),
    [sym_attr_definition] = STATE(4),
    [sym_data_definition] = STATE(4),
    [sym_code_block] = STATE(46),
    [sym_data_keyword] = STATE(143),
    [sym_attr_keyword] = STATE(130),
    [sym_sem_keyword] = STATE(138),
    [sym_type_keyword] = STATE(137),
    [sym_include_keyword] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_varid] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(11),
    [anon_sym_DATA] = ACTIONS(13),
    [anon_sym_attr] = ACTIONS(15),
    [anon_sym_ATTR] = ACTIONS(17),
    [anon_sym_sem] = ACTIONS(19),
    [anon_sym_SEM] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_TYPE] = ACTIONS(25),
    [anon_sym_INCLUDE] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_new_attr_style] = STATE(5),
    [sym_inh_attr_declaration_new_style] = STATE(18),
    [sym_syn_attr_declaration_new_style] = STATE(18),
    [sym_chn_attr_declaration_new_style] = STATE(18),
    [sym_inh_keyword] = STATE(113),
    [sym_syn_keyword] = STATE(112),
    [sym_chn_keyword] = STATE(111),
    [aux_sym_attr_declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_varid] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_data] = ACTIONS(35),
    [anon_sym_DATA] = ACTIONS(33),
    [anon_sym_attr] = ACTIONS(35),
    [anon_sym_ATTR] = ACTIONS(33),
    [anon_sym_sem] = ACTIONS(35),
    [anon_sym_SEM] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(35),
    [anon_sym_TYPE] = ACTIONS(33),
    [anon_sym_INH] = ACTIONS(37),
    [anon_sym_inh] = ACTIONS(39),
    [anon_sym_SYN] = ACTIONS(41),
    [anon_sym_syn] = ACTIONS(43),
    [anon_sym_CHN] = ACTIONS(45),
    [anon_sym_chn] = ACTIONS(47),
    [anon_sym_INCLUDE] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__elem] = STATE(4),
    [sym_include_definition] = STATE(4),
    [sym_code_block_definition] = STATE(4),
    [sym_sem_definition] = STATE(4),
    [sym_type_definition] = STATE(4),
    [sym_attr_definition] = STATE(4),
    [sym_data_definition] = STATE(4),
    [sym_code_block] = STATE(46),
    [sym_data_keyword] = STATE(143),
    [sym_attr_keyword] = STATE(130),
    [sym_sem_keyword] = STATE(138),
    [sym_type_keyword] = STATE(137),
    [sym_include_keyword] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_varid] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_data] = ACTIONS(57),
    [anon_sym_DATA] = ACTIONS(60),
    [anon_sym_attr] = ACTIONS(63),
    [anon_sym_ATTR] = ACTIONS(66),
    [anon_sym_sem] = ACTIONS(69),
    [anon_sym_SEM] = ACTIONS(72),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_TYPE] = ACTIONS(78),
    [anon_sym_INCLUDE] = ACTIONS(81),
    [anon_sym_include] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_new_attr_style] = STATE(5),
    [sym_inh_attr_declaration_new_style] = STATE(18),
    [sym_syn_attr_declaration_new_style] = STATE(18),
    [sym_chn_attr_declaration_new_style] = STATE(18),
    [sym_inh_keyword] = STATE(113),
    [sym_syn_keyword] = STATE(112),
    [sym_chn_keyword] = STATE(111),
    [aux_sym_attr_declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_varid] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_data] = ACTIONS(89),
    [anon_sym_DATA] = ACTIONS(87),
    [anon_sym_attr] = ACTIONS(89),
    [anon_sym_ATTR] = ACTIONS(87),
    [anon_sym_sem] = ACTIONS(89),
    [anon_sym_SEM] = ACTIONS(87),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_TYPE] = ACTIONS(87),
    [anon_sym_INH] = ACTIONS(91),
    [anon_sym_inh] = ACTIONS(94),
    [anon_sym_SYN] = ACTIONS(97),
    [anon_sym_syn] = ACTIONS(100),
    [anon_sym_CHN] = ACTIONS(103),
    [anon_sym_chn] = ACTIONS(106),
    [anon_sym_INCLUDE] = ACTIONS(87),
    [anon_sym_include] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_sem_impl] = STATE(10),
    [sym_attribute] = STATE(32),
    [sym_local_attribute] = STATE(32),
    [aux_sym_sem_alternatives_repeat1] = STATE(25),
    [aux_sym_sem_alternatives_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [sym_conid] = ACTIONS(111),
    [sym_varid] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_data] = ACTIONS(115),
    [anon_sym_DATA] = ACTIONS(115),
    [anon_sym_attr] = ACTIONS(115),
    [anon_sym_ATTR] = ACTIONS(115),
    [anon_sym_sem] = ACTIONS(115),
    [anon_sym_SEM] = ACTIONS(115),
    [anon_sym_type] = ACTIONS(115),
    [anon_sym_TYPE] = ACTIONS(115),
    [anon_sym_INCLUDE] = ACTIONS(115),
    [anon_sym_include] = ACTIONS(115),
    [sym_lhs_keyword] = ACTIONS(113),
    [sym_loc_keyword] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(121),
    [sym_varid] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_data] = ACTIONS(124),
    [anon_sym_DATA] = ACTIONS(119),
    [anon_sym_attr] = ACTIONS(124),
    [anon_sym_ATTR] = ACTIONS(119),
    [anon_sym_sem] = ACTIONS(124),
    [anon_sym_SEM] = ACTIONS(119),
    [anon_sym_type] = ACTIONS(124),
    [anon_sym_TYPE] = ACTIONS(119),
    [anon_sym_INH] = ACTIONS(119),
    [anon_sym_inh] = ACTIONS(124),
    [anon_sym_SYN] = ACTIONS(119),
    [anon_sym_syn] = ACTIONS(124),
    [anon_sym_CHN] = ACTIONS(119),
    [anon_sym_chn] = ACTIONS(124),
    [anon_sym_INCLUDE] = ACTIONS(119),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_varid] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_data] = ACTIONS(130),
    [anon_sym_DATA] = ACTIONS(126),
    [anon_sym_attr] = ACTIONS(130),
    [anon_sym_ATTR] = ACTIONS(126),
    [anon_sym_sem] = ACTIONS(130),
    [anon_sym_SEM] = ACTIONS(126),
    [anon_sym_type] = ACTIONS(130),
    [anon_sym_TYPE] = ACTIONS(126),
    [anon_sym_INH] = ACTIONS(126),
    [anon_sym_inh] = ACTIONS(130),
    [anon_sym_SYN] = ACTIONS(126),
    [anon_sym_syn] = ACTIONS(130),
    [anon_sym_CHN] = ACTIONS(126),
    [anon_sym_chn] = ACTIONS(130),
    [anon_sym_INCLUDE] = ACTIONS(126),
    [anon_sym_include] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_varid] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_data] = ACTIONS(134),
    [anon_sym_DATA] = ACTIONS(132),
    [anon_sym_attr] = ACTIONS(134),
    [anon_sym_ATTR] = ACTIONS(132),
    [anon_sym_sem] = ACTIONS(134),
    [anon_sym_SEM] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(134),
    [anon_sym_TYPE] = ACTIONS(132),
    [anon_sym_INH] = ACTIONS(132),
    [anon_sym_inh] = ACTIONS(134),
    [anon_sym_SYN] = ACTIONS(132),
    [anon_sym_syn] = ACTIONS(134),
    [anon_sym_CHN] = ACTIONS(132),
    [anon_sym_chn] = ACTIONS(134),
    [anon_sym_INCLUDE] = ACTIONS(132),
    [anon_sym_include] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_sem_impl] = STATE(13),
    [sym_attribute] = STATE(32),
    [sym_local_attribute] = STATE(32),
    [aux_sym_sem_alternatives_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [sym_varid] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_data] = ACTIONS(138),
    [anon_sym_DATA] = ACTIONS(136),
    [anon_sym_attr] = ACTIONS(138),
    [anon_sym_ATTR] = ACTIONS(136),
    [anon_sym_sem] = ACTIONS(138),
    [anon_sym_SEM] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(138),
    [anon_sym_TYPE] = ACTIONS(136),
    [anon_sym_INCLUDE] = ACTIONS(136),
    [anon_sym_include] = ACTIONS(138),
    [sym_lhs_keyword] = ACTIONS(113),
    [sym_loc_keyword] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [sym_varid] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_DATA] = ACTIONS(140),
    [anon_sym_attr] = ACTIONS(142),
    [anon_sym_ATTR] = ACTIONS(140),
    [anon_sym_sem] = ACTIONS(142),
    [anon_sym_SEM] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_TYPE] = ACTIONS(140),
    [anon_sym_INH] = ACTIONS(140),
    [anon_sym_inh] = ACTIONS(142),
    [anon_sym_SYN] = ACTIONS(140),
    [anon_sym_syn] = ACTIONS(142),
    [anon_sym_CHN] = ACTIONS(140),
    [anon_sym_chn] = ACTIONS(142),
    [anon_sym_INCLUDE] = ACTIONS(140),
    [anon_sym_include] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [sym_varid] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(146),
    [anon_sym_DATA] = ACTIONS(144),
    [anon_sym_attr] = ACTIONS(146),
    [anon_sym_ATTR] = ACTIONS(144),
    [anon_sym_sem] = ACTIONS(146),
    [anon_sym_SEM] = ACTIONS(144),
    [anon_sym_type] = ACTIONS(146),
    [anon_sym_TYPE] = ACTIONS(144),
    [anon_sym_INH] = ACTIONS(144),
    [anon_sym_inh] = ACTIONS(146),
    [anon_sym_SYN] = ACTIONS(144),
    [anon_sym_syn] = ACTIONS(146),
    [anon_sym_CHN] = ACTIONS(144),
    [anon_sym_chn] = ACTIONS(146),
    [anon_sym_INCLUDE] = ACTIONS(144),
    [anon_sym_include] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_sem_impl] = STATE(13),
    [sym_attribute] = STATE(32),
    [sym_local_attribute] = STATE(32),
    [aux_sym_sem_alternatives_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_varid] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_data] = ACTIONS(153),
    [anon_sym_DATA] = ACTIONS(148),
    [anon_sym_attr] = ACTIONS(153),
    [anon_sym_ATTR] = ACTIONS(148),
    [anon_sym_sem] = ACTIONS(153),
    [anon_sym_SEM] = ACTIONS(148),
    [anon_sym_type] = ACTIONS(153),
    [anon_sym_TYPE] = ACTIONS(148),
    [anon_sym_INCLUDE] = ACTIONS(148),
    [anon_sym_include] = ACTIONS(153),
    [sym_lhs_keyword] = ACTIONS(150),
    [sym_loc_keyword] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_varid] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_data] = ACTIONS(124),
    [anon_sym_DATA] = ACTIONS(119),
    [anon_sym_attr] = ACTIONS(124),
    [anon_sym_ATTR] = ACTIONS(119),
    [anon_sym_sem] = ACTIONS(124),
    [anon_sym_SEM] = ACTIONS(119),
    [anon_sym_type] = ACTIONS(124),
    [anon_sym_TYPE] = ACTIONS(119),
    [anon_sym_INH] = ACTIONS(119),
    [anon_sym_inh] = ACTIONS(124),
    [anon_sym_SYN] = ACTIONS(119),
    [anon_sym_syn] = ACTIONS(124),
    [anon_sym_CHN] = ACTIONS(119),
    [anon_sym_chn] = ACTIONS(124),
    [anon_sym_INCLUDE] = ACTIONS(119),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [sym_varid] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(160),
    [anon_sym_DATA] = ACTIONS(158),
    [anon_sym_attr] = ACTIONS(160),
    [anon_sym_ATTR] = ACTIONS(158),
    [anon_sym_sem] = ACTIONS(160),
    [anon_sym_SEM] = ACTIONS(158),
    [anon_sym_type] = ACTIONS(160),
    [anon_sym_TYPE] = ACTIONS(158),
    [anon_sym_INH] = ACTIONS(158),
    [anon_sym_inh] = ACTIONS(160),
    [anon_sym_SYN] = ACTIONS(158),
    [anon_sym_syn] = ACTIONS(160),
    [anon_sym_CHN] = ACTIONS(158),
    [anon_sym_chn] = ACTIONS(160),
    [anon_sym_INCLUDE] = ACTIONS(158),
    [anon_sym_include] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_varid] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_data] = ACTIONS(164),
    [anon_sym_DATA] = ACTIONS(162),
    [anon_sym_attr] = ACTIONS(164),
    [anon_sym_ATTR] = ACTIONS(162),
    [anon_sym_sem] = ACTIONS(164),
    [anon_sym_SEM] = ACTIONS(162),
    [anon_sym_type] = ACTIONS(164),
    [anon_sym_TYPE] = ACTIONS(162),
    [anon_sym_INH] = ACTIONS(162),
    [anon_sym_inh] = ACTIONS(164),
    [anon_sym_SYN] = ACTIONS(162),
    [anon_sym_syn] = ACTIONS(164),
    [anon_sym_CHN] = ACTIONS(162),
    [anon_sym_chn] = ACTIONS(164),
    [anon_sym_INCLUDE] = ACTIONS(162),
    [anon_sym_include] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_varid] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_data] = ACTIONS(168),
    [anon_sym_DATA] = ACTIONS(166),
    [anon_sym_attr] = ACTIONS(168),
    [anon_sym_ATTR] = ACTIONS(166),
    [anon_sym_sem] = ACTIONS(168),
    [anon_sym_SEM] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(168),
    [anon_sym_TYPE] = ACTIONS(166),
    [anon_sym_INH] = ACTIONS(166),
    [anon_sym_inh] = ACTIONS(168),
    [anon_sym_SYN] = ACTIONS(166),
    [anon_sym_syn] = ACTIONS(168),
    [anon_sym_CHN] = ACTIONS(166),
    [anon_sym_chn] = ACTIONS(168),
    [anon_sym_INCLUDE] = ACTIONS(166),
    [anon_sym_include] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_varid] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_data] = ACTIONS(172),
    [anon_sym_DATA] = ACTIONS(170),
    [anon_sym_attr] = ACTIONS(172),
    [anon_sym_ATTR] = ACTIONS(170),
    [anon_sym_sem] = ACTIONS(172),
    [anon_sym_SEM] = ACTIONS(170),
    [anon_sym_type] = ACTIONS(172),
    [anon_sym_TYPE] = ACTIONS(170),
    [anon_sym_INH] = ACTIONS(170),
    [anon_sym_inh] = ACTIONS(172),
    [anon_sym_SYN] = ACTIONS(170),
    [anon_sym_syn] = ACTIONS(172),
    [anon_sym_CHN] = ACTIONS(170),
    [anon_sym_chn] = ACTIONS(172),
    [anon_sym_INCLUDE] = ACTIONS(170),
    [anon_sym_include] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_attr_declarations] = STATE(52),
    [sym_old_attr_style] = STATE(53),
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(18),
    [sym_syn_attr_declaration_new_style] = STATE(18),
    [sym_chn_attr_declaration_new_style] = STATE(18),
    [sym_inh_keyword] = STATE(113),
    [sym_syn_keyword] = STATE(112),
    [sym_chn_keyword] = STATE(111),
    [aux_sym_sem_alternatives_repeat1] = STATE(57),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
    [anon_sym_LBRACK] = ACTIONS(174),
    [sym_conid] = ACTIONS(176),
    [anon_sym_INH] = ACTIONS(39),
    [anon_sym_inh] = ACTIONS(37),
    [anon_sym_SYN] = ACTIONS(43),
    [anon_sym_syn] = ACTIONS(41),
    [anon_sym_CHN] = ACTIONS(47),
    [anon_sym_chn] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_attr_impl] = STATE(22),
    [aux_sym_attribute_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(180),
    [sym_varid] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_data] = ACTIONS(182),
    [anon_sym_DATA] = ACTIONS(178),
    [anon_sym_attr] = ACTIONS(182),
    [anon_sym_ATTR] = ACTIONS(178),
    [anon_sym_sem] = ACTIONS(182),
    [anon_sym_SEM] = ACTIONS(178),
    [anon_sym_type] = ACTIONS(182),
    [anon_sym_TYPE] = ACTIONS(178),
    [anon_sym_INCLUDE] = ACTIONS(178),
    [anon_sym_include] = ACTIONS(182),
    [sym_lhs_keyword] = ACTIONS(182),
    [sym_loc_keyword] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_varid] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_data] = ACTIONS(186),
    [anon_sym_DATA] = ACTIONS(184),
    [anon_sym_attr] = ACTIONS(186),
    [anon_sym_ATTR] = ACTIONS(184),
    [anon_sym_sem] = ACTIONS(186),
    [anon_sym_SEM] = ACTIONS(184),
    [anon_sym_type] = ACTIONS(186),
    [anon_sym_TYPE] = ACTIONS(184),
    [anon_sym_INH] = ACTIONS(184),
    [anon_sym_inh] = ACTIONS(186),
    [anon_sym_SYN] = ACTIONS(184),
    [anon_sym_syn] = ACTIONS(186),
    [anon_sym_CHN] = ACTIONS(184),
    [anon_sym_chn] = ACTIONS(186),
    [anon_sym_INCLUDE] = ACTIONS(184),
    [anon_sym_include] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_attr_impl] = STATE(22),
    [aux_sym_attribute_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(190),
    [sym_varid] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_data] = ACTIONS(193),
    [anon_sym_DATA] = ACTIONS(188),
    [anon_sym_attr] = ACTIONS(193),
    [anon_sym_ATTR] = ACTIONS(188),
    [anon_sym_sem] = ACTIONS(193),
    [anon_sym_SEM] = ACTIONS(188),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_TYPE] = ACTIONS(188),
    [anon_sym_INCLUDE] = ACTIONS(188),
    [anon_sym_include] = ACTIONS(193),
    [sym_lhs_keyword] = ACTIONS(193),
    [sym_loc_keyword] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_field] = STATE(26),
    [sym_var_type_definition] = STATE(43),
    [aux_sym_data_alternatives_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [sym_conid] = ACTIONS(197),
    [sym_varid] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_data] = ACTIONS(201),
    [anon_sym_DATA] = ACTIONS(201),
    [anon_sym_attr] = ACTIONS(201),
    [anon_sym_ATTR] = ACTIONS(201),
    [anon_sym_sem] = ACTIONS(201),
    [anon_sym_SEM] = ACTIONS(201),
    [anon_sym_type] = ACTIONS(201),
    [anon_sym_TYPE] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_include] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_field] = STATE(23),
    [sym_var_type_definition] = STATE(43),
    [aux_sym_data_alternatives_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [sym_conid] = ACTIONS(197),
    [sym_varid] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_data] = ACTIONS(205),
    [anon_sym_DATA] = ACTIONS(205),
    [anon_sym_attr] = ACTIONS(205),
    [anon_sym_ATTR] = ACTIONS(205),
    [anon_sym_sem] = ACTIONS(205),
    [anon_sym_SEM] = ACTIONS(205),
    [anon_sym_type] = ACTIONS(205),
    [anon_sym_TYPE] = ACTIONS(205),
    [anon_sym_INCLUDE] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [sym_conid] = ACTIONS(209),
    [sym_varid] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_data] = ACTIONS(212),
    [anon_sym_DATA] = ACTIONS(212),
    [anon_sym_attr] = ACTIONS(212),
    [anon_sym_ATTR] = ACTIONS(212),
    [anon_sym_sem] = ACTIONS(212),
    [anon_sym_SEM] = ACTIONS(212),
    [anon_sym_type] = ACTIONS(212),
    [anon_sym_TYPE] = ACTIONS(212),
    [anon_sym_INCLUDE] = ACTIONS(212),
    [anon_sym_include] = ACTIONS(212),
    [sym_lhs_keyword] = ACTIONS(212),
    [sym_loc_keyword] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_field] = STATE(26),
    [sym_var_type_definition] = STATE(43),
    [aux_sym_data_alternatives_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [sym_conid] = ACTIONS(216),
    [sym_varid] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_data] = ACTIONS(222),
    [anon_sym_DATA] = ACTIONS(222),
    [anon_sym_attr] = ACTIONS(222),
    [anon_sym_ATTR] = ACTIONS(222),
    [anon_sym_sem] = ACTIONS(222),
    [anon_sym_SEM] = ACTIONS(222),
    [anon_sym_type] = ACTIONS(222),
    [anon_sym_TYPE] = ACTIONS(222),
    [anon_sym_INCLUDE] = ACTIONS(222),
    [anon_sym_include] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(224),
    [sym_varid] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_data] = ACTIONS(226),
    [anon_sym_DATA] = ACTIONS(224),
    [anon_sym_attr] = ACTIONS(226),
    [anon_sym_ATTR] = ACTIONS(224),
    [anon_sym_sem] = ACTIONS(226),
    [anon_sym_SEM] = ACTIONS(224),
    [anon_sym_type] = ACTIONS(226),
    [anon_sym_TYPE] = ACTIONS(224),
    [anon_sym_INCLUDE] = ACTIONS(224),
    [anon_sym_include] = ACTIONS(226),
    [sym_lhs_keyword] = ACTIONS(226),
    [sym_loc_keyword] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [sym_varid] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_DATA] = ACTIONS(140),
    [anon_sym_attr] = ACTIONS(142),
    [anon_sym_ATTR] = ACTIONS(140),
    [anon_sym_sem] = ACTIONS(142),
    [anon_sym_SEM] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_TYPE] = ACTIONS(140),
    [anon_sym_INCLUDE] = ACTIONS(140),
    [anon_sym_include] = ACTIONS(142),
    [sym_lhs_keyword] = ACTIONS(142),
    [sym_loc_keyword] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [sym_varid] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_data] = ACTIONS(230),
    [anon_sym_DATA] = ACTIONS(228),
    [anon_sym_attr] = ACTIONS(230),
    [anon_sym_ATTR] = ACTIONS(228),
    [anon_sym_sem] = ACTIONS(230),
    [anon_sym_SEM] = ACTIONS(228),
    [anon_sym_type] = ACTIONS(230),
    [anon_sym_TYPE] = ACTIONS(228),
    [anon_sym_INCLUDE] = ACTIONS(228),
    [anon_sym_include] = ACTIONS(230),
    [sym_lhs_keyword] = ACTIONS(230),
    [sym_loc_keyword] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(232),
    [sym_varid] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_data] = ACTIONS(234),
    [anon_sym_DATA] = ACTIONS(232),
    [anon_sym_attr] = ACTIONS(234),
    [anon_sym_ATTR] = ACTIONS(232),
    [anon_sym_sem] = ACTIONS(234),
    [anon_sym_SEM] = ACTIONS(232),
    [anon_sym_type] = ACTIONS(234),
    [anon_sym_TYPE] = ACTIONS(232),
    [anon_sym_INCLUDE] = ACTIONS(232),
    [anon_sym_include] = ACTIONS(234),
    [sym_lhs_keyword] = ACTIONS(234),
    [sym_loc_keyword] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_data_alternatives] = STATE(31),
    [aux_sym_data_definition_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_varid] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_DATA] = ACTIONS(236),
    [anon_sym_attr] = ACTIONS(241),
    [anon_sym_ATTR] = ACTIONS(236),
    [anon_sym_sem] = ACTIONS(241),
    [anon_sym_SEM] = ACTIONS(236),
    [anon_sym_type] = ACTIONS(241),
    [anon_sym_TYPE] = ACTIONS(236),
    [anon_sym_INCLUDE] = ACTIONS(236),
    [anon_sym_include] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_varid] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_data] = ACTIONS(245),
    [anon_sym_DATA] = ACTIONS(243),
    [anon_sym_attr] = ACTIONS(245),
    [anon_sym_ATTR] = ACTIONS(243),
    [anon_sym_sem] = ACTIONS(245),
    [anon_sym_SEM] = ACTIONS(243),
    [anon_sym_type] = ACTIONS(245),
    [anon_sym_TYPE] = ACTIONS(243),
    [anon_sym_INCLUDE] = ACTIONS(243),
    [anon_sym_include] = ACTIONS(245),
    [sym_lhs_keyword] = ACTIONS(245),
    [sym_loc_keyword] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_data_alternatives] = STATE(31),
    [aux_sym_data_definition_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(249),
    [sym_varid] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_data] = ACTIONS(251),
    [anon_sym_DATA] = ACTIONS(247),
    [anon_sym_attr] = ACTIONS(251),
    [anon_sym_ATTR] = ACTIONS(247),
    [anon_sym_sem] = ACTIONS(251),
    [anon_sym_SEM] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_TYPE] = ACTIONS(247),
    [anon_sym_INCLUDE] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_sem_alternatives] = STATE(34),
    [aux_sym_sem_definition_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(255),
    [sym_varid] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_data] = ACTIONS(258),
    [anon_sym_DATA] = ACTIONS(253),
    [anon_sym_attr] = ACTIONS(258),
    [anon_sym_ATTR] = ACTIONS(253),
    [anon_sym_sem] = ACTIONS(258),
    [anon_sym_SEM] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(258),
    [anon_sym_TYPE] = ACTIONS(253),
    [anon_sym_INCLUDE] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [sym_varid] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_data] = ACTIONS(262),
    [anon_sym_DATA] = ACTIONS(260),
    [anon_sym_attr] = ACTIONS(262),
    [anon_sym_ATTR] = ACTIONS(260),
    [anon_sym_sem] = ACTIONS(262),
    [anon_sym_SEM] = ACTIONS(260),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_TYPE] = ACTIONS(260),
    [anon_sym_INCLUDE] = ACTIONS(260),
    [anon_sym_include] = ACTIONS(262),
    [sym_lhs_keyword] = ACTIONS(262),
    [sym_loc_keyword] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_data_alternatives] = STATE(33),
    [aux_sym_data_definition_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(249),
    [sym_varid] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_DATA] = ACTIONS(264),
    [anon_sym_attr] = ACTIONS(266),
    [anon_sym_ATTR] = ACTIONS(264),
    [anon_sym_sem] = ACTIONS(266),
    [anon_sym_SEM] = ACTIONS(264),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_TYPE] = ACTIONS(264),
    [anon_sym_INCLUDE] = ACTIONS(264),
    [anon_sym_include] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_sem_alternatives] = STATE(34),
    [aux_sym_sem_definition_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [sym_varid] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_DATA] = ACTIONS(268),
    [anon_sym_attr] = ACTIONS(272),
    [anon_sym_ATTR] = ACTIONS(268),
    [anon_sym_sem] = ACTIONS(272),
    [anon_sym_SEM] = ACTIONS(268),
    [anon_sym_type] = ACTIONS(272),
    [anon_sym_TYPE] = ACTIONS(268),
    [anon_sym_INCLUDE] = ACTIONS(268),
    [anon_sym_include] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [sym_varid] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_data] = ACTIONS(276),
    [anon_sym_DATA] = ACTIONS(274),
    [anon_sym_attr] = ACTIONS(276),
    [anon_sym_ATTR] = ACTIONS(274),
    [anon_sym_sem] = ACTIONS(276),
    [anon_sym_SEM] = ACTIONS(274),
    [anon_sym_type] = ACTIONS(276),
    [anon_sym_TYPE] = ACTIONS(274),
    [anon_sym_INCLUDE] = ACTIONS(274),
    [anon_sym_include] = ACTIONS(276),
    [sym_lhs_keyword] = ACTIONS(276),
    [sym_loc_keyword] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_sem_alternatives] = STATE(37),
    [aux_sym_sem_definition_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(270),
    [sym_varid] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_data] = ACTIONS(280),
    [anon_sym_DATA] = ACTIONS(278),
    [anon_sym_attr] = ACTIONS(280),
    [anon_sym_ATTR] = ACTIONS(278),
    [anon_sym_sem] = ACTIONS(280),
    [anon_sym_SEM] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(280),
    [anon_sym_TYPE] = ACTIONS(278),
    [anon_sym_INCLUDE] = ACTIONS(278),
    [anon_sym_include] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [sym_conid] = ACTIONS(142),
    [sym_varid] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_DATA] = ACTIONS(142),
    [anon_sym_attr] = ACTIONS(142),
    [anon_sym_ATTR] = ACTIONS(142),
    [anon_sym_sem] = ACTIONS(142),
    [anon_sym_SEM] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_TYPE] = ACTIONS(142),
    [anon_sym_INCLUDE] = ACTIONS(142),
    [anon_sym_include] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [sym_conid] = ACTIONS(146),
    [sym_varid] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(146),
    [anon_sym_DATA] = ACTIONS(146),
    [anon_sym_attr] = ACTIONS(146),
    [anon_sym_ATTR] = ACTIONS(146),
    [anon_sym_sem] = ACTIONS(146),
    [anon_sym_SEM] = ACTIONS(146),
    [anon_sym_type] = ACTIONS(146),
    [anon_sym_TYPE] = ACTIONS(146),
    [anon_sym_INCLUDE] = ACTIONS(146),
    [anon_sym_include] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [sym_conid] = ACTIONS(160),
    [sym_varid] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(160),
    [anon_sym_DATA] = ACTIONS(160),
    [anon_sym_attr] = ACTIONS(160),
    [anon_sym_ATTR] = ACTIONS(160),
    [anon_sym_sem] = ACTIONS(160),
    [anon_sym_SEM] = ACTIONS(160),
    [anon_sym_type] = ACTIONS(160),
    [anon_sym_TYPE] = ACTIONS(160),
    [anon_sym_INCLUDE] = ACTIONS(160),
    [anon_sym_include] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(282),
    [sym_conid] = ACTIONS(284),
    [sym_varid] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_data] = ACTIONS(284),
    [anon_sym_DATA] = ACTIONS(284),
    [anon_sym_attr] = ACTIONS(284),
    [anon_sym_ATTR] = ACTIONS(284),
    [anon_sym_sem] = ACTIONS(284),
    [anon_sym_SEM] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [anon_sym_TYPE] = ACTIONS(284),
    [anon_sym_INCLUDE] = ACTIONS(284),
    [anon_sym_include] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_varid] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_DATA] = ACTIONS(140),
    [anon_sym_attr] = ACTIONS(142),
    [anon_sym_ATTR] = ACTIONS(140),
    [anon_sym_sem] = ACTIONS(142),
    [anon_sym_SEM] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_TYPE] = ACTIONS(140),
    [anon_sym_INCLUDE] = ACTIONS(140),
    [anon_sym_include] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_COLON_COLON] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_varid] = ACTIONS(288),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_DATA] = ACTIONS(286),
    [anon_sym_attr] = ACTIONS(288),
    [anon_sym_ATTR] = ACTIONS(286),
    [anon_sym_sem] = ACTIONS(288),
    [anon_sym_SEM] = ACTIONS(286),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_TYPE] = ACTIONS(286),
    [anon_sym_INCLUDE] = ACTIONS(286),
    [anon_sym_include] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_varid] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(292),
    [anon_sym_data] = ACTIONS(292),
    [anon_sym_DATA] = ACTIONS(290),
    [anon_sym_attr] = ACTIONS(292),
    [anon_sym_ATTR] = ACTIONS(290),
    [anon_sym_sem] = ACTIONS(292),
    [anon_sym_SEM] = ACTIONS(290),
    [anon_sym_type] = ACTIONS(292),
    [anon_sym_TYPE] = ACTIONS(290),
    [anon_sym_INCLUDE] = ACTIONS(290),
    [anon_sym_include] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_varid] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_data] = ACTIONS(296),
    [anon_sym_DATA] = ACTIONS(294),
    [anon_sym_attr] = ACTIONS(296),
    [anon_sym_ATTR] = ACTIONS(294),
    [anon_sym_sem] = ACTIONS(296),
    [anon_sym_SEM] = ACTIONS(294),
    [anon_sym_type] = ACTIONS(296),
    [anon_sym_TYPE] = ACTIONS(294),
    [anon_sym_INCLUDE] = ACTIONS(294),
    [anon_sym_include] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_varid] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_data] = ACTIONS(300),
    [anon_sym_DATA] = ACTIONS(298),
    [anon_sym_attr] = ACTIONS(300),
    [anon_sym_ATTR] = ACTIONS(298),
    [anon_sym_sem] = ACTIONS(300),
    [anon_sym_SEM] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(300),
    [anon_sym_TYPE] = ACTIONS(298),
    [anon_sym_INCLUDE] = ACTIONS(298),
    [anon_sym_include] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_varid] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_data] = ACTIONS(304),
    [anon_sym_DATA] = ACTIONS(302),
    [anon_sym_attr] = ACTIONS(304),
    [anon_sym_ATTR] = ACTIONS(302),
    [anon_sym_sem] = ACTIONS(304),
    [anon_sym_SEM] = ACTIONS(302),
    [anon_sym_type] = ACTIONS(304),
    [anon_sym_TYPE] = ACTIONS(302),
    [anon_sym_INCLUDE] = ACTIONS(302),
    [anon_sym_include] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym_varid] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_data] = ACTIONS(308),
    [anon_sym_DATA] = ACTIONS(306),
    [anon_sym_attr] = ACTIONS(308),
    [anon_sym_ATTR] = ACTIONS(306),
    [anon_sym_sem] = ACTIONS(308),
    [anon_sym_SEM] = ACTIONS(306),
    [anon_sym_type] = ACTIONS(308),
    [anon_sym_TYPE] = ACTIONS(306),
    [anon_sym_INCLUDE] = ACTIONS(306),
    [anon_sym_include] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_varid] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_data] = ACTIONS(312),
    [anon_sym_DATA] = ACTIONS(310),
    [anon_sym_attr] = ACTIONS(312),
    [anon_sym_ATTR] = ACTIONS(310),
    [anon_sym_sem] = ACTIONS(312),
    [anon_sym_SEM] = ACTIONS(310),
    [anon_sym_type] = ACTIONS(312),
    [anon_sym_TYPE] = ACTIONS(310),
    [anon_sym_INCLUDE] = ACTIONS(310),
    [anon_sym_include] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_varid] = ACTIONS(316),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_data] = ACTIONS(316),
    [anon_sym_DATA] = ACTIONS(314),
    [anon_sym_attr] = ACTIONS(316),
    [anon_sym_ATTR] = ACTIONS(314),
    [anon_sym_sem] = ACTIONS(316),
    [anon_sym_SEM] = ACTIONS(314),
    [anon_sym_type] = ACTIONS(316),
    [anon_sym_TYPE] = ACTIONS(314),
    [anon_sym_INCLUDE] = ACTIONS(314),
    [anon_sym_include] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_varid] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_data] = ACTIONS(35),
    [anon_sym_DATA] = ACTIONS(33),
    [anon_sym_attr] = ACTIONS(35),
    [anon_sym_ATTR] = ACTIONS(33),
    [anon_sym_sem] = ACTIONS(35),
    [anon_sym_SEM] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(35),
    [anon_sym_TYPE] = ACTIONS(33),
    [anon_sym_INCLUDE] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [sym_varid] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_data] = ACTIONS(320),
    [anon_sym_DATA] = ACTIONS(318),
    [anon_sym_attr] = ACTIONS(320),
    [anon_sym_ATTR] = ACTIONS(318),
    [anon_sym_sem] = ACTIONS(320),
    [anon_sym_SEM] = ACTIONS(318),
    [anon_sym_type] = ACTIONS(320),
    [anon_sym_TYPE] = ACTIONS(318),
    [anon_sym_INCLUDE] = ACTIONS(318),
    [anon_sym_include] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_varid] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_data] = ACTIONS(324),
    [anon_sym_DATA] = ACTIONS(322),
    [anon_sym_attr] = ACTIONS(324),
    [anon_sym_ATTR] = ACTIONS(322),
    [anon_sym_sem] = ACTIONS(324),
    [anon_sym_SEM] = ACTIONS(322),
    [anon_sym_type] = ACTIONS(324),
    [anon_sym_TYPE] = ACTIONS(322),
    [anon_sym_INCLUDE] = ACTIONS(322),
    [anon_sym_include] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_pattern1] = STATE(58),
    [aux_sym_pattern_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [sym_varid] = ACTIONS(332),
    [anon_sym_COLON_EQ] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_conid] = ACTIONS(334),
    [anon_sym_INH] = ACTIONS(212),
    [anon_sym_inh] = ACTIONS(207),
    [anon_sym_SYN] = ACTIONS(212),
    [anon_sym_syn] = ACTIONS(207),
    [anon_sym_CHN] = ACTIONS(212),
    [anon_sym_chn] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_pattern1] = STATE(58),
    [aux_sym_pattern_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [sym_varid] = ACTIONS(345),
    [anon_sym_COLON_EQ] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_at_pattern1] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [sym_varid] = ACTIONS(348),
    [anon_sym_COLON_EQ] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_pattern1] = STATE(56),
    [aux_sym_pattern_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [sym_varid] = ACTIONS(332),
    [anon_sym_COLON_EQ] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_pattern] = STATE(105),
    [sym_pattern1] = STATE(96),
    [sym_pattern_list] = STATE(135),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym__] = ACTIONS(330),
    [sym_conid] = ACTIONS(356),
    [sym_varid] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym__] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(358),
    [sym_varid] = ACTIONS(358),
    [anon_sym_COLON_EQ] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(360),
    [sym_varid] = ACTIONS(360),
    [anon_sym_COLON_EQ] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym__] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [sym_varid] = ACTIONS(362),
    [anon_sym_COLON_EQ] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym_use_operator] = STATE(115),
    [sym_use_keyword] = STATE(118),
    [sym_type_symbol] = STATE(94),
    [anon_sym_use] = ACTIONS(364),
    [anon_sym_USE] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [sym_varid] = ACTIONS(348),
    [anon_sym_COLON_EQ] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [sym_type] = STATE(71),
    [sym_code_block] = STATE(83),
    [aux_sym_type_definition_repeat1] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(370),
    [sym_conid] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [aux_sym_varids_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_use] = ACTIONS(378),
    [anon_sym_USE] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(380),
    [anon_sym_COLON_COLON] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym_pattern] = STATE(120),
    [sym_pattern1] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym__] = ACTIONS(330),
    [sym_conid] = ACTIONS(356),
    [sym_varid] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym_varids_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_use] = ACTIONS(382),
    [anon_sym_USE] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_COLON_COLON] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_type] = STATE(71),
    [sym_code_block] = STATE(83),
    [aux_sym_type_definition_repeat1] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(386),
    [sym_conid] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym_pattern] = STATE(102),
    [sym_pattern1] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym__] = ACTIONS(330),
    [sym_conid] = ACTIONS(356),
    [sym_varid] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [aux_sym_varids_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_use] = ACTIONS(397),
    [anon_sym_USE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_type] = STATE(67),
    [sym_code_block] = STATE(83),
    [aux_sym_type_definition_repeat1] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_conid] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_syn_attr_declaration_old_style] = STATE(75),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(75),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_varid] = ACTIONS(405),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym_syn_attr_declaration_old_style] = STATE(75),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(75),
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym_syn_attr_declaration_old_style] = STATE(90),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(90),
    [anon_sym_PIPE] = ACTIONS(412),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_syn_attr_declaration_old_style] = STATE(84),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(84),
    [anon_sym_PIPE] = ACTIONS(414),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_expr] = STATE(35),
    [sym_layout_code_block] = STATE(27),
    [sym_code_block] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym__layout_open_brace] = ACTIONS(418),
  },
  [80] = {
    [sym_inh_attr_declaration_old_style] = STATE(80),
    [sym_varids] = STATE(108),
    [aux_sym_old_attr_style_repeat1] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(420),
    [sym_varid] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_inh_attr_declaration_old_style] = STATE(88),
    [sym_varids] = STATE(108),
    [aux_sym_old_attr_style_repeat1] = STATE(88),
    [anon_sym_PIPE] = ACTIONS(425),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym_expr] = STATE(30),
    [sym_layout_code_block] = STATE(27),
    [sym_code_block] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym__layout_open_brace] = ACTIONS(418),
  },
  [83] = {
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_conid] = ACTIONS(144),
    [sym_varid] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_syn_attr_declaration_old_style] = STATE(75),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(75),
    [anon_sym_PIPE] = ACTIONS(412),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_syn_attr_declaration_old_style] = STATE(76),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(427),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym_syn_attr_declaration_old_style] = STATE(75),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(75),
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [sym_conid] = ACTIONS(140),
    [sym_varid] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_inh_attr_declaration_old_style] = STATE(80),
    [sym_varids] = STATE(108),
    [aux_sym_old_attr_style_repeat1] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(431),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [sym_syn_attr_declaration_old_style] = STATE(75),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(75),
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym_syn_attr_declaration_old_style] = STATE(75),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(75),
    [anon_sym_PIPE] = ACTIONS(435),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym_syn_attr_declaration_old_style] = STATE(89),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(89),
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_use] = ACTIONS(397),
    [anon_sym_USE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym_syn_attr_declaration_old_style] = STATE(86),
    [sym_varids] = STATE(65),
    [aux_sym_old_attr_style_repeat2] = STATE(86),
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_varid] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [sym_type] = STATE(107),
    [sym_code_block] = STATE(83),
    [sym_conid] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [sym_type] = STATE(15),
    [sym_code_block] = STATE(12),
    [sym_conid] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_COLON_EQ] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [sym_type] = STATE(117),
    [sym_code_block] = STATE(83),
    [sym_conid] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym_type] = STATE(42),
    [sym_code_block] = STATE(41),
    [sym_conid] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [sym_pattern1] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym__] = ACTIONS(330),
    [sym_varid] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_type] = STATE(122),
    [sym_code_block] = STATE(83),
    [sym_conid] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [aux_sym_pattern_list_repeat1] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [sym_assign_symbol] = STATE(79),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_COLON_EQ] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [aux_sym_pattern_list_repeat1] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_COMMA] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym_attr_impl] = STATE(20),
    [aux_sym_attribute_repeat1] = STATE(20),
    [anon_sym_DOT] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [aux_sym_pattern_list_repeat1] = STATE(103),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_COMMA] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [sym_type_symbol] = STATE(98),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [anon_sym_PIPE] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_varid] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym_type_symbol] = STATE(100),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [sym_type_symbol] = STATE(95),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [sym_assign_symbol] = STATE(82),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_COLON_EQ] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [sym_var_type_definitions] = STATE(21),
    [sym_var_type_definition] = STATE(8),
    [sym_varid] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [sym_var_type_definitions] = STATE(16),
    [sym_var_type_definition] = STATE(8),
    [sym_varid] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [sym_var_type_definitions] = STATE(17),
    [sym_var_type_definition] = STATE(8),
    [sym_varid] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [aux_sym_layout_code_block_repeat1] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [sym__layout_line_content] = ACTIONS(462),
    [sym__layout_close_brace] = ACTIONS(464),
  },
  [115] = {
    [sym_type_symbol] = STATE(97),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [aux_sym_layout_code_block_repeat1] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [sym__layout_line_content] = ACTIONS(466),
    [sym__layout_close_brace] = ACTIONS(469),
  },
  [117] = {
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [sym_varid] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [sym_code_block] = STATE(123),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_COLON_COLON] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(445),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [sym__layout_open_brace] = ACTIONS(479),
  },
  [122] = {
    [anon_sym_PIPE] = ACTIONS(481),
    [sym_varid] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_code_block] = STATE(119),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym_conid] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [sym_code_block] = STATE(51),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [sym_local_attr_impl] = STATE(38),
    [anon_sym_DOT] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [aux_sym_layout_code_block_repeat1] = STATE(114),
    [sym_comment] = ACTIONS(3),
    [sym__layout_line_content] = ACTIONS(489),
  },
  [128] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(6),
    [sym_conid] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [sym_var_type_definition] = STATE(14),
    [sym_varid] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(19),
    [sym_conid] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [sym_varid] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [anon_sym_EQ] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [sym_varid] = ACTIONS(501),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [anon_sym_DQUOTE] = ACTIONS(505),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym_conid] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [sym_conid] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [sym_string_content] = ACTIONS(511),
    [sym_comment] = ACTIONS(513),
  },
  [140] = {
    [sym_conid] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
  },
  [141] = {
    [sym_varid] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [sym_varid] = ACTIONS(519),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_conid] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
  },
  [144] = {
    [anon_sym_LBRACK] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [anon_sym_DQUOTE] = ACTIONS(525),
    [sym_comment] = ACTIONS(3),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [sym_conid] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [sym_conid] = ACTIONS(533),
    [sym_comment] = ACTIONS(3),
  },
  [150] = {
    [sym_conid] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
  },
  [151] = {
    [sym_conid] = ACTIONS(537),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [sym_code_block_content] = ACTIONS(539),
    [sym_comment] = ACTIONS(513),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
  },
  [154] = {
    [sym_varid] = ACTIONS(543),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [anon_sym_RBRACE] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
  },
  [156] = {
    [anon_sym_RBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [anon_sym_RBRACE] = ACTIONS(549),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [sym_code_block_content] = ACTIONS(551),
    [sym_comment] = ACTIONS(513),
  },
  [159] = {
    [anon_sym_LBRACE] = ACTIONS(553),
    [sym_comment] = ACTIONS(3),
  },
  [160] = {
    [sym_code_block_content] = ACTIONS(555),
    [sym_comment] = ACTIONS(513),
  },
  [161] = {
    [sym_code_block_content] = ACTIONS(557),
    [sym_comment] = ACTIONS(513),
  },
  [162] = {
    [sym_code_block_content] = ACTIONS(559),
    [sym_comment] = ACTIONS(513),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(125),
  [9] = {.count = 1, .reusable = false}, SHIFT(152),
  [11] = {.count = 1, .reusable = false}, SHIFT(151),
  [13] = {.count = 1, .reusable = true}, SHIFT(151),
  [15] = {.count = 1, .reusable = false}, SHIFT(150),
  [17] = {.count = 1, .reusable = true}, SHIFT(150),
  [19] = {.count = 1, .reusable = false}, SHIFT(149),
  [21] = {.count = 1, .reusable = true}, SHIFT(149),
  [23] = {.count = 1, .reusable = false}, SHIFT(148),
  [25] = {.count = 1, .reusable = true}, SHIFT(148),
  [27] = {.count = 1, .reusable = true}, SHIFT(147),
  [29] = {.count = 1, .reusable = false}, SHIFT(147),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_attr_declarations, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(134),
  [39] = {.count = 1, .reusable = false}, SHIFT(134),
  [41] = {.count = 1, .reusable = true}, SHIFT(142),
  [43] = {.count = 1, .reusable = false}, SHIFT(142),
  [45] = {.count = 1, .reusable = true}, SHIFT(131),
  [47] = {.count = 1, .reusable = false}, SHIFT(131),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [69] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(134),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(134),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(142),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(142),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(131),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(131),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 2),
  [111] = {.count = 1, .reusable = false}, SHIFT(25),
  [113] = {.count = 1, .reusable = false}, SHIFT(104),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(126),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(129),
  [124] = {.count = 1, .reusable = false}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [128] = {.count = 1, .reusable = true}, SHIFT(129),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definitions, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definitions, 2),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_code_block, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_code_block, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(104),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(126),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_new_attr_style, 1),
  [174] = {.count = 1, .reusable = true}, SHIFT(81),
  [176] = {.count = 1, .reusable = false}, SHIFT(57),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [180] = {.count = 1, .reusable = true}, SHIFT(154),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(154),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attribute_repeat1, 2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [197] = {.count = 1, .reusable = false}, SHIFT(43),
  [199] = {.count = 1, .reusable = false}, SHIFT(106),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(25),
  [212] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(43),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(106),
  [222] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_layout_code_block, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_layout_code_block, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_attr_impl, 4),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_attr_impl, 4),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(140),
  [241] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_sem_impl, 1),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_sem_impl, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [249] = {.count = 1, .reusable = true}, SHIFT(140),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_data_definition, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2), SHIFT_REPEAT(128),
  [258] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_local_attr_impl, 4),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_local_attr_impl, 4),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_data_definition, 2),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 3),
  [270] = {.count = 1, .reusable = true}, SHIFT(128),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_sem_definition, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_local_attribute, 2),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_local_attribute, 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 2),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_sem_definition, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 5),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_definition, 1),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_code_block_definition, 1),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 7),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 5),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_type_definition, 5),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 6),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_type_definition, 6),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 4),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_definition, 2),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_code_block_definition, 2),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_attr_definition, 3),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_include_definition, 4),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_include_definition, 4),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 6),
  [326] = {.count = 1, .reusable = true}, SHIFT(61),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [330] = {.count = 1, .reusable = true}, SHIFT(66),
  [332] = {.count = 1, .reusable = true}, SHIFT(59),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(57),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(61),
  [340] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(66),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(59),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 1),
  [350] = {.count = 1, .reusable = true}, SHIFT(99),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [354] = {.count = 1, .reusable = true}, SHIFT(62),
  [356] = {.count = 1, .reusable = true}, SHIFT(60),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 2),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_at_pattern1, 2),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 3),
  [364] = {.count = 1, .reusable = true}, SHIFT(159),
  [366] = {.count = 1, .reusable = false}, SHIFT(124),
  [368] = {.count = 1, .reusable = true}, SHIFT(124),
  [370] = {.count = 1, .reusable = true}, SHIFT(49),
  [372] = {.count = 1, .reusable = true}, SHIFT(83),
  [374] = {.count = 1, .reusable = false}, SHIFT(158),
  [376] = {.count = 1, .reusable = true}, SHIFT(141),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [386] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(83),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(158),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(141),
  [397] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [401] = {.count = 1, .reusable = true}, SHIFT(48),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(68),
  [408] = {.count = 1, .reusable = true}, SHIFT(45),
  [410] = {.count = 1, .reusable = true}, SHIFT(68),
  [412] = {.count = 1, .reusable = true}, SHIFT(91),
  [414] = {.count = 1, .reusable = true}, SHIFT(85),
  [416] = {.count = 1, .reusable = false}, SHIFT(162),
  [418] = {.count = 1, .reusable = true}, SHIFT(127),
  [420] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(68),
  [425] = {.count = 1, .reusable = true}, SHIFT(78),
  [427] = {.count = 1, .reusable = true}, SHIFT(50),
  [429] = {.count = 1, .reusable = true}, SHIFT(47),
  [431] = {.count = 1, .reusable = true}, SHIFT(77),
  [433] = {.count = 1, .reusable = true}, SHIFT(55),
  [435] = {.count = 1, .reusable = true}, SHIFT(93),
  [437] = {.count = 1, .reusable = true}, SHIFT(12),
  [439] = {.count = 1, .reusable = false}, SHIFT(160),
  [441] = {.count = 1, .reusable = true}, SHIFT(41),
  [443] = {.count = 1, .reusable = false}, SHIFT(161),
  [445] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(69),
  [450] = {.count = 1, .reusable = true}, SHIFT(121),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 2),
  [454] = {.count = 1, .reusable = true}, SHIFT(69),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 1),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [460] = {.count = 1, .reusable = true}, SHIFT(109),
  [462] = {.count = 1, .reusable = true}, SHIFT(116),
  [464] = {.count = 1, .reusable = true}, SHIFT(29),
  [466] = {.count = 2, .reusable = true}, REDUCE(aux_sym_layout_code_block_repeat1, 2), SHIFT_REPEAT(116),
  [469] = {.count = 1, .reusable = true}, REDUCE(aux_sym_layout_code_block_repeat1, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 4),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_use_operator, 3),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_use_operator, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_assign_symbol, 1),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_assign_symbol, 1),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_type_symbol, 1),
  [487] = {.count = 1, .reusable = true}, SHIFT(72),
  [489] = {.count = 1, .reusable = true}, SHIFT(114),
  [491] = {.count = 1, .reusable = true}, SHIFT(6),
  [493] = {.count = 1, .reusable = true}, SHIFT(19),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [497] = {.count = 1, .reusable = true}, SHIFT(144),
  [499] = {.count = 1, .reusable = true}, SHIFT(44),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [503] = {.count = 1, .reusable = true}, SHIFT(64),
  [505] = {.count = 1, .reusable = true}, SHIFT(139),
  [507] = {.count = 1, .reusable = true}, SHIFT(132),
  [509] = {.count = 1, .reusable = true}, SHIFT(39),
  [511] = {.count = 1, .reusable = false}, SHIFT(145),
  [513] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [515] = {.count = 1, .reusable = true}, SHIFT(24),
  [517] = {.count = 1, .reusable = true}, SHIFT(92),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(36),
  [523] = {.count = 1, .reusable = true}, SHIFT(74),
  [525] = {.count = 1, .reusable = true}, SHIFT(54),
  [527] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_include_keyword, 1),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_type_keyword, 1),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_sem_keyword, 1),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [539] = {.count = 1, .reusable = false}, SHIFT(133),
  [541] = {.count = 1, .reusable = true}, SHIFT(87),
  [543] = {.count = 1, .reusable = true}, SHIFT(110),
  [545] = {.count = 1, .reusable = true}, SHIFT(11),
  [547] = {.count = 1, .reusable = true}, SHIFT(40),
  [549] = {.count = 1, .reusable = true}, SHIFT(28),
  [551] = {.count = 1, .reusable = false}, SHIFT(153),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_use_keyword, 1),
  [555] = {.count = 1, .reusable = false}, SHIFT(155),
  [557] = {.count = 1, .reusable = false}, SHIFT(156),
  [559] = {.count = 1, .reusable = false}, SHIFT(157),
};

void *tree_sitter_uuag_external_scanner_create(void);
void tree_sitter_uuag_external_scanner_destroy(void *);
bool tree_sitter_uuag_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_uuag_external_scanner_serialize(void *, char *);
void tree_sitter_uuag_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_uuag(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_uuag_external_scanner_create,
      tree_sitter_uuag_external_scanner_destroy,
      tree_sitter_uuag_external_scanner_scan,
      tree_sitter_uuag_external_scanner_serialize,
      tree_sitter_uuag_external_scanner_deserialize,
    },
  };
  return &language;
}
