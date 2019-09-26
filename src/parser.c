#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 148
#define SYMBOL_COUNT 95
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
  sym_sem_definition = 39,
  sym_sem_alternatives = 40,
  sym_sem_impl = 41,
  sym_attribute = 42,
  sym_local_attribute = 43,
  sym_attr_impl = 44,
  sym_local_attr_impl = 45,
  sym_expr = 46,
  sym_pattern = 47,
  sym_pattern1 = 48,
  sym_at_pattern1 = 49,
  sym_pattern_list = 50,
  sym_type_definition = 51,
  sym_attr_definition = 52,
  sym_attr_declarations = 53,
  sym_old_attr_style = 54,
  sym_new_attr_style = 55,
  sym_inh_attr_declaration_new_style = 56,
  sym_syn_attr_declaration_new_style = 57,
  sym_chn_attr_declaration_new_style = 58,
  sym_inh_attr_declaration_old_style = 59,
  sym_syn_attr_declaration_old_style = 60,
  sym_use_operator = 61,
  sym_data_definition = 62,
  sym_data_alternatives = 63,
  sym_field = 64,
  sym_var_type_definitions = 65,
  sym_var_type_definition = 66,
  sym_type = 67,
  sym_varids = 68,
  sym_code_block = 69,
  sym_data_keyword = 70,
  sym_attr_keyword = 71,
  sym_sem_keyword = 72,
  sym_type_keyword = 73,
  sym_use_keyword = 74,
  sym_inh_keyword = 75,
  sym_syn_keyword = 76,
  sym_chn_keyword = 77,
  sym_type_symbol = 78,
  sym_assign_symbol = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_sem_definition_repeat1 = 81,
  aux_sym_sem_alternatives_repeat1 = 82,
  aux_sym_sem_alternatives_repeat2 = 83,
  aux_sym_attribute_repeat1 = 84,
  aux_sym_pattern_repeat1 = 85,
  aux_sym_pattern_list_repeat1 = 86,
  aux_sym_type_definition_repeat1 = 87,
  aux_sym_attr_declarations_repeat1 = 88,
  aux_sym_old_attr_style_repeat1 = 89,
  aux_sym_old_attr_style_repeat2 = 90,
  aux_sym_data_definition_repeat1 = 91,
  aux_sym_data_alternatives_repeat1 = 92,
  aux_sym_var_type_definitions_repeat1 = 93,
  aux_sym_varids_repeat1 = 94,
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
      if (lookahead == 0) ADVANCE(50);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(50);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(50);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(50);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(50);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'Y') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'Y') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(106);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(78);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'Y') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'M') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'P') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'S') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(104);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(95);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'm') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'p') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'y') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_attr);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_sem);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_sem);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SEM);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SEM);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_lhs_keyword);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_lhs_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_loc_keyword);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_loc_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
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
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 101},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 101},
  [146] = {.lex_state = 101},
  [147] = {.lex_state = 101},
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
    [sym_source_file] = STATE(137),
    [sym__elem] = STATE(7),
    [sym_sem_definition] = STATE(7),
    [sym_type_definition] = STATE(7),
    [sym_attr_definition] = STATE(7),
    [sym_data_definition] = STATE(7),
    [sym_data_keyword] = STATE(136),
    [sym_attr_keyword] = STATE(117),
    [sym_sem_keyword] = STATE(122),
    [sym_type_keyword] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
    [anon_sym_sem] = ACTIONS(9),
    [anon_sym_SEM] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_TYPE] = ACTIONS(11),
  },
  [2] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(23),
    [sym_syn_attr_declaration_new_style] = STATE(23),
    [sym_chn_attr_declaration_new_style] = STATE(23),
    [sym_inh_keyword] = STATE(100),
    [sym_syn_keyword] = STATE(102),
    [sym_chn_keyword] = STATE(103),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_data] = ACTIONS(13),
    [anon_sym_DATA] = ACTIONS(13),
    [anon_sym_attr] = ACTIONS(13),
    [anon_sym_ATTR] = ACTIONS(13),
    [anon_sym_sem] = ACTIONS(13),
    [anon_sym_SEM] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_TYPE] = ACTIONS(13),
    [anon_sym_INH] = ACTIONS(15),
    [anon_sym_inh] = ACTIONS(15),
    [anon_sym_SYN] = ACTIONS(18),
    [anon_sym_syn] = ACTIONS(18),
    [anon_sym_CHN] = ACTIONS(21),
    [anon_sym_chn] = ACTIONS(21),
  },
  [3] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(23),
    [sym_syn_attr_declaration_new_style] = STATE(23),
    [sym_chn_attr_declaration_new_style] = STATE(23),
    [sym_inh_keyword] = STATE(100),
    [sym_syn_keyword] = STATE(102),
    [sym_chn_keyword] = STATE(103),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_DATA] = ACTIONS(24),
    [anon_sym_attr] = ACTIONS(24),
    [anon_sym_ATTR] = ACTIONS(24),
    [anon_sym_sem] = ACTIONS(24),
    [anon_sym_SEM] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_TYPE] = ACTIONS(24),
    [anon_sym_INH] = ACTIONS(26),
    [anon_sym_inh] = ACTIONS(26),
    [anon_sym_SYN] = ACTIONS(28),
    [anon_sym_syn] = ACTIONS(28),
    [anon_sym_CHN] = ACTIONS(30),
    [anon_sym_chn] = ACTIONS(30),
  },
  [4] = {
    [sym_attr_declarations] = STATE(43),
    [sym_old_attr_style] = STATE(48),
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(23),
    [sym_syn_attr_declaration_new_style] = STATE(23),
    [sym_chn_attr_declaration_new_style] = STATE(23),
    [sym_inh_keyword] = STATE(100),
    [sym_syn_keyword] = STATE(102),
    [sym_chn_keyword] = STATE(103),
    [aux_sym_sem_alternatives_repeat1] = STATE(53),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_conid] = ACTIONS(34),
    [anon_sym_INH] = ACTIONS(36),
    [anon_sym_inh] = ACTIONS(26),
    [anon_sym_SYN] = ACTIONS(38),
    [anon_sym_syn] = ACTIONS(28),
    [anon_sym_CHN] = ACTIONS(40),
    [anon_sym_chn] = ACTIONS(30),
  },
  [5] = {
    [sym_sem_impl] = STATE(11),
    [sym_attribute] = STATE(31),
    [sym_local_attribute] = STATE(31),
    [aux_sym_sem_alternatives_repeat1] = STATE(19),
    [aux_sym_sem_alternatives_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_conid] = ACTIONS(44),
    [sym_varid] = ACTIONS(46),
    [anon_sym_data] = ACTIONS(48),
    [anon_sym_DATA] = ACTIONS(48),
    [anon_sym_attr] = ACTIONS(48),
    [anon_sym_ATTR] = ACTIONS(48),
    [anon_sym_sem] = ACTIONS(48),
    [anon_sym_SEM] = ACTIONS(48),
    [anon_sym_type] = ACTIONS(48),
    [anon_sym_TYPE] = ACTIONS(48),
    [sym_lhs_keyword] = ACTIONS(46),
    [sym_loc_keyword] = ACTIONS(50),
  },
  [6] = {
    [sym__elem] = STATE(6),
    [sym_sem_definition] = STATE(6),
    [sym_type_definition] = STATE(6),
    [sym_attr_definition] = STATE(6),
    [sym_data_definition] = STATE(6),
    [sym_data_keyword] = STATE(136),
    [sym_attr_keyword] = STATE(117),
    [sym_sem_keyword] = STATE(122),
    [sym_type_keyword] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_data] = ACTIONS(54),
    [anon_sym_DATA] = ACTIONS(54),
    [anon_sym_attr] = ACTIONS(57),
    [anon_sym_ATTR] = ACTIONS(57),
    [anon_sym_sem] = ACTIONS(60),
    [anon_sym_SEM] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_TYPE] = ACTIONS(63),
  },
  [7] = {
    [sym__elem] = STATE(6),
    [sym_sem_definition] = STATE(6),
    [sym_type_definition] = STATE(6),
    [sym_attr_definition] = STATE(6),
    [sym_data_definition] = STATE(6),
    [sym_data_keyword] = STATE(136),
    [sym_attr_keyword] = STATE(117),
    [sym_sem_keyword] = STATE(122),
    [sym_type_keyword] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
    [anon_sym_sem] = ACTIONS(9),
    [anon_sym_SEM] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_TYPE] = ACTIONS(11),
  },
  [8] = {
    [sym_sem_impl] = STATE(8),
    [sym_attribute] = STATE(31),
    [sym_local_attribute] = STATE(31),
    [aux_sym_sem_alternatives_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym_varid] = ACTIONS(70),
    [anon_sym_data] = ACTIONS(73),
    [anon_sym_DATA] = ACTIONS(68),
    [anon_sym_attr] = ACTIONS(73),
    [anon_sym_ATTR] = ACTIONS(68),
    [anon_sym_sem] = ACTIONS(73),
    [anon_sym_SEM] = ACTIONS(68),
    [anon_sym_type] = ACTIONS(73),
    [anon_sym_TYPE] = ACTIONS(68),
    [sym_lhs_keyword] = ACTIONS(70),
    [sym_loc_keyword] = ACTIONS(75),
  },
  [9] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_data] = ACTIONS(78),
    [anon_sym_DATA] = ACTIONS(78),
    [anon_sym_attr] = ACTIONS(78),
    [anon_sym_ATTR] = ACTIONS(78),
    [anon_sym_sem] = ACTIONS(78),
    [anon_sym_SEM] = ACTIONS(78),
    [anon_sym_type] = ACTIONS(78),
    [anon_sym_TYPE] = ACTIONS(78),
    [anon_sym_INH] = ACTIONS(78),
    [anon_sym_inh] = ACTIONS(78),
    [anon_sym_SYN] = ACTIONS(78),
    [anon_sym_syn] = ACTIONS(78),
    [anon_sym_CHN] = ACTIONS(78),
    [anon_sym_chn] = ACTIONS(78),
  },
  [10] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_data] = ACTIONS(82),
    [anon_sym_DATA] = ACTIONS(82),
    [anon_sym_attr] = ACTIONS(82),
    [anon_sym_ATTR] = ACTIONS(82),
    [anon_sym_sem] = ACTIONS(82),
    [anon_sym_SEM] = ACTIONS(82),
    [anon_sym_type] = ACTIONS(82),
    [anon_sym_TYPE] = ACTIONS(82),
    [anon_sym_INH] = ACTIONS(82),
    [anon_sym_inh] = ACTIONS(82),
    [anon_sym_SYN] = ACTIONS(82),
    [anon_sym_syn] = ACTIONS(82),
    [anon_sym_CHN] = ACTIONS(82),
    [anon_sym_chn] = ACTIONS(82),
  },
  [11] = {
    [sym_sem_impl] = STATE(8),
    [sym_attribute] = STATE(31),
    [sym_local_attribute] = STATE(31),
    [aux_sym_sem_alternatives_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [sym_varid] = ACTIONS(46),
    [anon_sym_data] = ACTIONS(86),
    [anon_sym_DATA] = ACTIONS(84),
    [anon_sym_attr] = ACTIONS(86),
    [anon_sym_ATTR] = ACTIONS(84),
    [anon_sym_sem] = ACTIONS(86),
    [anon_sym_SEM] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_TYPE] = ACTIONS(84),
    [sym_lhs_keyword] = ACTIONS(46),
    [sym_loc_keyword] = ACTIONS(50),
  },
  [12] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_data] = ACTIONS(88),
    [anon_sym_DATA] = ACTIONS(88),
    [anon_sym_attr] = ACTIONS(88),
    [anon_sym_ATTR] = ACTIONS(88),
    [anon_sym_sem] = ACTIONS(88),
    [anon_sym_SEM] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_TYPE] = ACTIONS(88),
    [anon_sym_INH] = ACTIONS(88),
    [anon_sym_inh] = ACTIONS(88),
    [anon_sym_SYN] = ACTIONS(88),
    [anon_sym_syn] = ACTIONS(88),
    [anon_sym_CHN] = ACTIONS(88),
    [anon_sym_chn] = ACTIONS(88),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_data] = ACTIONS(88),
    [anon_sym_DATA] = ACTIONS(88),
    [anon_sym_attr] = ACTIONS(88),
    [anon_sym_ATTR] = ACTIONS(88),
    [anon_sym_sem] = ACTIONS(88),
    [anon_sym_SEM] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_TYPE] = ACTIONS(88),
    [anon_sym_INH] = ACTIONS(88),
    [anon_sym_inh] = ACTIONS(88),
    [anon_sym_SYN] = ACTIONS(88),
    [anon_sym_syn] = ACTIONS(88),
    [anon_sym_CHN] = ACTIONS(88),
    [anon_sym_chn] = ACTIONS(88),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_data] = ACTIONS(93),
    [anon_sym_DATA] = ACTIONS(93),
    [anon_sym_attr] = ACTIONS(93),
    [anon_sym_ATTR] = ACTIONS(93),
    [anon_sym_sem] = ACTIONS(93),
    [anon_sym_SEM] = ACTIONS(93),
    [anon_sym_type] = ACTIONS(93),
    [anon_sym_TYPE] = ACTIONS(93),
    [anon_sym_INH] = ACTIONS(93),
    [anon_sym_inh] = ACTIONS(93),
    [anon_sym_SYN] = ACTIONS(93),
    [anon_sym_syn] = ACTIONS(93),
    [anon_sym_CHN] = ACTIONS(93),
    [anon_sym_chn] = ACTIONS(93),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_data] = ACTIONS(95),
    [anon_sym_DATA] = ACTIONS(95),
    [anon_sym_attr] = ACTIONS(95),
    [anon_sym_ATTR] = ACTIONS(95),
    [anon_sym_sem] = ACTIONS(95),
    [anon_sym_SEM] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_TYPE] = ACTIONS(95),
    [anon_sym_INH] = ACTIONS(95),
    [anon_sym_inh] = ACTIONS(95),
    [anon_sym_SYN] = ACTIONS(95),
    [anon_sym_syn] = ACTIONS(95),
    [anon_sym_CHN] = ACTIONS(95),
    [anon_sym_chn] = ACTIONS(95),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(97),
    [anon_sym_DATA] = ACTIONS(97),
    [anon_sym_attr] = ACTIONS(97),
    [anon_sym_ATTR] = ACTIONS(97),
    [anon_sym_sem] = ACTIONS(97),
    [anon_sym_SEM] = ACTIONS(97),
    [anon_sym_type] = ACTIONS(97),
    [anon_sym_TYPE] = ACTIONS(97),
    [anon_sym_INH] = ACTIONS(97),
    [anon_sym_inh] = ACTIONS(97),
    [anon_sym_SYN] = ACTIONS(97),
    [anon_sym_syn] = ACTIONS(97),
    [anon_sym_CHN] = ACTIONS(97),
    [anon_sym_chn] = ACTIONS(97),
  },
  [17] = {
    [sym_attr_impl] = STATE(17),
    [aux_sym_attribute_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(101),
    [sym_varid] = ACTIONS(104),
    [anon_sym_data] = ACTIONS(104),
    [anon_sym_DATA] = ACTIONS(99),
    [anon_sym_attr] = ACTIONS(104),
    [anon_sym_ATTR] = ACTIONS(99),
    [anon_sym_sem] = ACTIONS(104),
    [anon_sym_SEM] = ACTIONS(99),
    [anon_sym_type] = ACTIONS(104),
    [anon_sym_TYPE] = ACTIONS(99),
    [sym_lhs_keyword] = ACTIONS(104),
    [sym_loc_keyword] = ACTIONS(104),
  },
  [18] = {
    [sym_attr_impl] = STATE(17),
    [aux_sym_attribute_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(108),
    [sym_varid] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_DATA] = ACTIONS(106),
    [anon_sym_attr] = ACTIONS(110),
    [anon_sym_ATTR] = ACTIONS(106),
    [anon_sym_sem] = ACTIONS(110),
    [anon_sym_SEM] = ACTIONS(106),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_TYPE] = ACTIONS(106),
    [sym_lhs_keyword] = ACTIONS(110),
    [sym_loc_keyword] = ACTIONS(110),
  },
  [19] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym_conid] = ACTIONS(114),
    [sym_varid] = ACTIONS(117),
    [anon_sym_data] = ACTIONS(117),
    [anon_sym_DATA] = ACTIONS(117),
    [anon_sym_attr] = ACTIONS(117),
    [anon_sym_ATTR] = ACTIONS(117),
    [anon_sym_sem] = ACTIONS(117),
    [anon_sym_SEM] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(117),
    [anon_sym_TYPE] = ACTIONS(117),
    [sym_lhs_keyword] = ACTIONS(117),
    [sym_loc_keyword] = ACTIONS(117),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_data] = ACTIONS(119),
    [anon_sym_DATA] = ACTIONS(119),
    [anon_sym_attr] = ACTIONS(119),
    [anon_sym_ATTR] = ACTIONS(119),
    [anon_sym_sem] = ACTIONS(119),
    [anon_sym_SEM] = ACTIONS(119),
    [anon_sym_type] = ACTIONS(119),
    [anon_sym_TYPE] = ACTIONS(119),
    [anon_sym_INH] = ACTIONS(119),
    [anon_sym_inh] = ACTIONS(119),
    [anon_sym_SYN] = ACTIONS(119),
    [anon_sym_syn] = ACTIONS(119),
    [anon_sym_CHN] = ACTIONS(119),
    [anon_sym_chn] = ACTIONS(119),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_data] = ACTIONS(121),
    [anon_sym_DATA] = ACTIONS(121),
    [anon_sym_attr] = ACTIONS(121),
    [anon_sym_ATTR] = ACTIONS(121),
    [anon_sym_sem] = ACTIONS(121),
    [anon_sym_SEM] = ACTIONS(121),
    [anon_sym_type] = ACTIONS(121),
    [anon_sym_TYPE] = ACTIONS(121),
    [anon_sym_INH] = ACTIONS(121),
    [anon_sym_inh] = ACTIONS(121),
    [anon_sym_SYN] = ACTIONS(121),
    [anon_sym_syn] = ACTIONS(121),
    [anon_sym_CHN] = ACTIONS(121),
    [anon_sym_chn] = ACTIONS(121),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_data] = ACTIONS(123),
    [anon_sym_DATA] = ACTIONS(123),
    [anon_sym_attr] = ACTIONS(123),
    [anon_sym_ATTR] = ACTIONS(123),
    [anon_sym_sem] = ACTIONS(123),
    [anon_sym_SEM] = ACTIONS(123),
    [anon_sym_type] = ACTIONS(123),
    [anon_sym_TYPE] = ACTIONS(123),
    [anon_sym_INH] = ACTIONS(123),
    [anon_sym_inh] = ACTIONS(123),
    [anon_sym_SYN] = ACTIONS(123),
    [anon_sym_syn] = ACTIONS(123),
    [anon_sym_CHN] = ACTIONS(123),
    [anon_sym_chn] = ACTIONS(123),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_data] = ACTIONS(125),
    [anon_sym_DATA] = ACTIONS(125),
    [anon_sym_attr] = ACTIONS(125),
    [anon_sym_ATTR] = ACTIONS(125),
    [anon_sym_sem] = ACTIONS(125),
    [anon_sym_SEM] = ACTIONS(125),
    [anon_sym_type] = ACTIONS(125),
    [anon_sym_TYPE] = ACTIONS(125),
    [anon_sym_INH] = ACTIONS(125),
    [anon_sym_inh] = ACTIONS(125),
    [anon_sym_SYN] = ACTIONS(125),
    [anon_sym_syn] = ACTIONS(125),
    [anon_sym_CHN] = ACTIONS(125),
    [anon_sym_chn] = ACTIONS(125),
  },
  [24] = {
    [sym_field] = STATE(24),
    [sym_var_type_definition] = STATE(36),
    [aux_sym_data_alternatives_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [sym_conid] = ACTIONS(129),
    [sym_varid] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(135),
    [anon_sym_DATA] = ACTIONS(135),
    [anon_sym_attr] = ACTIONS(135),
    [anon_sym_ATTR] = ACTIONS(135),
    [anon_sym_sem] = ACTIONS(135),
    [anon_sym_SEM] = ACTIONS(135),
    [anon_sym_type] = ACTIONS(135),
    [anon_sym_TYPE] = ACTIONS(135),
  },
  [25] = {
    [sym_field] = STATE(24),
    [sym_var_type_definition] = STATE(36),
    [aux_sym_data_alternatives_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [sym_conid] = ACTIONS(139),
    [sym_varid] = ACTIONS(141),
    [anon_sym_data] = ACTIONS(143),
    [anon_sym_DATA] = ACTIONS(143),
    [anon_sym_attr] = ACTIONS(143),
    [anon_sym_ATTR] = ACTIONS(143),
    [anon_sym_sem] = ACTIONS(143),
    [anon_sym_SEM] = ACTIONS(143),
    [anon_sym_type] = ACTIONS(143),
    [anon_sym_TYPE] = ACTIONS(143),
  },
  [26] = {
    [sym_field] = STATE(25),
    [sym_var_type_definition] = STATE(36),
    [aux_sym_data_alternatives_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_conid] = ACTIONS(139),
    [sym_varid] = ACTIONS(141),
    [anon_sym_data] = ACTIONS(147),
    [anon_sym_DATA] = ACTIONS(147),
    [anon_sym_attr] = ACTIONS(147),
    [anon_sym_ATTR] = ACTIONS(147),
    [anon_sym_sem] = ACTIONS(147),
    [anon_sym_SEM] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_TYPE] = ACTIONS(147),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [sym_varid] = ACTIONS(151),
    [anon_sym_data] = ACTIONS(151),
    [anon_sym_DATA] = ACTIONS(149),
    [anon_sym_attr] = ACTIONS(151),
    [anon_sym_ATTR] = ACTIONS(149),
    [anon_sym_sem] = ACTIONS(151),
    [anon_sym_SEM] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(151),
    [anon_sym_TYPE] = ACTIONS(149),
    [sym_lhs_keyword] = ACTIONS(151),
    [sym_loc_keyword] = ACTIONS(151),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(95),
    [sym_varid] = ACTIONS(153),
    [anon_sym_data] = ACTIONS(153),
    [anon_sym_DATA] = ACTIONS(95),
    [anon_sym_attr] = ACTIONS(153),
    [anon_sym_ATTR] = ACTIONS(95),
    [anon_sym_sem] = ACTIONS(153),
    [anon_sym_SEM] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(153),
    [anon_sym_TYPE] = ACTIONS(95),
    [sym_lhs_keyword] = ACTIONS(153),
    [sym_loc_keyword] = ACTIONS(153),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [sym_varid] = ACTIONS(157),
    [anon_sym_data] = ACTIONS(157),
    [anon_sym_DATA] = ACTIONS(155),
    [anon_sym_attr] = ACTIONS(157),
    [anon_sym_ATTR] = ACTIONS(155),
    [anon_sym_sem] = ACTIONS(157),
    [anon_sym_SEM] = ACTIONS(155),
    [anon_sym_type] = ACTIONS(157),
    [anon_sym_TYPE] = ACTIONS(155),
    [sym_lhs_keyword] = ACTIONS(157),
    [sym_loc_keyword] = ACTIONS(157),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(159),
    [sym_varid] = ACTIONS(161),
    [anon_sym_data] = ACTIONS(161),
    [anon_sym_DATA] = ACTIONS(159),
    [anon_sym_attr] = ACTIONS(161),
    [anon_sym_ATTR] = ACTIONS(159),
    [anon_sym_sem] = ACTIONS(161),
    [anon_sym_SEM] = ACTIONS(159),
    [anon_sym_type] = ACTIONS(161),
    [anon_sym_TYPE] = ACTIONS(159),
    [sym_lhs_keyword] = ACTIONS(161),
    [sym_loc_keyword] = ACTIONS(161),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [sym_varid] = ACTIONS(165),
    [anon_sym_data] = ACTIONS(165),
    [anon_sym_DATA] = ACTIONS(163),
    [anon_sym_attr] = ACTIONS(165),
    [anon_sym_ATTR] = ACTIONS(163),
    [anon_sym_sem] = ACTIONS(165),
    [anon_sym_SEM] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(165),
    [anon_sym_TYPE] = ACTIONS(163),
    [sym_lhs_keyword] = ACTIONS(165),
    [sym_loc_keyword] = ACTIONS(165),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
    [sym_varid] = ACTIONS(169),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_DATA] = ACTIONS(167),
    [anon_sym_attr] = ACTIONS(169),
    [anon_sym_ATTR] = ACTIONS(167),
    [anon_sym_sem] = ACTIONS(169),
    [anon_sym_SEM] = ACTIONS(167),
    [anon_sym_type] = ACTIONS(169),
    [anon_sym_TYPE] = ACTIONS(167),
    [sym_lhs_keyword] = ACTIONS(169),
    [sym_loc_keyword] = ACTIONS(169),
  },
  [33] = {
    [sym_data_alternatives] = STATE(41),
    [aux_sym_data_definition_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_data] = ACTIONS(171),
    [anon_sym_DATA] = ACTIONS(171),
    [anon_sym_attr] = ACTIONS(171),
    [anon_sym_ATTR] = ACTIONS(171),
    [anon_sym_sem] = ACTIONS(171),
    [anon_sym_SEM] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(171),
    [anon_sym_TYPE] = ACTIONS(171),
  },
  [34] = {
    [sym_sem_alternatives] = STATE(37),
    [aux_sym_sem_definition_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_data] = ACTIONS(175),
    [anon_sym_DATA] = ACTIONS(175),
    [anon_sym_attr] = ACTIONS(175),
    [anon_sym_ATTR] = ACTIONS(175),
    [anon_sym_sem] = ACTIONS(175),
    [anon_sym_SEM] = ACTIONS(175),
    [anon_sym_type] = ACTIONS(175),
    [anon_sym_TYPE] = ACTIONS(175),
  },
  [35] = {
    [sym_data_alternatives] = STATE(35),
    [aux_sym_data_definition_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_data] = ACTIONS(179),
    [anon_sym_DATA] = ACTIONS(179),
    [anon_sym_attr] = ACTIONS(179),
    [anon_sym_ATTR] = ACTIONS(179),
    [anon_sym_sem] = ACTIONS(179),
    [anon_sym_SEM] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_TYPE] = ACTIONS(179),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [sym_conid] = ACTIONS(186),
    [sym_varid] = ACTIONS(186),
    [anon_sym_data] = ACTIONS(186),
    [anon_sym_DATA] = ACTIONS(186),
    [anon_sym_attr] = ACTIONS(186),
    [anon_sym_ATTR] = ACTIONS(186),
    [anon_sym_sem] = ACTIONS(186),
    [anon_sym_SEM] = ACTIONS(186),
    [anon_sym_type] = ACTIONS(186),
    [anon_sym_TYPE] = ACTIONS(186),
  },
  [37] = {
    [sym_sem_alternatives] = STATE(37),
    [aux_sym_sem_definition_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_data] = ACTIONS(188),
    [anon_sym_DATA] = ACTIONS(188),
    [anon_sym_attr] = ACTIONS(188),
    [anon_sym_ATTR] = ACTIONS(188),
    [anon_sym_sem] = ACTIONS(188),
    [anon_sym_SEM] = ACTIONS(188),
    [anon_sym_type] = ACTIONS(188),
    [anon_sym_TYPE] = ACTIONS(188),
  },
  [38] = {
    [sym_sem_alternatives] = STATE(34),
    [aux_sym_sem_definition_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_data] = ACTIONS(193),
    [anon_sym_DATA] = ACTIONS(193),
    [anon_sym_attr] = ACTIONS(193),
    [anon_sym_ATTR] = ACTIONS(193),
    [anon_sym_sem] = ACTIONS(193),
    [anon_sym_SEM] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_TYPE] = ACTIONS(193),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_conid] = ACTIONS(195),
    [sym_varid] = ACTIONS(195),
    [anon_sym_data] = ACTIONS(195),
    [anon_sym_DATA] = ACTIONS(195),
    [anon_sym_attr] = ACTIONS(195),
    [anon_sym_ATTR] = ACTIONS(195),
    [anon_sym_sem] = ACTIONS(195),
    [anon_sym_SEM] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_TYPE] = ACTIONS(195),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [sym_conid] = ACTIONS(197),
    [sym_varid] = ACTIONS(197),
    [anon_sym_data] = ACTIONS(197),
    [anon_sym_DATA] = ACTIONS(197),
    [anon_sym_attr] = ACTIONS(197),
    [anon_sym_ATTR] = ACTIONS(197),
    [anon_sym_sem] = ACTIONS(197),
    [anon_sym_SEM] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_TYPE] = ACTIONS(197),
  },
  [41] = {
    [sym_data_alternatives] = STATE(35),
    [aux_sym_data_definition_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_data] = ACTIONS(199),
    [anon_sym_DATA] = ACTIONS(199),
    [anon_sym_attr] = ACTIONS(199),
    [anon_sym_ATTR] = ACTIONS(199),
    [anon_sym_sem] = ACTIONS(199),
    [anon_sym_SEM] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(199),
    [anon_sym_TYPE] = ACTIONS(199),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [sym_conid] = ACTIONS(153),
    [sym_varid] = ACTIONS(153),
    [anon_sym_data] = ACTIONS(153),
    [anon_sym_DATA] = ACTIONS(153),
    [anon_sym_attr] = ACTIONS(153),
    [anon_sym_ATTR] = ACTIONS(153),
    [anon_sym_sem] = ACTIONS(153),
    [anon_sym_SEM] = ACTIONS(153),
    [anon_sym_type] = ACTIONS(153),
    [anon_sym_TYPE] = ACTIONS(153),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_data] = ACTIONS(201),
    [anon_sym_DATA] = ACTIONS(201),
    [anon_sym_attr] = ACTIONS(201),
    [anon_sym_ATTR] = ACTIONS(201),
    [anon_sym_sem] = ACTIONS(201),
    [anon_sym_SEM] = ACTIONS(201),
    [anon_sym_type] = ACTIONS(201),
    [anon_sym_TYPE] = ACTIONS(201),
  },
  [44] = {
    [sym_pattern1] = STATE(52),
    [aux_sym_pattern_repeat1] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(205),
    [sym_varid] = ACTIONS(209),
    [anon_sym_COLON_EQ] = ACTIONS(205),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_data] = ACTIONS(211),
    [anon_sym_DATA] = ACTIONS(211),
    [anon_sym_attr] = ACTIONS(211),
    [anon_sym_ATTR] = ACTIONS(211),
    [anon_sym_sem] = ACTIONS(211),
    [anon_sym_SEM] = ACTIONS(211),
    [anon_sym_type] = ACTIONS(211),
    [anon_sym_TYPE] = ACTIONS(211),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_data] = ACTIONS(213),
    [anon_sym_DATA] = ACTIONS(213),
    [anon_sym_attr] = ACTIONS(213),
    [anon_sym_ATTR] = ACTIONS(213),
    [anon_sym_sem] = ACTIONS(213),
    [anon_sym_SEM] = ACTIONS(213),
    [anon_sym_type] = ACTIONS(213),
    [anon_sym_TYPE] = ACTIONS(213),
  },
  [47] = {
    [sym_pattern1] = STATE(47),
    [aux_sym_pattern_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym__] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(218),
    [sym_varid] = ACTIONS(223),
    [anon_sym_COLON_EQ] = ACTIONS(218),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_DATA] = ACTIONS(24),
    [anon_sym_attr] = ACTIONS(24),
    [anon_sym_ATTR] = ACTIONS(24),
    [anon_sym_sem] = ACTIONS(24),
    [anon_sym_SEM] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_TYPE] = ACTIONS(24),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_data] = ACTIONS(226),
    [anon_sym_DATA] = ACTIONS(226),
    [anon_sym_attr] = ACTIONS(226),
    [anon_sym_ATTR] = ACTIONS(226),
    [anon_sym_sem] = ACTIONS(226),
    [anon_sym_SEM] = ACTIONS(226),
    [anon_sym_type] = ACTIONS(226),
    [anon_sym_TYPE] = ACTIONS(226),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_data] = ACTIONS(228),
    [anon_sym_DATA] = ACTIONS(228),
    [anon_sym_attr] = ACTIONS(228),
    [anon_sym_ATTR] = ACTIONS(228),
    [anon_sym_sem] = ACTIONS(228),
    [anon_sym_SEM] = ACTIONS(228),
    [anon_sym_type] = ACTIONS(228),
    [anon_sym_TYPE] = ACTIONS(228),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_data] = ACTIONS(230),
    [anon_sym_DATA] = ACTIONS(230),
    [anon_sym_attr] = ACTIONS(230),
    [anon_sym_ATTR] = ACTIONS(230),
    [anon_sym_sem] = ACTIONS(230),
    [anon_sym_SEM] = ACTIONS(230),
    [anon_sym_type] = ACTIONS(230),
    [anon_sym_TYPE] = ACTIONS(230),
  },
  [52] = {
    [sym_pattern1] = STATE(47),
    [aux_sym_pattern_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [sym_varid] = ACTIONS(209),
    [anon_sym_COLON_EQ] = ACTIONS(232),
  },
  [53] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(53),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_conid] = ACTIONS(234),
    [anon_sym_INH] = ACTIONS(117),
    [anon_sym_inh] = ACTIONS(112),
    [anon_sym_SYN] = ACTIONS(117),
    [anon_sym_syn] = ACTIONS(112),
    [anon_sym_CHN] = ACTIONS(117),
    [anon_sym_chn] = ACTIONS(112),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_data] = ACTIONS(237),
    [anon_sym_DATA] = ACTIONS(237),
    [anon_sym_attr] = ACTIONS(237),
    [anon_sym_ATTR] = ACTIONS(237),
    [anon_sym_sem] = ACTIONS(237),
    [anon_sym_SEM] = ACTIONS(237),
    [anon_sym_type] = ACTIONS(237),
    [anon_sym_TYPE] = ACTIONS(237),
  },
  [55] = {
    [sym_at_pattern1] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym__] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [sym_varid] = ACTIONS(239),
    [anon_sym_COLON_EQ] = ACTIONS(239),
  },
  [56] = {
    [sym_pattern] = STATE(109),
    [sym_pattern1] = STATE(88),
    [sym_pattern_list] = STATE(135),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym__] = ACTIONS(207),
    [sym_conid] = ACTIONS(245),
    [sym_varid] = ACTIONS(209),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym__] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [sym_varid] = ACTIONS(247),
    [anon_sym_COLON_EQ] = ACTIONS(247),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym__] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(249),
    [sym_varid] = ACTIONS(249),
    [anon_sym_COLON_EQ] = ACTIONS(249),
  },
  [59] = {
    [sym_use_operator] = STATE(94),
    [sym_use_keyword] = STATE(113),
    [sym_type_symbol] = STATE(93),
    [anon_sym_use] = ACTIONS(251),
    [anon_sym_USE] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(255),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_conid] = ACTIONS(95),
    [sym_varid] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(95),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym__] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [sym_varid] = ACTIONS(239),
    [anon_sym_COLON_EQ] = ACTIONS(239),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym__] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(257),
    [sym_varid] = ACTIONS(257),
    [anon_sym_COLON_EQ] = ACTIONS(257),
  },
  [63] = {
    [aux_sym_varids_repeat1] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_USE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_COLON_COLON] = ACTIONS(262),
  },
  [64] = {
    [aux_sym_varids_repeat1] = STATE(63),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_use] = ACTIONS(268),
    [anon_sym_USE] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_COLON_COLON] = ACTIONS(268),
  },
  [65] = {
    [sym_type] = STATE(65),
    [sym_code_block] = STATE(86),
    [aux_sym_type_definition_repeat1] = STATE(65),
    [anon_sym_RBRACK] = ACTIONS(272),
    [sym_conid] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(277),
  },
  [66] = {
    [sym_type] = STATE(70),
    [sym_code_block] = STATE(86),
    [aux_sym_type_definition_repeat1] = STATE(70),
    [anon_sym_RBRACK] = ACTIONS(280),
    [sym_conid] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [67] = {
    [aux_sym_varids_repeat1] = STATE(64),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_use] = ACTIONS(286),
    [anon_sym_USE] = ACTIONS(286),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_COLON_COLON] = ACTIONS(286),
  },
  [68] = {
    [sym_pattern] = STATE(107),
    [sym_pattern1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym__] = ACTIONS(207),
    [sym_conid] = ACTIONS(245),
    [sym_varid] = ACTIONS(209),
  },
  [69] = {
    [sym_pattern] = STATE(118),
    [sym_pattern1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym__] = ACTIONS(207),
    [sym_conid] = ACTIONS(245),
    [sym_varid] = ACTIONS(209),
  },
  [70] = {
    [sym_type] = STATE(65),
    [sym_code_block] = STATE(86),
    [aux_sym_type_definition_repeat1] = STATE(65),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_conid] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [71] = {
    [sym_syn_attr_declaration_old_style] = STATE(71),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_RBRACK] = ACTIONS(292),
    [sym_varid] = ACTIONS(294),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_USE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_COLON_COLON] = ACTIONS(262),
  },
  [73] = {
    [sym_syn_attr_declaration_old_style] = STATE(71),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_varid] = ACTIONS(299),
  },
  [74] = {
    [sym_syn_attr_declaration_old_style] = STATE(71),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_varid] = ACTIONS(299),
  },
  [75] = {
    [sym_syn_attr_declaration_old_style] = STATE(73),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(73),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_varid] = ACTIONS(299),
  },
  [76] = {
    [sym_syn_attr_declaration_old_style] = STATE(78),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(78),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_varid] = ACTIONS(299),
  },
  [77] = {
    [sym_syn_attr_declaration_old_style] = STATE(80),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(305),
    [sym_varid] = ACTIONS(299),
  },
  [78] = {
    [sym_syn_attr_declaration_old_style] = STATE(71),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_varid] = ACTIONS(299),
  },
  [79] = {
    [sym_syn_attr_declaration_old_style] = STATE(71),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(305),
    [sym_varid] = ACTIONS(299),
  },
  [80] = {
    [sym_syn_attr_declaration_old_style] = STATE(71),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(307),
    [sym_varid] = ACTIONS(299),
  },
  [81] = {
    [sym_syn_attr_declaration_old_style] = STATE(74),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(74),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_varid] = ACTIONS(299),
  },
  [82] = {
    [sym_inh_attr_declaration_old_style] = STATE(85),
    [sym_varids] = STATE(105),
    [aux_sym_old_attr_style_repeat1] = STATE(85),
    [anon_sym_PIPE] = ACTIONS(311),
    [sym_varid] = ACTIONS(299),
  },
  [83] = {
    [sym_syn_attr_declaration_old_style] = STATE(79),
    [sym_varids] = STATE(59),
    [aux_sym_old_attr_style_repeat2] = STATE(79),
    [anon_sym_PIPE] = ACTIONS(313),
    [sym_varid] = ACTIONS(299),
  },
  [84] = {
    [sym_inh_attr_declaration_old_style] = STATE(82),
    [sym_varids] = STATE(105),
    [aux_sym_old_attr_style_repeat1] = STATE(82),
    [anon_sym_PIPE] = ACTIONS(315),
    [sym_varid] = ACTIONS(299),
  },
  [85] = {
    [sym_inh_attr_declaration_old_style] = STATE(85),
    [sym_varids] = STATE(105),
    [aux_sym_old_attr_style_repeat1] = STATE(85),
    [anon_sym_PIPE] = ACTIONS(317),
    [sym_varid] = ACTIONS(319),
  },
  [86] = {
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [sym_conid] = ACTIONS(97),
    [sym_varid] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
  },
  [87] = {
    [sym_type] = STATE(14),
    [sym_code_block] = STATE(16),
    [sym_conid] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(324),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_COLON_EQ] = ACTIONS(205),
  },
  [89] = {
    [sym_type] = STATE(40),
    [sym_code_block] = STATE(39),
    [sym_conid] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(328),
  },
  [90] = {
    [sym_pattern1] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym__] = ACTIONS(207),
    [sym_varid] = ACTIONS(209),
  },
  [91] = {
    [sym_type] = STATE(110),
    [sym_code_block] = STATE(86),
    [sym_conid] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [92] = {
    [sym_type] = STATE(112),
    [sym_code_block] = STATE(86),
    [sym_conid] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [93] = {
    [sym_type] = STATE(98),
    [sym_code_block] = STATE(86),
    [sym_conid] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [94] = {
    [sym_type_symbol] = STATE(91),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(255),
  },
  [95] = {
    [sym_expr] = STATE(29),
    [sym_code_block] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(330),
  },
  [96] = {
    [sym_type_symbol] = STATE(89),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(255),
  },
  [97] = {
    [aux_sym_pattern_list_repeat1] = STATE(97),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(334),
  },
  [98] = {
    [anon_sym_PIPE] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_varid] = ACTIONS(337),
  },
  [99] = {
    [aux_sym_pattern_list_repeat1] = STATE(97),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(341),
  },
  [100] = {
    [sym_var_type_definitions] = STATE(21),
    [sym_var_type_definition] = STATE(9),
    [sym_varid] = ACTIONS(343),
  },
  [101] = {
    [sym_assign_symbol] = STATE(95),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_COLON_EQ] = ACTIONS(345),
  },
  [102] = {
    [sym_var_type_definitions] = STATE(22),
    [sym_var_type_definition] = STATE(9),
    [sym_varid] = ACTIONS(343),
  },
  [103] = {
    [sym_var_type_definitions] = STATE(20),
    [sym_var_type_definition] = STATE(9),
    [sym_varid] = ACTIONS(343),
  },
  [104] = {
    [sym_expr] = STATE(30),
    [sym_code_block] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(330),
  },
  [105] = {
    [sym_type_symbol] = STATE(92),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(255),
  },
  [106] = {
    [sym_attr_impl] = STATE(18),
    [aux_sym_attribute_repeat1] = STATE(18),
    [anon_sym_DOT] = ACTIONS(108),
  },
  [107] = {
    [sym_assign_symbol] = STATE(104),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_COLON_EQ] = ACTIONS(345),
  },
  [108] = {
    [sym_type_symbol] = STATE(87),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(255),
  },
  [109] = {
    [aux_sym_pattern_list_repeat1] = STATE(99),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_COMMA] = ACTIONS(341),
  },
  [110] = {
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_varid] = ACTIONS(349),
  },
  [111] = {
    [sym_var_type_definition] = STATE(13),
    [sym_varid] = ACTIONS(343),
  },
  [112] = {
    [anon_sym_PIPE] = ACTIONS(351),
    [sym_varid] = ACTIONS(351),
  },
  [113] = {
    [sym_code_block] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [114] = {
    [sym_conid] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
  },
  [115] = {
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_COLON_COLON] = ACTIONS(357),
  },
  [116] = {
    [sym_code_block] = STATE(115),
    [anon_sym_LBRACE] = ACTIONS(284),
  },
  [117] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(4),
    [sym_conid] = ACTIONS(359),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(332),
  },
  [119] = {
    [sym_local_attr_impl] = STATE(32),
    [anon_sym_DOT] = ACTIONS(361),
  },
  [120] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(5),
    [sym_conid] = ACTIONS(363),
  },
  [121] = {
    [anon_sym_EQ] = ACTIONS(365),
  },
  [122] = {
    [sym_conid] = ACTIONS(367),
  },
  [123] = {
    [sym_code_block_content] = ACTIONS(369),
  },
  [124] = {
    [sym_conid] = ACTIONS(371),
  },
  [125] = {
    [sym_varid] = ACTIONS(373),
  },
  [126] = {
    [anon_sym_LBRACE] = ACTIONS(375),
  },
  [127] = {
    [sym_varid] = ACTIONS(377),
  },
  [128] = {
    [sym_varid] = ACTIONS(379),
  },
  [129] = {
    [sym_conid] = ACTIONS(381),
  },
  [130] = {
    [sym_varid] = ACTIONS(383),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(385),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(387),
  },
  [133] = {
    [sym_conid] = ACTIONS(389),
  },
  [134] = {
    [sym_varid] = ACTIONS(391),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(393),
  },
  [136] = {
    [sym_conid] = ACTIONS(395),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(397),
  },
  [138] = {
    [sym_conid] = ACTIONS(399),
  },
  [139] = {
    [sym_conid] = ACTIONS(401),
  },
  [140] = {
    [sym_conid] = ACTIONS(403),
  },
  [141] = {
    [anon_sym_RBRACE] = ACTIONS(405),
  },
  [142] = {
    [anon_sym_RBRACE] = ACTIONS(407),
  },
  [143] = {
    [anon_sym_RBRACE] = ACTIONS(409),
  },
  [144] = {
    [anon_sym_LBRACE] = ACTIONS(411),
  },
  [145] = {
    [sym_code_block_content] = ACTIONS(413),
  },
  [146] = {
    [sym_code_block_content] = ACTIONS(415),
  },
  [147] = {
    [sym_code_block_content] = ACTIONS(417),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(124),
  [7] = {.count = 1, .reusable = true}, SHIFT(140),
  [9] = {.count = 1, .reusable = true}, SHIFT(139),
  [11] = {.count = 1, .reusable = true}, SHIFT(138),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [15] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(128),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(127),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(125),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [26] = {.count = 1, .reusable = true}, SHIFT(128),
  [28] = {.count = 1, .reusable = true}, SHIFT(127),
  [30] = {.count = 1, .reusable = true}, SHIFT(125),
  [32] = {.count = 1, .reusable = true}, SHIFT(84),
  [34] = {.count = 1, .reusable = false}, SHIFT(53),
  [36] = {.count = 1, .reusable = false}, SHIFT(128),
  [38] = {.count = 1, .reusable = false}, SHIFT(127),
  [40] = {.count = 1, .reusable = false}, SHIFT(125),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 2),
  [44] = {.count = 1, .reusable = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = false}, SHIFT(106),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 2),
  [50] = {.count = 1, .reusable = false}, SHIFT(119),
  [52] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(106),
  [73] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(119),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [80] = {.count = 1, .reusable = true}, SHIFT(111),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 3),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 3),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(111),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_code_block, 3),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(134),
  [104] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attribute_repeat1, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [108] = {.count = 1, .reusable = true}, SHIFT(134),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(36),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(96),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [139] = {.count = 1, .reusable = false}, SHIFT(36),
  [141] = {.count = 1, .reusable = false}, SHIFT(96),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_code_block, 3),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_attr_impl, 4),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_attr_impl, 4),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_local_attr_impl, 4),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_local_attr_impl, 4),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_sem_impl, 1),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_sem_impl, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_local_attribute, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_local_attribute, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(129),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 3),
  [177] = {.count = 1, .reusable = true}, SHIFT(120),
  [179] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(129),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2), SHIFT_REPEAT(120),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [203] = {.count = 1, .reusable = true}, SHIFT(56),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(61),
  [209] = {.count = 1, .reusable = true}, SHIFT(55),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 6),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(56),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(61),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(55),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(53),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 5),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(90),
  [243] = {.count = 1, .reusable = true}, SHIFT(62),
  [245] = {.count = 1, .reusable = true}, SHIFT(44),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_at_pattern1, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 3),
  [251] = {.count = 1, .reusable = true}, SHIFT(126),
  [253] = {.count = 1, .reusable = false}, SHIFT(114),
  [255] = {.count = 1, .reusable = true}, SHIFT(114),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 2),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(130),
  [262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [264] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [266] = {.count = 1, .reusable = true}, SHIFT(130),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(86),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(123),
  [280] = {.count = 1, .reusable = true}, SHIFT(54),
  [282] = {.count = 1, .reusable = true}, SHIFT(86),
  [284] = {.count = 1, .reusable = true}, SHIFT(123),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [290] = {.count = 1, .reusable = true}, SHIFT(46),
  [292] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(67),
  [297] = {.count = 1, .reusable = true}, SHIFT(50),
  [299] = {.count = 1, .reusable = true}, SHIFT(67),
  [301] = {.count = 1, .reusable = true}, SHIFT(45),
  [303] = {.count = 1, .reusable = true}, SHIFT(49),
  [305] = {.count = 1, .reusable = true}, SHIFT(76),
  [307] = {.count = 1, .reusable = true}, SHIFT(75),
  [309] = {.count = 1, .reusable = true}, SHIFT(51),
  [311] = {.count = 1, .reusable = true}, SHIFT(77),
  [313] = {.count = 1, .reusable = true}, SHIFT(81),
  [315] = {.count = 1, .reusable = true}, SHIFT(83),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(67),
  [322] = {.count = 1, .reusable = true}, SHIFT(16),
  [324] = {.count = 1, .reusable = true}, SHIFT(145),
  [326] = {.count = 1, .reusable = true}, SHIFT(39),
  [328] = {.count = 1, .reusable = true}, SHIFT(146),
  [330] = {.count = 1, .reusable = true}, SHIFT(147),
  [332] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(69),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 2),
  [341] = {.count = 1, .reusable = true}, SHIFT(69),
  [343] = {.count = 1, .reusable = true}, SHIFT(108),
  [345] = {.count = 1, .reusable = true}, SHIFT(144),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 1),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 4),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_use_operator, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_use_operator, 3),
  [359] = {.count = 1, .reusable = true}, SHIFT(4),
  [361] = {.count = 1, .reusable = true}, SHIFT(68),
  [363] = {.count = 1, .reusable = true}, SHIFT(5),
  [365] = {.count = 1, .reusable = true}, SHIFT(131),
  [367] = {.count = 1, .reusable = true}, SHIFT(38),
  [369] = {.count = 1, .reusable = true}, SHIFT(132),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_use_keyword, 1),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(26),
  [383] = {.count = 1, .reusable = true}, SHIFT(72),
  [385] = {.count = 1, .reusable = true}, SHIFT(66),
  [387] = {.count = 1, .reusable = true}, SHIFT(60),
  [389] = {.count = 1, .reusable = true}, SHIFT(121),
  [391] = {.count = 1, .reusable = true}, SHIFT(101),
  [393] = {.count = 1, .reusable = true}, SHIFT(58),
  [395] = {.count = 1, .reusable = true}, SHIFT(33),
  [397] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_type_keyword, 1),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_sem_keyword, 1),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [405] = {.count = 1, .reusable = true}, SHIFT(15),
  [407] = {.count = 1, .reusable = true}, SHIFT(42),
  [409] = {.count = 1, .reusable = true}, SHIFT(28),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_assign_symbol, 1),
  [413] = {.count = 1, .reusable = true}, SHIFT(141),
  [415] = {.count = 1, .reusable = true}, SHIFT(142),
  [417] = {.count = 1, .reusable = true}, SHIFT(143),
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
