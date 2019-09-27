#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 154
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_PIPE = 1,
  anon_sym_DOT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym__ = 5,
  anon_sym_AT = 6,
  anon_sym_COMMA = 7,
  anon_sym_EQ = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  sym_conid = 11,
  sym_varid = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym_code_block_content = 15,
  anon_sym_data = 16,
  anon_sym_DATA = 17,
  anon_sym_attr = 18,
  anon_sym_ATTR = 19,
  anon_sym_sem = 20,
  anon_sym_SEM = 21,
  anon_sym_type = 22,
  anon_sym_TYPE = 23,
  anon_sym_use = 24,
  anon_sym_USE = 25,
  anon_sym_INH = 26,
  anon_sym_inh = 27,
  anon_sym_SYN = 28,
  anon_sym_syn = 29,
  anon_sym_CHN = 30,
  anon_sym_chn = 31,
  sym_lhs_keyword = 32,
  sym_loc_keyword = 33,
  anon_sym_COLON = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_COLON_EQ = 36,
  sym_source_file = 37,
  sym__elem = 38,
  sym_code_block_definition = 39,
  sym_sem_definition = 40,
  sym_sem_alternatives = 41,
  sym_sem_impl = 42,
  sym_attribute = 43,
  sym_local_attribute = 44,
  sym_attr_impl = 45,
  sym_local_attr_impl = 46,
  sym_expr = 47,
  sym_pattern = 48,
  sym_pattern1 = 49,
  sym_at_pattern1 = 50,
  sym_pattern_list = 51,
  sym_type_definition = 52,
  sym_attr_definition = 53,
  sym_attr_declarations = 54,
  sym_old_attr_style = 55,
  sym_new_attr_style = 56,
  sym_inh_attr_declaration_new_style = 57,
  sym_syn_attr_declaration_new_style = 58,
  sym_chn_attr_declaration_new_style = 59,
  sym_inh_attr_declaration_old_style = 60,
  sym_syn_attr_declaration_old_style = 61,
  sym_use_operator = 62,
  sym_data_definition = 63,
  sym_data_alternatives = 64,
  sym_field = 65,
  sym_var_type_definitions = 66,
  sym_var_type_definition = 67,
  sym_type = 68,
  sym_varids = 69,
  sym_code_block = 70,
  sym_data_keyword = 71,
  sym_attr_keyword = 72,
  sym_sem_keyword = 73,
  sym_type_keyword = 74,
  sym_use_keyword = 75,
  sym_inh_keyword = 76,
  sym_syn_keyword = 77,
  sym_chn_keyword = 78,
  sym_type_symbol = 79,
  sym_assign_symbol = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_sem_definition_repeat1 = 82,
  aux_sym_sem_alternatives_repeat1 = 83,
  aux_sym_sem_alternatives_repeat2 = 84,
  aux_sym_attribute_repeat1 = 85,
  aux_sym_pattern_repeat1 = 86,
  aux_sym_pattern_list_repeat1 = 87,
  aux_sym_type_definition_repeat1 = 88,
  aux_sym_attr_declarations_repeat1 = 89,
  aux_sym_old_attr_style_repeat1 = 90,
  aux_sym_old_attr_style_repeat2 = 91,
  aux_sym_data_definition_repeat1 = 92,
  aux_sym_data_alternatives_repeat1 = 93,
  aux_sym_var_type_definitions_repeat1 = 94,
  aux_sym_varids_repeat1 = 95,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_lhs_keyword] = "lhs_keyword",
  [sym_loc_keyword] = "loc_keyword",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_EQ] = ":=",
  [sym_source_file] = "source_file",
  [sym__elem] = "_elem",
  [sym_code_block_definition] = "code_block_definition",
  [sym_sem_definition] = "sem_definition",
  [sym_sem_alternatives] = "sem_alternatives",
  [sym_sem_impl] = "sem_impl",
  [sym_attribute] = "attribute",
  [sym_local_attribute] = "local_attribute",
  [sym_attr_impl] = "attr_impl",
  [sym_local_attr_impl] = "local_attr_impl",
  [sym_expr] = "expr",
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
  [sym_type_symbol] = "type_symbol",
  [sym_assign_symbol] = "assign_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sem_definition_repeat1] = "sem_definition_repeat1",
  [aux_sym_sem_alternatives_repeat1] = "sem_alternatives_repeat1",
  [aux_sym_sem_alternatives_repeat2] = "sem_alternatives_repeat2",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__elem] = {
    .visible = false,
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
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'Y') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(114);
      END_STATE();
    case 17:
      if (lookahead == 'H') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == 'Y') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(100);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(65);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'Y') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'M') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'P') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'S') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(98);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(90);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'm') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'p') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'y') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_sem);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEM);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEM);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_use);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_inh);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_syn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_chn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_lhs_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_loc_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 3},
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
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 96},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 96},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 96},
  [152] = {.lex_state = 96},
  [153] = {.lex_state = 96},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_lhs_keyword] = ACTIONS(1),
    [sym_loc_keyword] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(139),
    [sym__elem] = STATE(5),
    [sym_code_block_definition] = STATE(5),
    [sym_sem_definition] = STATE(5),
    [sym_type_definition] = STATE(5),
    [sym_attr_definition] = STATE(5),
    [sym_data_definition] = STATE(5),
    [sym_code_block] = STATE(52),
    [sym_data_keyword] = STATE(138),
    [sym_attr_keyword] = STATE(123),
    [sym_sem_keyword] = STATE(136),
    [sym_type_keyword] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_varid] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_data] = ACTIONS(9),
    [anon_sym_DATA] = ACTIONS(11),
    [anon_sym_attr] = ACTIONS(13),
    [anon_sym_ATTR] = ACTIONS(15),
    [anon_sym_sem] = ACTIONS(17),
    [anon_sym_SEM] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(21),
    [anon_sym_TYPE] = ACTIONS(23),
  },
  [2] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(22),
    [sym_syn_attr_declaration_new_style] = STATE(22),
    [sym_chn_attr_declaration_new_style] = STATE(22),
    [sym_inh_keyword] = STATE(110),
    [sym_syn_keyword] = STATE(103),
    [sym_chn_keyword] = STATE(104),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_varid] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_DATA] = ACTIONS(25),
    [anon_sym_attr] = ACTIONS(27),
    [anon_sym_ATTR] = ACTIONS(25),
    [anon_sym_sem] = ACTIONS(27),
    [anon_sym_SEM] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_TYPE] = ACTIONS(25),
    [anon_sym_INH] = ACTIONS(29),
    [anon_sym_inh] = ACTIONS(32),
    [anon_sym_SYN] = ACTIONS(35),
    [anon_sym_syn] = ACTIONS(38),
    [anon_sym_CHN] = ACTIONS(41),
    [anon_sym_chn] = ACTIONS(44),
  },
  [3] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(22),
    [sym_syn_attr_declaration_new_style] = STATE(22),
    [sym_chn_attr_declaration_new_style] = STATE(22),
    [sym_inh_keyword] = STATE(110),
    [sym_syn_keyword] = STATE(103),
    [sym_chn_keyword] = STATE(104),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_varid] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_data] = ACTIONS(49),
    [anon_sym_DATA] = ACTIONS(47),
    [anon_sym_attr] = ACTIONS(49),
    [anon_sym_ATTR] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_SEM] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(49),
    [anon_sym_TYPE] = ACTIONS(47),
    [anon_sym_INH] = ACTIONS(51),
    [anon_sym_inh] = ACTIONS(53),
    [anon_sym_SYN] = ACTIONS(55),
    [anon_sym_syn] = ACTIONS(57),
    [anon_sym_CHN] = ACTIONS(59),
    [anon_sym_chn] = ACTIONS(61),
  },
  [4] = {
    [sym__elem] = STATE(4),
    [sym_code_block_definition] = STATE(4),
    [sym_sem_definition] = STATE(4),
    [sym_type_definition] = STATE(4),
    [sym_attr_definition] = STATE(4),
    [sym_data_definition] = STATE(4),
    [sym_code_block] = STATE(52),
    [sym_data_keyword] = STATE(138),
    [sym_attr_keyword] = STATE(123),
    [sym_sem_keyword] = STATE(136),
    [sym_type_keyword] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_varid] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_DATA] = ACTIONS(74),
    [anon_sym_attr] = ACTIONS(77),
    [anon_sym_ATTR] = ACTIONS(80),
    [anon_sym_sem] = ACTIONS(83),
    [anon_sym_SEM] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_TYPE] = ACTIONS(92),
  },
  [5] = {
    [sym__elem] = STATE(4),
    [sym_code_block_definition] = STATE(4),
    [sym_sem_definition] = STATE(4),
    [sym_type_definition] = STATE(4),
    [sym_attr_definition] = STATE(4),
    [sym_data_definition] = STATE(4),
    [sym_code_block] = STATE(52),
    [sym_data_keyword] = STATE(138),
    [sym_attr_keyword] = STATE(123),
    [sym_sem_keyword] = STATE(136),
    [sym_type_keyword] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_varid] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_data] = ACTIONS(9),
    [anon_sym_DATA] = ACTIONS(11),
    [anon_sym_attr] = ACTIONS(13),
    [anon_sym_ATTR] = ACTIONS(15),
    [anon_sym_sem] = ACTIONS(17),
    [anon_sym_SEM] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(21),
    [anon_sym_TYPE] = ACTIONS(23),
  },
  [6] = {
    [sym_sem_impl] = STATE(14),
    [sym_attribute] = STATE(30),
    [sym_local_attribute] = STATE(30),
    [aux_sym_sem_alternatives_repeat1] = STATE(23),
    [aux_sym_sem_alternatives_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_conid] = ACTIONS(99),
    [sym_varid] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(103),
    [anon_sym_DATA] = ACTIONS(103),
    [anon_sym_attr] = ACTIONS(103),
    [anon_sym_ATTR] = ACTIONS(103),
    [anon_sym_sem] = ACTIONS(103),
    [anon_sym_SEM] = ACTIONS(103),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_TYPE] = ACTIONS(103),
    [sym_lhs_keyword] = ACTIONS(101),
    [sym_loc_keyword] = ACTIONS(105),
  },
  [7] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(109),
    [sym_varid] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_data] = ACTIONS(111),
    [anon_sym_DATA] = ACTIONS(107),
    [anon_sym_attr] = ACTIONS(111),
    [anon_sym_ATTR] = ACTIONS(107),
    [anon_sym_sem] = ACTIONS(111),
    [anon_sym_SEM] = ACTIONS(107),
    [anon_sym_type] = ACTIONS(111),
    [anon_sym_TYPE] = ACTIONS(107),
    [anon_sym_INH] = ACTIONS(107),
    [anon_sym_inh] = ACTIONS(111),
    [anon_sym_SYN] = ACTIONS(107),
    [anon_sym_syn] = ACTIONS(111),
    [anon_sym_CHN] = ACTIONS(107),
    [anon_sym_chn] = ACTIONS(111),
  },
  [8] = {
    [sym_attr_declarations] = STATE(53),
    [sym_old_attr_style] = STATE(51),
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(22),
    [sym_syn_attr_declaration_new_style] = STATE(22),
    [sym_chn_attr_declaration_new_style] = STATE(22),
    [sym_inh_keyword] = STATE(110),
    [sym_syn_keyword] = STATE(103),
    [sym_chn_keyword] = STATE(104),
    [aux_sym_sem_alternatives_repeat1] = STATE(54),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_conid] = ACTIONS(115),
    [anon_sym_INH] = ACTIONS(53),
    [anon_sym_inh] = ACTIONS(51),
    [anon_sym_SYN] = ACTIONS(57),
    [anon_sym_syn] = ACTIONS(55),
    [anon_sym_CHN] = ACTIONS(61),
    [anon_sym_chn] = ACTIONS(59),
  },
  [9] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(109),
    [sym_varid] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_data] = ACTIONS(119),
    [anon_sym_DATA] = ACTIONS(117),
    [anon_sym_attr] = ACTIONS(119),
    [anon_sym_ATTR] = ACTIONS(117),
    [anon_sym_sem] = ACTIONS(119),
    [anon_sym_SEM] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(119),
    [anon_sym_TYPE] = ACTIONS(117),
    [anon_sym_INH] = ACTIONS(117),
    [anon_sym_inh] = ACTIONS(119),
    [anon_sym_SYN] = ACTIONS(117),
    [anon_sym_syn] = ACTIONS(119),
    [anon_sym_CHN] = ACTIONS(117),
    [anon_sym_chn] = ACTIONS(119),
  },
  [10] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_varid] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_data] = ACTIONS(126),
    [anon_sym_DATA] = ACTIONS(121),
    [anon_sym_attr] = ACTIONS(126),
    [anon_sym_ATTR] = ACTIONS(121),
    [anon_sym_sem] = ACTIONS(126),
    [anon_sym_SEM] = ACTIONS(121),
    [anon_sym_type] = ACTIONS(126),
    [anon_sym_TYPE] = ACTIONS(121),
    [anon_sym_INH] = ACTIONS(121),
    [anon_sym_inh] = ACTIONS(126),
    [anon_sym_SYN] = ACTIONS(121),
    [anon_sym_syn] = ACTIONS(126),
    [anon_sym_CHN] = ACTIONS(121),
    [anon_sym_chn] = ACTIONS(126),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_varid] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_data] = ACTIONS(130),
    [anon_sym_DATA] = ACTIONS(128),
    [anon_sym_attr] = ACTIONS(130),
    [anon_sym_ATTR] = ACTIONS(128),
    [anon_sym_sem] = ACTIONS(130),
    [anon_sym_SEM] = ACTIONS(128),
    [anon_sym_type] = ACTIONS(130),
    [anon_sym_TYPE] = ACTIONS(128),
    [anon_sym_INH] = ACTIONS(128),
    [anon_sym_inh] = ACTIONS(130),
    [anon_sym_SYN] = ACTIONS(128),
    [anon_sym_syn] = ACTIONS(130),
    [anon_sym_CHN] = ACTIONS(128),
    [anon_sym_chn] = ACTIONS(130),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [sym_varid] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(132),
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
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [sym_varid] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_data] = ACTIONS(126),
    [anon_sym_DATA] = ACTIONS(121),
    [anon_sym_attr] = ACTIONS(126),
    [anon_sym_ATTR] = ACTIONS(121),
    [anon_sym_sem] = ACTIONS(126),
    [anon_sym_SEM] = ACTIONS(121),
    [anon_sym_type] = ACTIONS(126),
    [anon_sym_TYPE] = ACTIONS(121),
    [anon_sym_INH] = ACTIONS(121),
    [anon_sym_inh] = ACTIONS(126),
    [anon_sym_SYN] = ACTIONS(121),
    [anon_sym_syn] = ACTIONS(126),
    [anon_sym_CHN] = ACTIONS(121),
    [anon_sym_chn] = ACTIONS(126),
  },
  [14] = {
    [sym_sem_impl] = STATE(15),
    [sym_attribute] = STATE(30),
    [sym_local_attribute] = STATE(30),
    [aux_sym_sem_alternatives_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [sym_varid] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(138),
    [anon_sym_DATA] = ACTIONS(136),
    [anon_sym_attr] = ACTIONS(138),
    [anon_sym_ATTR] = ACTIONS(136),
    [anon_sym_sem] = ACTIONS(138),
    [anon_sym_SEM] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(138),
    [anon_sym_TYPE] = ACTIONS(136),
    [sym_lhs_keyword] = ACTIONS(101),
    [sym_loc_keyword] = ACTIONS(105),
  },
  [15] = {
    [sym_sem_impl] = STATE(15),
    [sym_attribute] = STATE(30),
    [sym_local_attribute] = STATE(30),
    [aux_sym_sem_alternatives_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [sym_varid] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(145),
    [anon_sym_DATA] = ACTIONS(140),
    [anon_sym_attr] = ACTIONS(145),
    [anon_sym_ATTR] = ACTIONS(140),
    [anon_sym_sem] = ACTIONS(145),
    [anon_sym_SEM] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(145),
    [anon_sym_TYPE] = ACTIONS(140),
    [sym_lhs_keyword] = ACTIONS(142),
    [sym_loc_keyword] = ACTIONS(147),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(150),
    [sym_varid] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_DATA] = ACTIONS(150),
    [anon_sym_attr] = ACTIONS(152),
    [anon_sym_ATTR] = ACTIONS(150),
    [anon_sym_sem] = ACTIONS(152),
    [anon_sym_SEM] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(152),
    [anon_sym_TYPE] = ACTIONS(150),
    [anon_sym_INH] = ACTIONS(150),
    [anon_sym_inh] = ACTIONS(152),
    [anon_sym_SYN] = ACTIONS(150),
    [anon_sym_syn] = ACTIONS(152),
    [anon_sym_CHN] = ACTIONS(150),
    [anon_sym_chn] = ACTIONS(152),
  },
  [17] = {
    [sym_attr_impl] = STATE(17),
    [aux_sym_attribute_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(156),
    [sym_varid] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_data] = ACTIONS(159),
    [anon_sym_DATA] = ACTIONS(154),
    [anon_sym_attr] = ACTIONS(159),
    [anon_sym_ATTR] = ACTIONS(154),
    [anon_sym_sem] = ACTIONS(159),
    [anon_sym_SEM] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(159),
    [anon_sym_TYPE] = ACTIONS(154),
    [sym_lhs_keyword] = ACTIONS(159),
    [sym_loc_keyword] = ACTIONS(159),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_varid] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_data] = ACTIONS(163),
    [anon_sym_DATA] = ACTIONS(161),
    [anon_sym_attr] = ACTIONS(163),
    [anon_sym_ATTR] = ACTIONS(161),
    [anon_sym_sem] = ACTIONS(163),
    [anon_sym_SEM] = ACTIONS(161),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_TYPE] = ACTIONS(161),
    [anon_sym_INH] = ACTIONS(161),
    [anon_sym_inh] = ACTIONS(163),
    [anon_sym_SYN] = ACTIONS(161),
    [anon_sym_syn] = ACTIONS(163),
    [anon_sym_CHN] = ACTIONS(161),
    [anon_sym_chn] = ACTIONS(163),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_varid] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_data] = ACTIONS(167),
    [anon_sym_DATA] = ACTIONS(165),
    [anon_sym_attr] = ACTIONS(167),
    [anon_sym_ATTR] = ACTIONS(165),
    [anon_sym_sem] = ACTIONS(167),
    [anon_sym_SEM] = ACTIONS(165),
    [anon_sym_type] = ACTIONS(167),
    [anon_sym_TYPE] = ACTIONS(165),
    [anon_sym_INH] = ACTIONS(165),
    [anon_sym_inh] = ACTIONS(167),
    [anon_sym_SYN] = ACTIONS(165),
    [anon_sym_syn] = ACTIONS(167),
    [anon_sym_CHN] = ACTIONS(165),
    [anon_sym_chn] = ACTIONS(167),
  },
  [20] = {
    [sym_attr_impl] = STATE(17),
    [aux_sym_attribute_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_varid] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_DATA] = ACTIONS(169),
    [anon_sym_attr] = ACTIONS(173),
    [anon_sym_ATTR] = ACTIONS(169),
    [anon_sym_sem] = ACTIONS(173),
    [anon_sym_SEM] = ACTIONS(169),
    [anon_sym_type] = ACTIONS(173),
    [anon_sym_TYPE] = ACTIONS(169),
    [sym_lhs_keyword] = ACTIONS(173),
    [sym_loc_keyword] = ACTIONS(173),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_varid] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_data] = ACTIONS(177),
    [anon_sym_DATA] = ACTIONS(175),
    [anon_sym_attr] = ACTIONS(177),
    [anon_sym_ATTR] = ACTIONS(175),
    [anon_sym_sem] = ACTIONS(177),
    [anon_sym_SEM] = ACTIONS(175),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_TYPE] = ACTIONS(175),
    [anon_sym_INH] = ACTIONS(175),
    [anon_sym_inh] = ACTIONS(177),
    [anon_sym_SYN] = ACTIONS(175),
    [anon_sym_syn] = ACTIONS(177),
    [anon_sym_CHN] = ACTIONS(175),
    [anon_sym_chn] = ACTIONS(177),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_varid] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_data] = ACTIONS(181),
    [anon_sym_DATA] = ACTIONS(179),
    [anon_sym_attr] = ACTIONS(181),
    [anon_sym_ATTR] = ACTIONS(179),
    [anon_sym_sem] = ACTIONS(181),
    [anon_sym_SEM] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_TYPE] = ACTIONS(179),
    [anon_sym_INH] = ACTIONS(179),
    [anon_sym_inh] = ACTIONS(181),
    [anon_sym_SYN] = ACTIONS(179),
    [anon_sym_syn] = ACTIONS(181),
    [anon_sym_CHN] = ACTIONS(179),
    [anon_sym_chn] = ACTIONS(181),
  },
  [23] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [sym_conid] = ACTIONS(185),
    [sym_varid] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(188),
    [anon_sym_DATA] = ACTIONS(188),
    [anon_sym_attr] = ACTIONS(188),
    [anon_sym_ATTR] = ACTIONS(188),
    [anon_sym_sem] = ACTIONS(188),
    [anon_sym_SEM] = ACTIONS(188),
    [anon_sym_type] = ACTIONS(188),
    [anon_sym_TYPE] = ACTIONS(188),
    [sym_lhs_keyword] = ACTIONS(188),
    [sym_loc_keyword] = ACTIONS(188),
  },
  [24] = {
    [sym_field] = STATE(26),
    [sym_var_type_definition] = STATE(41),
    [aux_sym_data_alternatives_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [sym_conid] = ACTIONS(192),
    [sym_varid] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_data] = ACTIONS(196),
    [anon_sym_DATA] = ACTIONS(196),
    [anon_sym_attr] = ACTIONS(196),
    [anon_sym_ATTR] = ACTIONS(196),
    [anon_sym_sem] = ACTIONS(196),
    [anon_sym_SEM] = ACTIONS(196),
    [anon_sym_type] = ACTIONS(196),
    [anon_sym_TYPE] = ACTIONS(196),
  },
  [25] = {
    [sym_field] = STATE(24),
    [sym_var_type_definition] = STATE(41),
    [aux_sym_data_alternatives_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [sym_conid] = ACTIONS(192),
    [sym_varid] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_data] = ACTIONS(200),
    [anon_sym_DATA] = ACTIONS(200),
    [anon_sym_attr] = ACTIONS(200),
    [anon_sym_ATTR] = ACTIONS(200),
    [anon_sym_sem] = ACTIONS(200),
    [anon_sym_SEM] = ACTIONS(200),
    [anon_sym_type] = ACTIONS(200),
    [anon_sym_TYPE] = ACTIONS(200),
  },
  [26] = {
    [sym_field] = STATE(26),
    [sym_var_type_definition] = STATE(41),
    [aux_sym_data_alternatives_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [sym_conid] = ACTIONS(204),
    [sym_varid] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_data] = ACTIONS(210),
    [anon_sym_DATA] = ACTIONS(210),
    [anon_sym_attr] = ACTIONS(210),
    [anon_sym_ATTR] = ACTIONS(210),
    [anon_sym_sem] = ACTIONS(210),
    [anon_sym_SEM] = ACTIONS(210),
    [anon_sym_type] = ACTIONS(210),
    [anon_sym_TYPE] = ACTIONS(210),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(150),
    [sym_varid] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_DATA] = ACTIONS(150),
    [anon_sym_attr] = ACTIONS(152),
    [anon_sym_ATTR] = ACTIONS(150),
    [anon_sym_sem] = ACTIONS(152),
    [anon_sym_SEM] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(152),
    [anon_sym_TYPE] = ACTIONS(150),
    [sym_lhs_keyword] = ACTIONS(152),
    [sym_loc_keyword] = ACTIONS(152),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [sym_varid] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_data] = ACTIONS(214),
    [anon_sym_DATA] = ACTIONS(212),
    [anon_sym_attr] = ACTIONS(214),
    [anon_sym_ATTR] = ACTIONS(212),
    [anon_sym_sem] = ACTIONS(214),
    [anon_sym_SEM] = ACTIONS(212),
    [anon_sym_type] = ACTIONS(214),
    [anon_sym_TYPE] = ACTIONS(212),
    [sym_lhs_keyword] = ACTIONS(214),
    [sym_loc_keyword] = ACTIONS(214),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [sym_varid] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_data] = ACTIONS(218),
    [anon_sym_DATA] = ACTIONS(216),
    [anon_sym_attr] = ACTIONS(218),
    [anon_sym_ATTR] = ACTIONS(216),
    [anon_sym_sem] = ACTIONS(218),
    [anon_sym_SEM] = ACTIONS(216),
    [anon_sym_type] = ACTIONS(218),
    [anon_sym_TYPE] = ACTIONS(216),
    [sym_lhs_keyword] = ACTIONS(218),
    [sym_loc_keyword] = ACTIONS(218),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [sym_varid] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_data] = ACTIONS(222),
    [anon_sym_DATA] = ACTIONS(220),
    [anon_sym_attr] = ACTIONS(222),
    [anon_sym_ATTR] = ACTIONS(220),
    [anon_sym_sem] = ACTIONS(222),
    [anon_sym_SEM] = ACTIONS(220),
    [anon_sym_type] = ACTIONS(222),
    [anon_sym_TYPE] = ACTIONS(220),
    [sym_lhs_keyword] = ACTIONS(222),
    [sym_loc_keyword] = ACTIONS(222),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(224),
    [sym_varid] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_data] = ACTIONS(226),
    [anon_sym_DATA] = ACTIONS(224),
    [anon_sym_attr] = ACTIONS(226),
    [anon_sym_ATTR] = ACTIONS(224),
    [anon_sym_sem] = ACTIONS(226),
    [anon_sym_SEM] = ACTIONS(224),
    [anon_sym_type] = ACTIONS(226),
    [anon_sym_TYPE] = ACTIONS(224),
    [sym_lhs_keyword] = ACTIONS(226),
    [sym_loc_keyword] = ACTIONS(226),
  },
  [32] = {
    [sym_data_alternatives] = STATE(35),
    [aux_sym_data_definition_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(230),
    [sym_varid] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_data] = ACTIONS(232),
    [anon_sym_DATA] = ACTIONS(228),
    [anon_sym_attr] = ACTIONS(232),
    [anon_sym_ATTR] = ACTIONS(228),
    [anon_sym_sem] = ACTIONS(232),
    [anon_sym_SEM] = ACTIONS(228),
    [anon_sym_type] = ACTIONS(232),
    [anon_sym_TYPE] = ACTIONS(228),
  },
  [33] = {
    [sym_sem_alternatives] = STATE(33),
    [aux_sym_sem_definition_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_varid] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_data] = ACTIONS(239),
    [anon_sym_DATA] = ACTIONS(234),
    [anon_sym_attr] = ACTIONS(239),
    [anon_sym_ATTR] = ACTIONS(234),
    [anon_sym_sem] = ACTIONS(239),
    [anon_sym_SEM] = ACTIONS(234),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_TYPE] = ACTIONS(234),
  },
  [34] = {
    [sym_sem_alternatives] = STATE(37),
    [aux_sym_sem_definition_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_varid] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(245),
    [anon_sym_DATA] = ACTIONS(241),
    [anon_sym_attr] = ACTIONS(245),
    [anon_sym_ATTR] = ACTIONS(241),
    [anon_sym_sem] = ACTIONS(245),
    [anon_sym_SEM] = ACTIONS(241),
    [anon_sym_type] = ACTIONS(245),
    [anon_sym_TYPE] = ACTIONS(241),
  },
  [35] = {
    [sym_data_alternatives] = STATE(38),
    [aux_sym_data_definition_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(230),
    [sym_varid] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_data] = ACTIONS(249),
    [anon_sym_DATA] = ACTIONS(247),
    [anon_sym_attr] = ACTIONS(249),
    [anon_sym_ATTR] = ACTIONS(247),
    [anon_sym_sem] = ACTIONS(249),
    [anon_sym_SEM] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_TYPE] = ACTIONS(247),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [sym_varid] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_data] = ACTIONS(253),
    [anon_sym_DATA] = ACTIONS(251),
    [anon_sym_attr] = ACTIONS(253),
    [anon_sym_ATTR] = ACTIONS(251),
    [anon_sym_sem] = ACTIONS(253),
    [anon_sym_SEM] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_TYPE] = ACTIONS(251),
    [sym_lhs_keyword] = ACTIONS(253),
    [sym_loc_keyword] = ACTIONS(253),
  },
  [37] = {
    [sym_sem_alternatives] = STATE(33),
    [aux_sym_sem_definition_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_varid] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_data] = ACTIONS(257),
    [anon_sym_DATA] = ACTIONS(255),
    [anon_sym_attr] = ACTIONS(257),
    [anon_sym_ATTR] = ACTIONS(255),
    [anon_sym_sem] = ACTIONS(257),
    [anon_sym_SEM] = ACTIONS(255),
    [anon_sym_type] = ACTIONS(257),
    [anon_sym_TYPE] = ACTIONS(255),
  },
  [38] = {
    [sym_data_alternatives] = STATE(38),
    [aux_sym_data_definition_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(261),
    [sym_varid] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_data] = ACTIONS(264),
    [anon_sym_DATA] = ACTIONS(259),
    [anon_sym_attr] = ACTIONS(264),
    [anon_sym_ATTR] = ACTIONS(259),
    [anon_sym_sem] = ACTIONS(264),
    [anon_sym_SEM] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(264),
    [anon_sym_TYPE] = ACTIONS(259),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [sym_conid] = ACTIONS(152),
    [sym_varid] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_DATA] = ACTIONS(152),
    [anon_sym_attr] = ACTIONS(152),
    [anon_sym_ATTR] = ACTIONS(152),
    [anon_sym_sem] = ACTIONS(152),
    [anon_sym_SEM] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(152),
    [anon_sym_TYPE] = ACTIONS(152),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_varid] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_DATA] = ACTIONS(150),
    [anon_sym_attr] = ACTIONS(152),
    [anon_sym_ATTR] = ACTIONS(150),
    [anon_sym_sem] = ACTIONS(152),
    [anon_sym_SEM] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(152),
    [anon_sym_TYPE] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_COLON_COLON] = ACTIONS(150),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [sym_conid] = ACTIONS(268),
    [sym_varid] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(268),
    [anon_sym_DATA] = ACTIONS(268),
    [anon_sym_attr] = ACTIONS(268),
    [anon_sym_ATTR] = ACTIONS(268),
    [anon_sym_sem] = ACTIONS(268),
    [anon_sym_SEM] = ACTIONS(268),
    [anon_sym_type] = ACTIONS(268),
    [anon_sym_TYPE] = ACTIONS(268),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [sym_conid] = ACTIONS(130),
    [sym_varid] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_data] = ACTIONS(130),
    [anon_sym_DATA] = ACTIONS(130),
    [anon_sym_attr] = ACTIONS(130),
    [anon_sym_ATTR] = ACTIONS(130),
    [anon_sym_sem] = ACTIONS(130),
    [anon_sym_SEM] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(130),
    [anon_sym_TYPE] = ACTIONS(130),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [sym_conid] = ACTIONS(134),
    [sym_varid] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(134),
    [anon_sym_DATA] = ACTIONS(134),
    [anon_sym_attr] = ACTIONS(134),
    [anon_sym_ATTR] = ACTIONS(134),
    [anon_sym_sem] = ACTIONS(134),
    [anon_sym_SEM] = ACTIONS(134),
    [anon_sym_type] = ACTIONS(134),
    [anon_sym_TYPE] = ACTIONS(134),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_varid] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_DATA] = ACTIONS(270),
    [anon_sym_attr] = ACTIONS(272),
    [anon_sym_ATTR] = ACTIONS(270),
    [anon_sym_sem] = ACTIONS(272),
    [anon_sym_SEM] = ACTIONS(270),
    [anon_sym_type] = ACTIONS(272),
    [anon_sym_TYPE] = ACTIONS(270),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_varid] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_data] = ACTIONS(276),
    [anon_sym_DATA] = ACTIONS(274),
    [anon_sym_attr] = ACTIONS(276),
    [anon_sym_ATTR] = ACTIONS(274),
    [anon_sym_sem] = ACTIONS(276),
    [anon_sym_SEM] = ACTIONS(274),
    [anon_sym_type] = ACTIONS(276),
    [anon_sym_TYPE] = ACTIONS(274),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_varid] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_data] = ACTIONS(280),
    [anon_sym_DATA] = ACTIONS(278),
    [anon_sym_attr] = ACTIONS(280),
    [anon_sym_ATTR] = ACTIONS(278),
    [anon_sym_sem] = ACTIONS(280),
    [anon_sym_SEM] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(280),
    [anon_sym_TYPE] = ACTIONS(278),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_varid] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_data] = ACTIONS(284),
    [anon_sym_DATA] = ACTIONS(282),
    [anon_sym_attr] = ACTIONS(284),
    [anon_sym_ATTR] = ACTIONS(282),
    [anon_sym_sem] = ACTIONS(284),
    [anon_sym_SEM] = ACTIONS(282),
    [anon_sym_type] = ACTIONS(284),
    [anon_sym_TYPE] = ACTIONS(282),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_varid] = ACTIONS(288),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_DATA] = ACTIONS(286),
    [anon_sym_attr] = ACTIONS(288),
    [anon_sym_ATTR] = ACTIONS(286),
    [anon_sym_sem] = ACTIONS(288),
    [anon_sym_SEM] = ACTIONS(286),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_TYPE] = ACTIONS(286),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_varid] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(290),
    [anon_sym_data] = ACTIONS(292),
    [anon_sym_DATA] = ACTIONS(290),
    [anon_sym_attr] = ACTIONS(292),
    [anon_sym_ATTR] = ACTIONS(290),
    [anon_sym_sem] = ACTIONS(292),
    [anon_sym_SEM] = ACTIONS(290),
    [anon_sym_type] = ACTIONS(292),
    [anon_sym_TYPE] = ACTIONS(290),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_varid] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_data] = ACTIONS(296),
    [anon_sym_DATA] = ACTIONS(294),
    [anon_sym_attr] = ACTIONS(296),
    [anon_sym_ATTR] = ACTIONS(294),
    [anon_sym_sem] = ACTIONS(296),
    [anon_sym_SEM] = ACTIONS(294),
    [anon_sym_type] = ACTIONS(296),
    [anon_sym_TYPE] = ACTIONS(294),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_varid] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_data] = ACTIONS(49),
    [anon_sym_DATA] = ACTIONS(47),
    [anon_sym_attr] = ACTIONS(49),
    [anon_sym_ATTR] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_SEM] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(49),
    [anon_sym_TYPE] = ACTIONS(47),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_varid] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_data] = ACTIONS(300),
    [anon_sym_DATA] = ACTIONS(298),
    [anon_sym_attr] = ACTIONS(300),
    [anon_sym_ATTR] = ACTIONS(298),
    [anon_sym_sem] = ACTIONS(300),
    [anon_sym_SEM] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(300),
    [anon_sym_TYPE] = ACTIONS(298),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_varid] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_data] = ACTIONS(304),
    [anon_sym_DATA] = ACTIONS(302),
    [anon_sym_attr] = ACTIONS(304),
    [anon_sym_ATTR] = ACTIONS(302),
    [anon_sym_sem] = ACTIONS(304),
    [anon_sym_SEM] = ACTIONS(302),
    [anon_sym_type] = ACTIONS(304),
    [anon_sym_TYPE] = ACTIONS(302),
  },
  [54] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_conid] = ACTIONS(306),
    [anon_sym_INH] = ACTIONS(188),
    [anon_sym_inh] = ACTIONS(183),
    [anon_sym_SYN] = ACTIONS(188),
    [anon_sym_syn] = ACTIONS(183),
    [anon_sym_CHN] = ACTIONS(188),
    [anon_sym_chn] = ACTIONS(183),
  },
  [55] = {
    [sym_pattern1] = STATE(56),
    [aux_sym_pattern_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [sym_varid] = ACTIONS(315),
    [anon_sym_COLON_EQ] = ACTIONS(311),
  },
  [56] = {
    [sym_pattern1] = STATE(57),
    [aux_sym_pattern_repeat1] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [sym_varid] = ACTIONS(315),
    [anon_sym_COLON_EQ] = ACTIONS(317),
  },
  [57] = {
    [sym_pattern1] = STATE(57),
    [aux_sym_pattern_repeat1] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_EQ] = ACTIONS(322),
    [sym_varid] = ACTIONS(327),
    [anon_sym_COLON_EQ] = ACTIONS(322),
  },
  [58] = {
    [sym_at_pattern1] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [sym_varid] = ACTIONS(330),
    [anon_sym_COLON_EQ] = ACTIONS(330),
  },
  [59] = {
    [sym_pattern] = STATE(106),
    [sym_pattern1] = STATE(91),
    [sym_pattern_list] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym__] = ACTIONS(313),
    [sym_conid] = ACTIONS(336),
    [sym_varid] = ACTIONS(315),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [sym_varid] = ACTIONS(338),
    [anon_sym_COLON_EQ] = ACTIONS(338),
  },
  [61] = {
    [sym_use_operator] = STATE(100),
    [sym_use_keyword] = STATE(121),
    [sym_type_symbol] = STATE(94),
    [anon_sym_use] = ACTIONS(340),
    [anon_sym_USE] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_COLON_COLON] = ACTIONS(344),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [sym_varid] = ACTIONS(346),
    [anon_sym_COLON_EQ] = ACTIONS(346),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [sym_varid] = ACTIONS(330),
    [anon_sym_COLON_EQ] = ACTIONS(330),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [sym_varid] = ACTIONS(348),
    [anon_sym_COLON_EQ] = ACTIONS(348),
  },
  [65] = {
    [aux_sym_varids_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_use] = ACTIONS(352),
    [anon_sym_USE] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(354),
    [anon_sym_COLON_COLON] = ACTIONS(352),
  },
  [66] = {
    [aux_sym_varids_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_use] = ACTIONS(359),
    [anon_sym_USE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_COLON_COLON] = ACTIONS(359),
  },
  [67] = {
    [sym_type] = STATE(71),
    [sym_code_block] = STATE(81),
    [aux_sym_type_definition_repeat1] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_conid] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
  },
  [68] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_varid] = ACTIONS(371),
  },
  [69] = {
    [sym_pattern] = STATE(116),
    [sym_pattern1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym__] = ACTIONS(313),
    [sym_conid] = ACTIONS(336),
    [sym_varid] = ACTIONS(315),
  },
  [70] = {
    [sym_pattern] = STATE(111),
    [sym_pattern1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym__] = ACTIONS(313),
    [sym_conid] = ACTIONS(336),
    [sym_varid] = ACTIONS(315),
  },
  [71] = {
    [sym_type] = STATE(73),
    [sym_code_block] = STATE(81),
    [aux_sym_type_definition_repeat1] = STATE(73),
    [anon_sym_RBRACK] = ACTIONS(374),
    [sym_conid] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
  },
  [72] = {
    [aux_sym_varids_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_use] = ACTIONS(376),
    [anon_sym_USE] = ACTIONS(376),
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_COLON_COLON] = ACTIONS(376),
  },
  [73] = {
    [sym_type] = STATE(73),
    [sym_code_block] = STATE(81),
    [aux_sym_type_definition_repeat1] = STATE(73),
    [anon_sym_RBRACK] = ACTIONS(380),
    [sym_conid] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(385),
  },
  [74] = {
    [sym_syn_attr_declaration_old_style] = STATE(77),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(77),
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_varid] = ACTIONS(390),
  },
  [75] = {
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(150),
    [sym_conid] = ACTIONS(150),
    [sym_varid] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
  },
  [76] = {
    [sym_inh_attr_declaration_old_style] = STATE(76),
    [sym_varids] = STATE(98),
    [aux_sym_old_attr_style_repeat1] = STATE(76),
    [anon_sym_PIPE] = ACTIONS(392),
    [sym_varid] = ACTIONS(394),
  },
  [77] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_varid] = ACTIONS(390),
  },
  [78] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_varid] = ACTIONS(390),
  },
  [79] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_varid] = ACTIONS(390),
  },
  [80] = {
    [sym_inh_attr_declaration_old_style] = STATE(87),
    [sym_varids] = STATE(98),
    [aux_sym_old_attr_style_repeat1] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(401),
    [sym_varid] = ACTIONS(390),
  },
  [81] = {
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_conid] = ACTIONS(128),
    [sym_varid] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_use] = ACTIONS(359),
    [anon_sym_USE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_COLON_COLON] = ACTIONS(359),
  },
  [83] = {
    [sym_syn_attr_declaration_old_style] = STATE(88),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(88),
    [anon_sym_PIPE] = ACTIONS(403),
    [sym_varid] = ACTIONS(390),
  },
  [84] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_PIPE] = ACTIONS(405),
    [sym_varid] = ACTIONS(390),
  },
  [85] = {
    [sym_syn_attr_declaration_old_style] = STATE(79),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(79),
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_varid] = ACTIONS(390),
  },
  [86] = {
    [sym_syn_attr_declaration_old_style] = STATE(84),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(84),
    [anon_sym_PIPE] = ACTIONS(407),
    [sym_varid] = ACTIONS(390),
  },
  [87] = {
    [sym_inh_attr_declaration_old_style] = STATE(76),
    [sym_varids] = STATE(98),
    [aux_sym_old_attr_style_repeat1] = STATE(76),
    [anon_sym_PIPE] = ACTIONS(409),
    [sym_varid] = ACTIONS(390),
  },
  [88] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_PIPE] = ACTIONS(407),
    [sym_varid] = ACTIONS(390),
  },
  [89] = {
    [sym_syn_attr_declaration_old_style] = STATE(78),
    [sym_varids] = STATE(61),
    [aux_sym_old_attr_style_repeat2] = STATE(78),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_varid] = ACTIONS(390),
  },
  [90] = {
    [sym_type] = STATE(43),
    [sym_code_block] = STATE(42),
    [sym_conid] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(415),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_COLON_EQ] = ACTIONS(311),
  },
  [92] = {
    [sym_type] = STATE(124),
    [sym_code_block] = STATE(81),
    [sym_conid] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
  },
  [93] = {
    [sym_pattern1] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym__] = ACTIONS(313),
    [sym_varid] = ACTIONS(315),
  },
  [94] = {
    [sym_type] = STATE(102),
    [sym_code_block] = STATE(81),
    [sym_conid] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
  },
  [95] = {
    [sym_type] = STATE(97),
    [sym_code_block] = STATE(81),
    [sym_conid] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
  },
  [96] = {
    [sym_type] = STATE(12),
    [sym_code_block] = STATE(11),
    [sym_conid] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
  },
  [97] = {
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_varid] = ACTIONS(421),
  },
  [98] = {
    [sym_type_symbol] = STATE(92),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_COLON_COLON] = ACTIONS(344),
  },
  [99] = {
    [sym_type_symbol] = STATE(90),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_COLON_COLON] = ACTIONS(344),
  },
  [100] = {
    [sym_type_symbol] = STATE(95),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_COLON_COLON] = ACTIONS(344),
  },
  [101] = {
    [sym_expr] = STATE(31),
    [sym_code_block] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(423),
  },
  [102] = {
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_varid] = ACTIONS(425),
  },
  [103] = {
    [sym_var_type_definitions] = STATE(21),
    [sym_var_type_definition] = STATE(7),
    [sym_varid] = ACTIONS(427),
  },
  [104] = {
    [sym_var_type_definitions] = STATE(19),
    [sym_var_type_definition] = STATE(7),
    [sym_varid] = ACTIONS(427),
  },
  [105] = {
    [sym_assign_symbol] = STATE(107),
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_COLON_EQ] = ACTIONS(429),
  },
  [106] = {
    [aux_sym_pattern_list_repeat1] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(433),
  },
  [107] = {
    [sym_expr] = STATE(29),
    [sym_code_block] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(423),
  },
  [108] = {
    [sym_attr_impl] = STATE(20),
    [aux_sym_attribute_repeat1] = STATE(20),
    [anon_sym_DOT] = ACTIONS(171),
  },
  [109] = {
    [aux_sym_pattern_list_repeat1] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(433),
  },
  [110] = {
    [sym_var_type_definitions] = STATE(18),
    [sym_var_type_definition] = STATE(7),
    [sym_varid] = ACTIONS(427),
  },
  [111] = {
    [sym_assign_symbol] = STATE(101),
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_COLON_EQ] = ACTIONS(429),
  },
  [112] = {
    [aux_sym_pattern_list_repeat1] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(439),
  },
  [113] = {
    [sym_type_symbol] = STATE(96),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_COLON_COLON] = ACTIONS(344),
  },
  [114] = {
    [sym_conid] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(442),
  },
  [115] = {
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_COLON_COLON] = ACTIONS(446),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(437),
  },
  [117] = {
    [sym_code_block] = STATE(115),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [118] = {
    [sym_var_type_definition] = STATE(13),
    [sym_varid] = ACTIONS(427),
  },
  [119] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(6),
    [sym_conid] = ACTIONS(448),
  },
  [120] = {
    [sym_local_attr_impl] = STATE(36),
    [anon_sym_DOT] = ACTIONS(450),
  },
  [121] = {
    [sym_code_block] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [122] = {
    [sym_code_block] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [123] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(8),
    [sym_conid] = ACTIONS(452),
  },
  [124] = {
    [anon_sym_PIPE] = ACTIONS(454),
    [sym_varid] = ACTIONS(454),
  },
  [125] = {
    [sym_varid] = ACTIONS(456),
  },
  [126] = {
    [sym_conid] = ACTIONS(458),
  },
  [127] = {
    [sym_varid] = ACTIONS(460),
  },
  [128] = {
    [sym_varid] = ACTIONS(462),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(464),
  },
  [130] = {
    [sym_conid] = ACTIONS(466),
  },
  [131] = {
    [anon_sym_EQ] = ACTIONS(468),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(470),
  },
  [133] = {
    [sym_conid] = ACTIONS(472),
  },
  [134] = {
    [anon_sym_LBRACE] = ACTIONS(474),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(476),
  },
  [136] = {
    [sym_conid] = ACTIONS(478),
  },
  [137] = {
    [sym_varid] = ACTIONS(480),
  },
  [138] = {
    [sym_conid] = ACTIONS(482),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(484),
  },
  [140] = {
    [anon_sym_LBRACE] = ACTIONS(486),
  },
  [141] = {
    [sym_conid] = ACTIONS(488),
  },
  [142] = {
    [sym_conid] = ACTIONS(490),
  },
  [143] = {
    [sym_conid] = ACTIONS(492),
  },
  [144] = {
    [anon_sym_RBRACE] = ACTIONS(494),
  },
  [145] = {
    [sym_code_block_content] = ACTIONS(496),
  },
  [146] = {
    [anon_sym_RBRACE] = ACTIONS(498),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(500),
  },
  [148] = {
    [anon_sym_RBRACE] = ACTIONS(502),
  },
  [149] = {
    [sym_code_block_content] = ACTIONS(504),
  },
  [150] = {
    [sym_varid] = ACTIONS(506),
  },
  [151] = {
    [sym_code_block_content] = ACTIONS(508),
  },
  [152] = {
    [sym_code_block_content] = ACTIONS(510),
  },
  [153] = {
    [sym_code_block_content] = ACTIONS(512),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(122),
  [7] = {.count = 1, .reusable = true}, SHIFT(145),
  [9] = {.count = 1, .reusable = false}, SHIFT(143),
  [11] = {.count = 1, .reusable = true}, SHIFT(143),
  [13] = {.count = 1, .reusable = false}, SHIFT(142),
  [15] = {.count = 1, .reusable = true}, SHIFT(142),
  [17] = {.count = 1, .reusable = false}, SHIFT(141),
  [19] = {.count = 1, .reusable = true}, SHIFT(141),
  [21] = {.count = 1, .reusable = false}, SHIFT(126),
  [23] = {.count = 1, .reusable = true}, SHIFT(126),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [27] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(128),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(128),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(127),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(127),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(125),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(125),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_attr_declarations, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(128),
  [53] = {.count = 1, .reusable = false}, SHIFT(128),
  [55] = {.count = 1, .reusable = true}, SHIFT(127),
  [57] = {.count = 1, .reusable = false}, SHIFT(127),
  [59] = {.count = 1, .reusable = true}, SHIFT(125),
  [61] = {.count = 1, .reusable = false}, SHIFT(125),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [89] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 2),
  [99] = {.count = 1, .reusable = false}, SHIFT(23),
  [101] = {.count = 1, .reusable = false}, SHIFT(108),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 2),
  [105] = {.count = 1, .reusable = false}, SHIFT(120),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(118),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definitions, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(80),
  [115] = {.count = 1, .reusable = false}, SHIFT(54),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definitions, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(118),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(108),
  [145] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(120),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_code_block, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_code_block, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(150),
  [159] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attribute_repeat1, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(150),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_new_attr_style, 1),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(23),
  [188] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [192] = {.count = 1, .reusable = false}, SHIFT(41),
  [194] = {.count = 1, .reusable = false}, SHIFT(99),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(41),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(99),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_attr_impl, 4),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_attr_impl, 4),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_sem_impl, 1),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_sem_impl, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_local_attr_impl, 4),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_local_attr_impl, 4),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [230] = {.count = 1, .reusable = true}, SHIFT(130),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_data_definition, 2),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2), SHIFT_REPEAT(119),
  [239] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 2),
  [243] = {.count = 1, .reusable = true}, SHIFT(119),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_sem_definition, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_data_definition, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_local_attribute, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_local_attribute, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 3),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_sem_definition, 3),
  [259] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(130),
  [264] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 4),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 6),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 6),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_type_definition, 6),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 5),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_type_definition, 5),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 7),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_definition, 2),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_code_block_definition, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 5),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_definition, 1),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_code_block_definition, 1),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_attr_definition, 3),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(54),
  [309] = {.count = 1, .reusable = true}, SHIFT(59),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [313] = {.count = 1, .reusable = true}, SHIFT(63),
  [315] = {.count = 1, .reusable = true}, SHIFT(58),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(59),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(63),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(58),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 1),
  [332] = {.count = 1, .reusable = true}, SHIFT(93),
  [334] = {.count = 1, .reusable = true}, SHIFT(62),
  [336] = {.count = 1, .reusable = true}, SHIFT(55),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 3),
  [340] = {.count = 1, .reusable = true}, SHIFT(140),
  [342] = {.count = 1, .reusable = false}, SHIFT(114),
  [344] = {.count = 1, .reusable = true}, SHIFT(114),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 2),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_at_pattern1, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(137),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(137),
  [359] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [363] = {.count = 1, .reusable = true}, SHIFT(47),
  [365] = {.count = 1, .reusable = true}, SHIFT(81),
  [367] = {.count = 1, .reusable = true}, SHIFT(149),
  [369] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(72),
  [374] = {.count = 1, .reusable = true}, SHIFT(46),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [380] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(81),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(149),
  [388] = {.count = 1, .reusable = true}, SHIFT(50),
  [390] = {.count = 1, .reusable = true}, SHIFT(72),
  [392] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(72),
  [397] = {.count = 1, .reusable = true}, SHIFT(45),
  [399] = {.count = 1, .reusable = true}, SHIFT(48),
  [401] = {.count = 1, .reusable = true}, SHIFT(83),
  [403] = {.count = 1, .reusable = true}, SHIFT(89),
  [405] = {.count = 1, .reusable = true}, SHIFT(85),
  [407] = {.count = 1, .reusable = true}, SHIFT(74),
  [409] = {.count = 1, .reusable = true}, SHIFT(86),
  [411] = {.count = 1, .reusable = true}, SHIFT(44),
  [413] = {.count = 1, .reusable = true}, SHIFT(42),
  [415] = {.count = 1, .reusable = true}, SHIFT(152),
  [417] = {.count = 1, .reusable = true}, SHIFT(11),
  [419] = {.count = 1, .reusable = true}, SHIFT(151),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 4),
  [423] = {.count = 1, .reusable = true}, SHIFT(153),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [427] = {.count = 1, .reusable = true}, SHIFT(113),
  [429] = {.count = 1, .reusable = true}, SHIFT(134),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(69),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(69),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_use_operator, 3),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_use_operator, 3),
  [448] = {.count = 1, .reusable = true}, SHIFT(6),
  [450] = {.count = 1, .reusable = true}, SHIFT(70),
  [452] = {.count = 1, .reusable = true}, SHIFT(8),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_type_keyword, 1),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [464] = {.count = 1, .reusable = true}, SHIFT(60),
  [466] = {.count = 1, .reusable = true}, SHIFT(25),
  [468] = {.count = 1, .reusable = true}, SHIFT(135),
  [470] = {.count = 1, .reusable = true}, SHIFT(40),
  [472] = {.count = 1, .reusable = true}, SHIFT(131),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_assign_symbol, 1),
  [476] = {.count = 1, .reusable = true}, SHIFT(67),
  [478] = {.count = 1, .reusable = true}, SHIFT(34),
  [480] = {.count = 1, .reusable = true}, SHIFT(82),
  [482] = {.count = 1, .reusable = true}, SHIFT(32),
  [484] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_use_keyword, 1),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_sem_keyword, 1),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [494] = {.count = 1, .reusable = true}, SHIFT(75),
  [496] = {.count = 1, .reusable = true}, SHIFT(132),
  [498] = {.count = 1, .reusable = true}, SHIFT(16),
  [500] = {.count = 1, .reusable = true}, SHIFT(39),
  [502] = {.count = 1, .reusable = true}, SHIFT(27),
  [504] = {.count = 1, .reusable = true}, SHIFT(144),
  [506] = {.count = 1, .reusable = true}, SHIFT(105),
  [508] = {.count = 1, .reusable = true}, SHIFT(146),
  [510] = {.count = 1, .reusable = true}, SHIFT(147),
  [512] = {.count = 1, .reusable = true}, SHIFT(148),
};

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
  };
  return &language;
}
