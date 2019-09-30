#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 159
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_source_file = 41,
  sym__elem = 42,
  sym_include_definition = 43,
  sym_code_block_definition = 44,
  sym_sem_definition = 45,
  sym_sem_alternatives = 46,
  sym_sem_impl = 47,
  sym_attribute = 48,
  sym_local_attribute = 49,
  sym_attr_impl = 50,
  sym_local_attr_impl = 51,
  sym_expr = 52,
  sym_pattern = 53,
  sym_pattern1 = 54,
  sym_at_pattern1 = 55,
  sym_pattern_list = 56,
  sym_type_definition = 57,
  sym_attr_definition = 58,
  sym_attr_declarations = 59,
  sym_old_attr_style = 60,
  sym_new_attr_style = 61,
  sym_inh_attr_declaration_new_style = 62,
  sym_syn_attr_declaration_new_style = 63,
  sym_chn_attr_declaration_new_style = 64,
  sym_inh_attr_declaration_old_style = 65,
  sym_syn_attr_declaration_old_style = 66,
  sym_use_operator = 67,
  sym_data_definition = 68,
  sym_data_alternatives = 69,
  sym_field = 70,
  sym_var_type_definitions = 71,
  sym_var_type_definition = 72,
  sym_type = 73,
  sym_varids = 74,
  sym_code_block = 75,
  sym_data_keyword = 76,
  sym_attr_keyword = 77,
  sym_sem_keyword = 78,
  sym_type_keyword = 79,
  sym_use_keyword = 80,
  sym_inh_keyword = 81,
  sym_syn_keyword = 82,
  sym_chn_keyword = 83,
  sym_include_keyword = 84,
  sym_type_symbol = 85,
  sym_assign_symbol = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_sem_definition_repeat1 = 88,
  aux_sym_sem_alternatives_repeat1 = 89,
  aux_sym_sem_alternatives_repeat2 = 90,
  aux_sym_attribute_repeat1 = 91,
  aux_sym_pattern_repeat1 = 92,
  aux_sym_pattern_list_repeat1 = 93,
  aux_sym_type_definition_repeat1 = 94,
  aux_sym_attr_declarations_repeat1 = 95,
  aux_sym_old_attr_style_repeat1 = 96,
  aux_sym_old_attr_style_repeat2 = 97,
  aux_sym_data_definition_repeat1 = 98,
  aux_sym_data_alternatives_repeat1 = 99,
  aux_sym_var_type_definitions_repeat1 = 100,
  aux_sym_varids_repeat1 = 101,
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
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 20:
      if (lookahead == 'H') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'Y') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(123);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(79);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'H') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'C') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'D') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == 'Y') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'L') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'M') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'P') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'S') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'U') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(121);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(110);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'c') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'd') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'l') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'm') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'n') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'p') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 's') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'u') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'y') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_sem);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SEM);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SEM);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_use);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_inh);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_syn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_chn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_include);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_lhs_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_loc_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 157:
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
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 3},
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
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 7},
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
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 119},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 117},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 117},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 117},
  [157] = {.lex_state = 117},
  [158] = {.lex_state = 117},
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
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym__elem] = STATE(5),
    [sym_include_definition] = STATE(5),
    [sym_code_block_definition] = STATE(5),
    [sym_sem_definition] = STATE(5),
    [sym_type_definition] = STATE(5),
    [sym_attr_definition] = STATE(5),
    [sym_data_definition] = STATE(5),
    [sym_code_block] = STATE(51),
    [sym_data_keyword] = STATE(138),
    [sym_attr_keyword] = STATE(116),
    [sym_sem_keyword] = STATE(131),
    [sym_type_keyword] = STATE(130),
    [sym_include_keyword] = STATE(136),
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
    [anon_sym_INCLUDE] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
  },
  [2] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(19),
    [sym_syn_attr_declaration_new_style] = STATE(19),
    [sym_chn_attr_declaration_new_style] = STATE(19),
    [sym_inh_keyword] = STATE(109),
    [sym_syn_keyword] = STATE(108),
    [sym_chn_keyword] = STATE(99),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_varid] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_data] = ACTIONS(31),
    [anon_sym_DATA] = ACTIONS(29),
    [anon_sym_attr] = ACTIONS(31),
    [anon_sym_ATTR] = ACTIONS(29),
    [anon_sym_sem] = ACTIONS(31),
    [anon_sym_SEM] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [anon_sym_TYPE] = ACTIONS(29),
    [anon_sym_INH] = ACTIONS(33),
    [anon_sym_inh] = ACTIONS(36),
    [anon_sym_SYN] = ACTIONS(39),
    [anon_sym_syn] = ACTIONS(42),
    [anon_sym_CHN] = ACTIONS(45),
    [anon_sym_chn] = ACTIONS(48),
    [anon_sym_INCLUDE] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(31),
  },
  [3] = {
    [sym__elem] = STATE(3),
    [sym_include_definition] = STATE(3),
    [sym_code_block_definition] = STATE(3),
    [sym_sem_definition] = STATE(3),
    [sym_type_definition] = STATE(3),
    [sym_attr_definition] = STATE(3),
    [sym_data_definition] = STATE(3),
    [sym_code_block] = STATE(51),
    [sym_data_keyword] = STATE(138),
    [sym_attr_keyword] = STATE(116),
    [sym_sem_keyword] = STATE(131),
    [sym_type_keyword] = STATE(130),
    [sym_include_keyword] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_varid] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(59),
    [anon_sym_DATA] = ACTIONS(62),
    [anon_sym_attr] = ACTIONS(65),
    [anon_sym_ATTR] = ACTIONS(68),
    [anon_sym_sem] = ACTIONS(71),
    [anon_sym_SEM] = ACTIONS(74),
    [anon_sym_type] = ACTIONS(77),
    [anon_sym_TYPE] = ACTIONS(80),
    [anon_sym_INCLUDE] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(86),
  },
  [4] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(19),
    [sym_syn_attr_declaration_new_style] = STATE(19),
    [sym_chn_attr_declaration_new_style] = STATE(19),
    [sym_inh_keyword] = STATE(109),
    [sym_syn_keyword] = STATE(108),
    [sym_chn_keyword] = STATE(99),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_varid] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_data] = ACTIONS(91),
    [anon_sym_DATA] = ACTIONS(89),
    [anon_sym_attr] = ACTIONS(91),
    [anon_sym_ATTR] = ACTIONS(89),
    [anon_sym_sem] = ACTIONS(91),
    [anon_sym_SEM] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_TYPE] = ACTIONS(89),
    [anon_sym_INH] = ACTIONS(93),
    [anon_sym_inh] = ACTIONS(95),
    [anon_sym_SYN] = ACTIONS(97),
    [anon_sym_syn] = ACTIONS(99),
    [anon_sym_CHN] = ACTIONS(101),
    [anon_sym_chn] = ACTIONS(103),
    [anon_sym_INCLUDE] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(91),
  },
  [5] = {
    [sym__elem] = STATE(3),
    [sym_include_definition] = STATE(3),
    [sym_code_block_definition] = STATE(3),
    [sym_sem_definition] = STATE(3),
    [sym_type_definition] = STATE(3),
    [sym_attr_definition] = STATE(3),
    [sym_data_definition] = STATE(3),
    [sym_code_block] = STATE(51),
    [sym_data_keyword] = STATE(138),
    [sym_attr_keyword] = STATE(116),
    [sym_sem_keyword] = STATE(131),
    [sym_type_keyword] = STATE(130),
    [sym_include_keyword] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(105),
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
    [anon_sym_INCLUDE] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
  },
  [6] = {
    [sym_sem_impl] = STATE(11),
    [sym_attribute] = STATE(37),
    [sym_local_attribute] = STATE(37),
    [aux_sym_sem_alternatives_repeat1] = STATE(25),
    [aux_sym_sem_alternatives_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_conid] = ACTIONS(109),
    [sym_varid] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_data] = ACTIONS(113),
    [anon_sym_DATA] = ACTIONS(113),
    [anon_sym_attr] = ACTIONS(113),
    [anon_sym_ATTR] = ACTIONS(113),
    [anon_sym_sem] = ACTIONS(113),
    [anon_sym_SEM] = ACTIONS(113),
    [anon_sym_type] = ACTIONS(113),
    [anon_sym_TYPE] = ACTIONS(113),
    [anon_sym_INCLUDE] = ACTIONS(113),
    [anon_sym_include] = ACTIONS(113),
    [sym_lhs_keyword] = ACTIONS(111),
    [sym_loc_keyword] = ACTIONS(115),
  },
  [7] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_varid] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_data] = ACTIONS(121),
    [anon_sym_DATA] = ACTIONS(117),
    [anon_sym_attr] = ACTIONS(121),
    [anon_sym_ATTR] = ACTIONS(117),
    [anon_sym_sem] = ACTIONS(121),
    [anon_sym_SEM] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(121),
    [anon_sym_TYPE] = ACTIONS(117),
    [anon_sym_INH] = ACTIONS(117),
    [anon_sym_inh] = ACTIONS(121),
    [anon_sym_SYN] = ACTIONS(117),
    [anon_sym_syn] = ACTIONS(121),
    [anon_sym_CHN] = ACTIONS(117),
    [anon_sym_chn] = ACTIONS(121),
    [anon_sym_INCLUDE] = ACTIONS(117),
    [anon_sym_include] = ACTIONS(121),
  },
  [8] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_varid] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_data] = ACTIONS(128),
    [anon_sym_DATA] = ACTIONS(123),
    [anon_sym_attr] = ACTIONS(128),
    [anon_sym_ATTR] = ACTIONS(123),
    [anon_sym_sem] = ACTIONS(128),
    [anon_sym_SEM] = ACTIONS(123),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_TYPE] = ACTIONS(123),
    [anon_sym_INH] = ACTIONS(123),
    [anon_sym_inh] = ACTIONS(128),
    [anon_sym_SYN] = ACTIONS(123),
    [anon_sym_syn] = ACTIONS(128),
    [anon_sym_CHN] = ACTIONS(123),
    [anon_sym_chn] = ACTIONS(128),
    [anon_sym_INCLUDE] = ACTIONS(123),
    [anon_sym_include] = ACTIONS(128),
  },
  [9] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_varid] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_DATA] = ACTIONS(130),
    [anon_sym_attr] = ACTIONS(132),
    [anon_sym_ATTR] = ACTIONS(130),
    [anon_sym_sem] = ACTIONS(132),
    [anon_sym_SEM] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_TYPE] = ACTIONS(130),
    [anon_sym_INH] = ACTIONS(130),
    [anon_sym_inh] = ACTIONS(132),
    [anon_sym_SYN] = ACTIONS(130),
    [anon_sym_syn] = ACTIONS(132),
    [anon_sym_CHN] = ACTIONS(130),
    [anon_sym_chn] = ACTIONS(132),
    [anon_sym_INCLUDE] = ACTIONS(130),
    [anon_sym_include] = ACTIONS(132),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [sym_varid] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_DATA] = ACTIONS(134),
    [anon_sym_attr] = ACTIONS(136),
    [anon_sym_ATTR] = ACTIONS(134),
    [anon_sym_sem] = ACTIONS(136),
    [anon_sym_SEM] = ACTIONS(134),
    [anon_sym_type] = ACTIONS(136),
    [anon_sym_TYPE] = ACTIONS(134),
    [anon_sym_INH] = ACTIONS(134),
    [anon_sym_inh] = ACTIONS(136),
    [anon_sym_SYN] = ACTIONS(134),
    [anon_sym_syn] = ACTIONS(136),
    [anon_sym_CHN] = ACTIONS(134),
    [anon_sym_chn] = ACTIONS(136),
    [anon_sym_INCLUDE] = ACTIONS(134),
    [anon_sym_include] = ACTIONS(136),
  },
  [11] = {
    [sym_sem_impl] = STATE(13),
    [sym_attribute] = STATE(37),
    [sym_local_attribute] = STATE(37),
    [aux_sym_sem_alternatives_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(138),
    [sym_varid] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_data] = ACTIONS(140),
    [anon_sym_DATA] = ACTIONS(138),
    [anon_sym_attr] = ACTIONS(140),
    [anon_sym_ATTR] = ACTIONS(138),
    [anon_sym_sem] = ACTIONS(140),
    [anon_sym_SEM] = ACTIONS(138),
    [anon_sym_type] = ACTIONS(140),
    [anon_sym_TYPE] = ACTIONS(138),
    [anon_sym_INCLUDE] = ACTIONS(138),
    [anon_sym_include] = ACTIONS(140),
    [sym_lhs_keyword] = ACTIONS(111),
    [sym_loc_keyword] = ACTIONS(115),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_varid] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_data] = ACTIONS(128),
    [anon_sym_DATA] = ACTIONS(123),
    [anon_sym_attr] = ACTIONS(128),
    [anon_sym_ATTR] = ACTIONS(123),
    [anon_sym_sem] = ACTIONS(128),
    [anon_sym_SEM] = ACTIONS(123),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_TYPE] = ACTIONS(123),
    [anon_sym_INH] = ACTIONS(123),
    [anon_sym_inh] = ACTIONS(128),
    [anon_sym_SYN] = ACTIONS(123),
    [anon_sym_syn] = ACTIONS(128),
    [anon_sym_CHN] = ACTIONS(123),
    [anon_sym_chn] = ACTIONS(128),
    [anon_sym_INCLUDE] = ACTIONS(123),
    [anon_sym_include] = ACTIONS(128),
  },
  [13] = {
    [sym_sem_impl] = STATE(13),
    [sym_attribute] = STATE(37),
    [sym_local_attribute] = STATE(37),
    [aux_sym_sem_alternatives_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [sym_varid] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(147),
    [anon_sym_DATA] = ACTIONS(142),
    [anon_sym_attr] = ACTIONS(147),
    [anon_sym_ATTR] = ACTIONS(142),
    [anon_sym_sem] = ACTIONS(147),
    [anon_sym_SEM] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_TYPE] = ACTIONS(142),
    [anon_sym_INCLUDE] = ACTIONS(142),
    [anon_sym_include] = ACTIONS(147),
    [sym_lhs_keyword] = ACTIONS(144),
    [sym_loc_keyword] = ACTIONS(149),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [sym_varid] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_DATA] = ACTIONS(152),
    [anon_sym_attr] = ACTIONS(154),
    [anon_sym_ATTR] = ACTIONS(152),
    [anon_sym_sem] = ACTIONS(154),
    [anon_sym_SEM] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(154),
    [anon_sym_TYPE] = ACTIONS(152),
    [anon_sym_INH] = ACTIONS(152),
    [anon_sym_inh] = ACTIONS(154),
    [anon_sym_SYN] = ACTIONS(152),
    [anon_sym_syn] = ACTIONS(154),
    [anon_sym_CHN] = ACTIONS(152),
    [anon_sym_chn] = ACTIONS(154),
    [anon_sym_INCLUDE] = ACTIONS(152),
    [anon_sym_include] = ACTIONS(154),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [sym_varid] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_data] = ACTIONS(158),
    [anon_sym_DATA] = ACTIONS(156),
    [anon_sym_attr] = ACTIONS(158),
    [anon_sym_ATTR] = ACTIONS(156),
    [anon_sym_sem] = ACTIONS(158),
    [anon_sym_SEM] = ACTIONS(156),
    [anon_sym_type] = ACTIONS(158),
    [anon_sym_TYPE] = ACTIONS(156),
    [anon_sym_INH] = ACTIONS(156),
    [anon_sym_inh] = ACTIONS(158),
    [anon_sym_SYN] = ACTIONS(156),
    [anon_sym_syn] = ACTIONS(158),
    [anon_sym_CHN] = ACTIONS(156),
    [anon_sym_chn] = ACTIONS(158),
    [anon_sym_INCLUDE] = ACTIONS(156),
    [anon_sym_include] = ACTIONS(158),
  },
  [16] = {
    [sym_attr_impl] = STATE(16),
    [aux_sym_attribute_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_varid] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(165),
    [anon_sym_DATA] = ACTIONS(160),
    [anon_sym_attr] = ACTIONS(165),
    [anon_sym_ATTR] = ACTIONS(160),
    [anon_sym_sem] = ACTIONS(165),
    [anon_sym_SEM] = ACTIONS(160),
    [anon_sym_type] = ACTIONS(165),
    [anon_sym_TYPE] = ACTIONS(160),
    [anon_sym_INCLUDE] = ACTIONS(160),
    [anon_sym_include] = ACTIONS(165),
    [sym_lhs_keyword] = ACTIONS(165),
    [sym_loc_keyword] = ACTIONS(165),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_varid] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_DATA] = ACTIONS(167),
    [anon_sym_attr] = ACTIONS(169),
    [anon_sym_ATTR] = ACTIONS(167),
    [anon_sym_sem] = ACTIONS(169),
    [anon_sym_SEM] = ACTIONS(167),
    [anon_sym_type] = ACTIONS(169),
    [anon_sym_TYPE] = ACTIONS(167),
    [anon_sym_INH] = ACTIONS(167),
    [anon_sym_inh] = ACTIONS(169),
    [anon_sym_SYN] = ACTIONS(167),
    [anon_sym_syn] = ACTIONS(169),
    [anon_sym_CHN] = ACTIONS(167),
    [anon_sym_chn] = ACTIONS(169),
    [anon_sym_INCLUDE] = ACTIONS(167),
    [anon_sym_include] = ACTIONS(169),
  },
  [18] = {
    [sym_attr_declarations] = STATE(49),
    [sym_old_attr_style] = STATE(54),
    [sym_new_attr_style] = STATE(4),
    [sym_inh_attr_declaration_new_style] = STATE(19),
    [sym_syn_attr_declaration_new_style] = STATE(19),
    [sym_chn_attr_declaration_new_style] = STATE(19),
    [sym_inh_keyword] = STATE(109),
    [sym_syn_keyword] = STATE(108),
    [sym_chn_keyword] = STATE(99),
    [aux_sym_sem_alternatives_repeat1] = STATE(55),
    [aux_sym_attr_declarations_repeat1] = STATE(4),
    [anon_sym_LBRACK] = ACTIONS(171),
    [sym_conid] = ACTIONS(173),
    [anon_sym_INH] = ACTIONS(95),
    [anon_sym_inh] = ACTIONS(93),
    [anon_sym_SYN] = ACTIONS(99),
    [anon_sym_syn] = ACTIONS(97),
    [anon_sym_CHN] = ACTIONS(103),
    [anon_sym_chn] = ACTIONS(101),
  },
  [19] = {
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
    [anon_sym_INCLUDE] = ACTIONS(175),
    [anon_sym_include] = ACTIONS(177),
  },
  [20] = {
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
    [anon_sym_INCLUDE] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(181),
  },
  [21] = {
    [sym_attr_impl] = STATE(16),
    [aux_sym_attribute_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(185),
    [sym_varid] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(187),
    [anon_sym_DATA] = ACTIONS(183),
    [anon_sym_attr] = ACTIONS(187),
    [anon_sym_ATTR] = ACTIONS(183),
    [anon_sym_sem] = ACTIONS(187),
    [anon_sym_SEM] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_TYPE] = ACTIONS(183),
    [anon_sym_INCLUDE] = ACTIONS(183),
    [anon_sym_include] = ACTIONS(187),
    [sym_lhs_keyword] = ACTIONS(187),
    [sym_loc_keyword] = ACTIONS(187),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_varid] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_data] = ACTIONS(191),
    [anon_sym_DATA] = ACTIONS(189),
    [anon_sym_attr] = ACTIONS(191),
    [anon_sym_ATTR] = ACTIONS(189),
    [anon_sym_sem] = ACTIONS(191),
    [anon_sym_SEM] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_TYPE] = ACTIONS(189),
    [anon_sym_INH] = ACTIONS(189),
    [anon_sym_inh] = ACTIONS(191),
    [anon_sym_SYN] = ACTIONS(189),
    [anon_sym_syn] = ACTIONS(191),
    [anon_sym_CHN] = ACTIONS(189),
    [anon_sym_chn] = ACTIONS(191),
    [anon_sym_INCLUDE] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(191),
  },
  [23] = {
    [sym_field] = STATE(26),
    [sym_var_type_definition] = STATE(43),
    [aux_sym_data_alternatives_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [sym_conid] = ACTIONS(195),
    [sym_varid] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_data] = ACTIONS(199),
    [anon_sym_DATA] = ACTIONS(199),
    [anon_sym_attr] = ACTIONS(199),
    [anon_sym_ATTR] = ACTIONS(199),
    [anon_sym_sem] = ACTIONS(199),
    [anon_sym_SEM] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(199),
    [anon_sym_TYPE] = ACTIONS(199),
    [anon_sym_INCLUDE] = ACTIONS(199),
    [anon_sym_include] = ACTIONS(199),
  },
  [24] = {
    [sym_field] = STATE(23),
    [sym_var_type_definition] = STATE(43),
    [aux_sym_data_alternatives_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(201),
    [sym_conid] = ACTIONS(195),
    [sym_varid] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_data] = ACTIONS(203),
    [anon_sym_DATA] = ACTIONS(203),
    [anon_sym_attr] = ACTIONS(203),
    [anon_sym_ATTR] = ACTIONS(203),
    [anon_sym_sem] = ACTIONS(203),
    [anon_sym_SEM] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(203),
    [anon_sym_TYPE] = ACTIONS(203),
    [anon_sym_INCLUDE] = ACTIONS(203),
    [anon_sym_include] = ACTIONS(203),
  },
  [25] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(205),
    [sym_conid] = ACTIONS(207),
    [sym_varid] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_data] = ACTIONS(210),
    [anon_sym_DATA] = ACTIONS(210),
    [anon_sym_attr] = ACTIONS(210),
    [anon_sym_ATTR] = ACTIONS(210),
    [anon_sym_sem] = ACTIONS(210),
    [anon_sym_SEM] = ACTIONS(210),
    [anon_sym_type] = ACTIONS(210),
    [anon_sym_TYPE] = ACTIONS(210),
    [anon_sym_INCLUDE] = ACTIONS(210),
    [anon_sym_include] = ACTIONS(210),
    [sym_lhs_keyword] = ACTIONS(210),
    [sym_loc_keyword] = ACTIONS(210),
  },
  [26] = {
    [sym_field] = STATE(26),
    [sym_var_type_definition] = STATE(43),
    [aux_sym_data_alternatives_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [sym_conid] = ACTIONS(214),
    [sym_varid] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_data] = ACTIONS(220),
    [anon_sym_DATA] = ACTIONS(220),
    [anon_sym_attr] = ACTIONS(220),
    [anon_sym_ATTR] = ACTIONS(220),
    [anon_sym_sem] = ACTIONS(220),
    [anon_sym_SEM] = ACTIONS(220),
    [anon_sym_type] = ACTIONS(220),
    [anon_sym_TYPE] = ACTIONS(220),
    [anon_sym_INCLUDE] = ACTIONS(220),
    [anon_sym_include] = ACTIONS(220),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [sym_varid] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_data] = ACTIONS(224),
    [anon_sym_DATA] = ACTIONS(222),
    [anon_sym_attr] = ACTIONS(224),
    [anon_sym_ATTR] = ACTIONS(222),
    [anon_sym_sem] = ACTIONS(224),
    [anon_sym_SEM] = ACTIONS(222),
    [anon_sym_type] = ACTIONS(224),
    [anon_sym_TYPE] = ACTIONS(222),
    [anon_sym_INCLUDE] = ACTIONS(222),
    [anon_sym_include] = ACTIONS(224),
    [sym_lhs_keyword] = ACTIONS(224),
    [sym_loc_keyword] = ACTIONS(224),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [sym_varid] = ACTIONS(228),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_data] = ACTIONS(228),
    [anon_sym_DATA] = ACTIONS(226),
    [anon_sym_attr] = ACTIONS(228),
    [anon_sym_ATTR] = ACTIONS(226),
    [anon_sym_sem] = ACTIONS(228),
    [anon_sym_SEM] = ACTIONS(226),
    [anon_sym_type] = ACTIONS(228),
    [anon_sym_TYPE] = ACTIONS(226),
    [anon_sym_INCLUDE] = ACTIONS(226),
    [anon_sym_include] = ACTIONS(228),
    [sym_lhs_keyword] = ACTIONS(228),
    [sym_loc_keyword] = ACTIONS(228),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_varid] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_DATA] = ACTIONS(152),
    [anon_sym_attr] = ACTIONS(154),
    [anon_sym_ATTR] = ACTIONS(152),
    [anon_sym_sem] = ACTIONS(154),
    [anon_sym_SEM] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(154),
    [anon_sym_TYPE] = ACTIONS(152),
    [anon_sym_INCLUDE] = ACTIONS(152),
    [anon_sym_include] = ACTIONS(154),
    [sym_lhs_keyword] = ACTIONS(154),
    [sym_loc_keyword] = ACTIONS(154),
  },
  [30] = {
    [sym_data_alternatives] = STATE(38),
    [aux_sym_data_definition_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_varid] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_data] = ACTIONS(234),
    [anon_sym_DATA] = ACTIONS(230),
    [anon_sym_attr] = ACTIONS(234),
    [anon_sym_ATTR] = ACTIONS(230),
    [anon_sym_sem] = ACTIONS(234),
    [anon_sym_SEM] = ACTIONS(230),
    [anon_sym_type] = ACTIONS(234),
    [anon_sym_TYPE] = ACTIONS(230),
    [anon_sym_INCLUDE] = ACTIONS(230),
    [anon_sym_include] = ACTIONS(234),
  },
  [31] = {
    [sym_sem_alternatives] = STATE(31),
    [aux_sym_sem_definition_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_varid] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(236),
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
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [sym_varid] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(243),
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
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
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
    [anon_sym_INCLUDE] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(249),
    [sym_lhs_keyword] = ACTIONS(249),
    [sym_loc_keyword] = ACTIONS(249),
  },
  [34] = {
    [sym_sem_alternatives] = STATE(36),
    [aux_sym_sem_definition_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(253),
    [sym_varid] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_data] = ACTIONS(255),
    [anon_sym_DATA] = ACTIONS(251),
    [anon_sym_attr] = ACTIONS(255),
    [anon_sym_ATTR] = ACTIONS(251),
    [anon_sym_sem] = ACTIONS(255),
    [anon_sym_SEM] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(255),
    [anon_sym_TYPE] = ACTIONS(251),
    [anon_sym_INCLUDE] = ACTIONS(251),
    [anon_sym_include] = ACTIONS(255),
  },
  [35] = {
    [sym_data_alternatives] = STATE(30),
    [aux_sym_data_definition_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_varid] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_data] = ACTIONS(259),
    [anon_sym_DATA] = ACTIONS(257),
    [anon_sym_attr] = ACTIONS(259),
    [anon_sym_ATTR] = ACTIONS(257),
    [anon_sym_sem] = ACTIONS(259),
    [anon_sym_SEM] = ACTIONS(257),
    [anon_sym_type] = ACTIONS(259),
    [anon_sym_TYPE] = ACTIONS(257),
    [anon_sym_INCLUDE] = ACTIONS(257),
    [anon_sym_include] = ACTIONS(259),
  },
  [36] = {
    [sym_sem_alternatives] = STATE(31),
    [aux_sym_sem_definition_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(253),
    [sym_varid] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_data] = ACTIONS(263),
    [anon_sym_DATA] = ACTIONS(261),
    [anon_sym_attr] = ACTIONS(263),
    [anon_sym_ATTR] = ACTIONS(261),
    [anon_sym_sem] = ACTIONS(263),
    [anon_sym_SEM] = ACTIONS(261),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_TYPE] = ACTIONS(261),
    [anon_sym_INCLUDE] = ACTIONS(261),
    [anon_sym_include] = ACTIONS(263),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [sym_varid] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_data] = ACTIONS(267),
    [anon_sym_DATA] = ACTIONS(265),
    [anon_sym_attr] = ACTIONS(267),
    [anon_sym_ATTR] = ACTIONS(265),
    [anon_sym_sem] = ACTIONS(267),
    [anon_sym_SEM] = ACTIONS(265),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_TYPE] = ACTIONS(265),
    [anon_sym_INCLUDE] = ACTIONS(265),
    [anon_sym_include] = ACTIONS(267),
    [sym_lhs_keyword] = ACTIONS(267),
    [sym_loc_keyword] = ACTIONS(267),
  },
  [38] = {
    [sym_data_alternatives] = STATE(38),
    [aux_sym_data_definition_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [sym_varid] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_data] = ACTIONS(274),
    [anon_sym_DATA] = ACTIONS(269),
    [anon_sym_attr] = ACTIONS(274),
    [anon_sym_ATTR] = ACTIONS(269),
    [anon_sym_sem] = ACTIONS(274),
    [anon_sym_SEM] = ACTIONS(269),
    [anon_sym_type] = ACTIONS(274),
    [anon_sym_TYPE] = ACTIONS(269),
    [anon_sym_INCLUDE] = ACTIONS(269),
    [anon_sym_include] = ACTIONS(274),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [sym_conid] = ACTIONS(136),
    [sym_varid] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_DATA] = ACTIONS(136),
    [anon_sym_attr] = ACTIONS(136),
    [anon_sym_ATTR] = ACTIONS(136),
    [anon_sym_sem] = ACTIONS(136),
    [anon_sym_SEM] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [anon_sym_TYPE] = ACTIONS(136),
    [anon_sym_INCLUDE] = ACTIONS(136),
    [anon_sym_include] = ACTIONS(136),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [sym_conid] = ACTIONS(158),
    [sym_varid] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_data] = ACTIONS(158),
    [anon_sym_DATA] = ACTIONS(158),
    [anon_sym_attr] = ACTIONS(158),
    [anon_sym_ATTR] = ACTIONS(158),
    [anon_sym_sem] = ACTIONS(158),
    [anon_sym_SEM] = ACTIONS(158),
    [anon_sym_type] = ACTIONS(158),
    [anon_sym_TYPE] = ACTIONS(158),
    [anon_sym_INCLUDE] = ACTIONS(158),
    [anon_sym_include] = ACTIONS(158),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_varid] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_DATA] = ACTIONS(152),
    [anon_sym_attr] = ACTIONS(154),
    [anon_sym_ATTR] = ACTIONS(152),
    [anon_sym_sem] = ACTIONS(154),
    [anon_sym_SEM] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(154),
    [anon_sym_TYPE] = ACTIONS(152),
    [anon_sym_INCLUDE] = ACTIONS(152),
    [anon_sym_include] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_COLON_COLON] = ACTIONS(152),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [sym_conid] = ACTIONS(154),
    [sym_varid] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_DATA] = ACTIONS(154),
    [anon_sym_attr] = ACTIONS(154),
    [anon_sym_ATTR] = ACTIONS(154),
    [anon_sym_sem] = ACTIONS(154),
    [anon_sym_SEM] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(154),
    [anon_sym_TYPE] = ACTIONS(154),
    [anon_sym_INCLUDE] = ACTIONS(154),
    [anon_sym_include] = ACTIONS(154),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(276),
    [sym_conid] = ACTIONS(278),
    [sym_varid] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_data] = ACTIONS(278),
    [anon_sym_DATA] = ACTIONS(278),
    [anon_sym_attr] = ACTIONS(278),
    [anon_sym_ATTR] = ACTIONS(278),
    [anon_sym_sem] = ACTIONS(278),
    [anon_sym_SEM] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(278),
    [anon_sym_TYPE] = ACTIONS(278),
    [anon_sym_INCLUDE] = ACTIONS(278),
    [anon_sym_include] = ACTIONS(278),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_varid] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_data] = ACTIONS(282),
    [anon_sym_DATA] = ACTIONS(280),
    [anon_sym_attr] = ACTIONS(282),
    [anon_sym_ATTR] = ACTIONS(280),
    [anon_sym_sem] = ACTIONS(282),
    [anon_sym_SEM] = ACTIONS(280),
    [anon_sym_type] = ACTIONS(282),
    [anon_sym_TYPE] = ACTIONS(280),
    [anon_sym_INCLUDE] = ACTIONS(280),
    [anon_sym_include] = ACTIONS(282),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_varid] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_data] = ACTIONS(286),
    [anon_sym_DATA] = ACTIONS(284),
    [anon_sym_attr] = ACTIONS(286),
    [anon_sym_ATTR] = ACTIONS(284),
    [anon_sym_sem] = ACTIONS(286),
    [anon_sym_SEM] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(286),
    [anon_sym_TYPE] = ACTIONS(284),
    [anon_sym_INCLUDE] = ACTIONS(284),
    [anon_sym_include] = ACTIONS(286),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_varid] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(290),
    [anon_sym_DATA] = ACTIONS(288),
    [anon_sym_attr] = ACTIONS(290),
    [anon_sym_ATTR] = ACTIONS(288),
    [anon_sym_sem] = ACTIONS(290),
    [anon_sym_SEM] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(290),
    [anon_sym_TYPE] = ACTIONS(288),
    [anon_sym_INCLUDE] = ACTIONS(288),
    [anon_sym_include] = ACTIONS(290),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_varid] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(292),
    [anon_sym_data] = ACTIONS(294),
    [anon_sym_DATA] = ACTIONS(292),
    [anon_sym_attr] = ACTIONS(294),
    [anon_sym_ATTR] = ACTIONS(292),
    [anon_sym_sem] = ACTIONS(294),
    [anon_sym_SEM] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(294),
    [anon_sym_TYPE] = ACTIONS(292),
    [anon_sym_INCLUDE] = ACTIONS(292),
    [anon_sym_include] = ACTIONS(294),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym_varid] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_data] = ACTIONS(298),
    [anon_sym_DATA] = ACTIONS(296),
    [anon_sym_attr] = ACTIONS(298),
    [anon_sym_ATTR] = ACTIONS(296),
    [anon_sym_sem] = ACTIONS(298),
    [anon_sym_SEM] = ACTIONS(296),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_TYPE] = ACTIONS(296),
    [anon_sym_INCLUDE] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(298),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_varid] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_data] = ACTIONS(302),
    [anon_sym_DATA] = ACTIONS(300),
    [anon_sym_attr] = ACTIONS(302),
    [anon_sym_ATTR] = ACTIONS(300),
    [anon_sym_sem] = ACTIONS(302),
    [anon_sym_SEM] = ACTIONS(300),
    [anon_sym_type] = ACTIONS(302),
    [anon_sym_TYPE] = ACTIONS(300),
    [anon_sym_INCLUDE] = ACTIONS(300),
    [anon_sym_include] = ACTIONS(302),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym_varid] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_data] = ACTIONS(306),
    [anon_sym_DATA] = ACTIONS(304),
    [anon_sym_attr] = ACTIONS(306),
    [anon_sym_ATTR] = ACTIONS(304),
    [anon_sym_sem] = ACTIONS(306),
    [anon_sym_SEM] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(306),
    [anon_sym_TYPE] = ACTIONS(304),
    [anon_sym_INCLUDE] = ACTIONS(304),
    [anon_sym_include] = ACTIONS(306),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym_varid] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_data] = ACTIONS(310),
    [anon_sym_DATA] = ACTIONS(308),
    [anon_sym_attr] = ACTIONS(310),
    [anon_sym_ATTR] = ACTIONS(308),
    [anon_sym_sem] = ACTIONS(310),
    [anon_sym_SEM] = ACTIONS(308),
    [anon_sym_type] = ACTIONS(310),
    [anon_sym_TYPE] = ACTIONS(308),
    [anon_sym_INCLUDE] = ACTIONS(308),
    [anon_sym_include] = ACTIONS(310),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym_varid] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_data] = ACTIONS(314),
    [anon_sym_DATA] = ACTIONS(312),
    [anon_sym_attr] = ACTIONS(314),
    [anon_sym_ATTR] = ACTIONS(312),
    [anon_sym_sem] = ACTIONS(314),
    [anon_sym_SEM] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(314),
    [anon_sym_TYPE] = ACTIONS(312),
    [anon_sym_INCLUDE] = ACTIONS(312),
    [anon_sym_include] = ACTIONS(314),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [sym_varid] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_data] = ACTIONS(318),
    [anon_sym_DATA] = ACTIONS(316),
    [anon_sym_attr] = ACTIONS(318),
    [anon_sym_ATTR] = ACTIONS(316),
    [anon_sym_sem] = ACTIONS(318),
    [anon_sym_SEM] = ACTIONS(316),
    [anon_sym_type] = ACTIONS(318),
    [anon_sym_TYPE] = ACTIONS(316),
    [anon_sym_INCLUDE] = ACTIONS(316),
    [anon_sym_include] = ACTIONS(318),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_varid] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_data] = ACTIONS(91),
    [anon_sym_DATA] = ACTIONS(89),
    [anon_sym_attr] = ACTIONS(91),
    [anon_sym_ATTR] = ACTIONS(89),
    [anon_sym_sem] = ACTIONS(91),
    [anon_sym_SEM] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_TYPE] = ACTIONS(89),
    [anon_sym_INCLUDE] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(91),
  },
  [55] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(205),
    [sym_conid] = ACTIONS(320),
    [anon_sym_INH] = ACTIONS(210),
    [anon_sym_inh] = ACTIONS(205),
    [anon_sym_SYN] = ACTIONS(210),
    [anon_sym_syn] = ACTIONS(205),
    [anon_sym_CHN] = ACTIONS(210),
    [anon_sym_chn] = ACTIONS(205),
  },
  [56] = {
    [sym_pattern1] = STATE(56),
    [aux_sym_pattern_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym__] = ACTIONS(328),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [sym_varid] = ACTIONS(331),
    [anon_sym_COLON_EQ] = ACTIONS(326),
  },
  [57] = {
    [sym_pattern1] = STATE(59),
    [aux_sym_pattern_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [sym_varid] = ACTIONS(340),
    [anon_sym_COLON_EQ] = ACTIONS(336),
  },
  [58] = {
    [sym_at_pattern1] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [sym_varid] = ACTIONS(342),
    [anon_sym_COLON_EQ] = ACTIONS(342),
  },
  [59] = {
    [sym_pattern1] = STATE(56),
    [aux_sym_pattern_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [sym_varid] = ACTIONS(340),
    [anon_sym_COLON_EQ] = ACTIONS(346),
  },
  [60] = {
    [sym_pattern] = STATE(112),
    [sym_pattern1] = STATE(91),
    [sym_pattern_list] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym__] = ACTIONS(338),
    [sym_conid] = ACTIONS(350),
    [sym_varid] = ACTIONS(340),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [sym_varid] = ACTIONS(352),
    [anon_sym_COLON_EQ] = ACTIONS(352),
  },
  [62] = {
    [sym_use_operator] = STATE(114),
    [sym_use_keyword] = STATE(120),
    [sym_type_symbol] = STATE(97),
    [anon_sym_use] = ACTIONS(354),
    [anon_sym_USE] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(358),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(360),
    [sym_varid] = ACTIONS(360),
    [anon_sym_COLON_EQ] = ACTIONS(360),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [sym_varid] = ACTIONS(342),
    [anon_sym_COLON_EQ] = ACTIONS(342),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym__] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [sym_varid] = ACTIONS(362),
    [anon_sym_COLON_EQ] = ACTIONS(362),
  },
  [66] = {
    [aux_sym_varids_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_use] = ACTIONS(367),
    [anon_sym_USE] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(367),
  },
  [67] = {
    [sym_type] = STATE(71),
    [sym_code_block] = STATE(87),
    [aux_sym_type_definition_repeat1] = STATE(71),
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym_conid] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(375),
  },
  [68] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_varid] = ACTIONS(379),
  },
  [69] = {
    [sym_type] = STATE(69),
    [sym_code_block] = STATE(87),
    [aux_sym_type_definition_repeat1] = STATE(69),
    [anon_sym_RBRACK] = ACTIONS(382),
    [sym_conid] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(387),
  },
  [70] = {
    [aux_sym_varids_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_use] = ACTIONS(392),
    [anon_sym_USE] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(394),
    [anon_sym_COLON_COLON] = ACTIONS(392),
  },
  [71] = {
    [sym_type] = STATE(69),
    [sym_code_block] = STATE(87),
    [aux_sym_type_definition_repeat1] = STATE(69),
    [anon_sym_RBRACK] = ACTIONS(396),
    [sym_conid] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(375),
  },
  [72] = {
    [aux_sym_varids_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_use] = ACTIONS(398),
    [anon_sym_USE] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(400),
    [anon_sym_COLON_COLON] = ACTIONS(398),
  },
  [73] = {
    [sym_pattern] = STATE(107),
    [sym_pattern1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym__] = ACTIONS(338),
    [sym_conid] = ACTIONS(350),
    [sym_varid] = ACTIONS(340),
  },
  [74] = {
    [sym_pattern] = STATE(117),
    [sym_pattern1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym__] = ACTIONS(338),
    [sym_conid] = ACTIONS(350),
    [sym_varid] = ACTIONS(340),
  },
  [75] = {
    [sym_syn_attr_declaration_old_style] = STATE(82),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(82),
    [anon_sym_RBRACK] = ACTIONS(402),
    [sym_varid] = ACTIONS(404),
  },
  [76] = {
    [sym_syn_attr_declaration_old_style] = STATE(83),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(83),
    [anon_sym_RBRACK] = ACTIONS(406),
    [sym_varid] = ACTIONS(404),
  },
  [77] = {
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [sym_conid] = ACTIONS(152),
    [sym_varid] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
  },
  [78] = {
    [sym_inh_attr_declaration_old_style] = STATE(88),
    [sym_varids] = STATE(105),
    [aux_sym_old_attr_style_repeat1] = STATE(88),
    [anon_sym_PIPE] = ACTIONS(408),
    [sym_varid] = ACTIONS(404),
  },
  [79] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(410),
    [sym_varid] = ACTIONS(404),
  },
  [80] = {
    [sym_syn_attr_declaration_old_style] = STATE(84),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(84),
    [anon_sym_PIPE] = ACTIONS(412),
    [sym_varid] = ACTIONS(404),
  },
  [81] = {
    [sym_syn_attr_declaration_old_style] = STATE(89),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(89),
    [anon_sym_PIPE] = ACTIONS(414),
    [sym_varid] = ACTIONS(404),
  },
  [82] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(416),
    [sym_varid] = ACTIONS(404),
  },
  [83] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(402),
    [sym_varid] = ACTIONS(404),
  },
  [84] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_PIPE] = ACTIONS(418),
    [sym_varid] = ACTIONS(404),
  },
  [85] = {
    [sym_inh_attr_declaration_old_style] = STATE(85),
    [sym_varids] = STATE(105),
    [aux_sym_old_attr_style_repeat1] = STATE(85),
    [anon_sym_PIPE] = ACTIONS(420),
    [sym_varid] = ACTIONS(422),
  },
  [86] = {
    [sym_syn_attr_declaration_old_style] = STATE(79),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(79),
    [anon_sym_RBRACK] = ACTIONS(416),
    [sym_varid] = ACTIONS(404),
  },
  [87] = {
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(134),
    [sym_conid] = ACTIONS(134),
    [sym_varid] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
  },
  [88] = {
    [sym_inh_attr_declaration_old_style] = STATE(85),
    [sym_varids] = STATE(105),
    [aux_sym_old_attr_style_repeat1] = STATE(85),
    [anon_sym_PIPE] = ACTIONS(425),
    [sym_varid] = ACTIONS(404),
  },
  [89] = {
    [sym_syn_attr_declaration_old_style] = STATE(68),
    [sym_varids] = STATE(62),
    [aux_sym_old_attr_style_repeat2] = STATE(68),
    [anon_sym_PIPE] = ACTIONS(412),
    [sym_varid] = ACTIONS(404),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_use] = ACTIONS(367),
    [anon_sym_USE] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(367),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_COLON_EQ] = ACTIONS(336),
  },
  [92] = {
    [sym_pattern1] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym__] = ACTIONS(338),
    [sym_varid] = ACTIONS(340),
  },
  [93] = {
    [sym_type] = STATE(119),
    [sym_code_block] = STATE(87),
    [sym_conid] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(375),
  },
  [94] = {
    [sym_type] = STATE(15),
    [sym_code_block] = STATE(10),
    [sym_conid] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
  },
  [95] = {
    [sym_type] = STATE(111),
    [sym_code_block] = STATE(87),
    [sym_conid] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(375),
  },
  [96] = {
    [sym_type] = STATE(40),
    [sym_code_block] = STATE(39),
    [sym_conid] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(433),
  },
  [97] = {
    [sym_type] = STATE(98),
    [sym_code_block] = STATE(87),
    [sym_conid] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(375),
  },
  [98] = {
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_varid] = ACTIONS(435),
  },
  [99] = {
    [sym_var_type_definitions] = STATE(22),
    [sym_var_type_definition] = STATE(9),
    [sym_varid] = ACTIONS(437),
  },
  [100] = {
    [sym_type_symbol] = STATE(96),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(358),
  },
  [101] = {
    [sym_type_symbol] = STATE(94),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(358),
  },
  [102] = {
    [aux_sym_pattern_list_repeat1] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(441),
  },
  [103] = {
    [sym_attr_impl] = STATE(21),
    [aux_sym_attribute_repeat1] = STATE(21),
    [anon_sym_DOT] = ACTIONS(185),
  },
  [104] = {
    [aux_sym_pattern_list_repeat1] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(446),
  },
  [105] = {
    [sym_type_symbol] = STATE(93),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(358),
  },
  [106] = {
    [sym_expr] = STATE(33),
    [sym_code_block] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [107] = {
    [sym_assign_symbol] = STATE(106),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_COLON_EQ] = ACTIONS(450),
  },
  [108] = {
    [sym_var_type_definitions] = STATE(20),
    [sym_var_type_definition] = STATE(9),
    [sym_varid] = ACTIONS(437),
  },
  [109] = {
    [sym_var_type_definitions] = STATE(17),
    [sym_var_type_definition] = STATE(9),
    [sym_varid] = ACTIONS(437),
  },
  [110] = {
    [sym_assign_symbol] = STATE(113),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_COLON_EQ] = ACTIONS(450),
  },
  [111] = {
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_varid] = ACTIONS(452),
  },
  [112] = {
    [aux_sym_pattern_list_repeat1] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(446),
  },
  [113] = {
    [sym_expr] = STATE(28),
    [sym_code_block] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [114] = {
    [sym_type_symbol] = STATE(95),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_COLON_COLON] = ACTIONS(358),
  },
  [115] = {
    [sym_code_block] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [116] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(18),
    [sym_conid] = ACTIONS(456),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(439),
  },
  [118] = {
    [sym_conid] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(458),
  },
  [119] = {
    [anon_sym_PIPE] = ACTIONS(460),
    [sym_varid] = ACTIONS(460),
  },
  [120] = {
    [sym_code_block] = STATE(123),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [121] = {
    [sym_var_type_definition] = STATE(12),
    [sym_varid] = ACTIONS(437),
  },
  [122] = {
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_COLON_COLON] = ACTIONS(464),
  },
  [123] = {
    [sym_code_block] = STATE(122),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [124] = {
    [sym_local_attr_impl] = STATE(32),
    [anon_sym_DOT] = ACTIONS(466),
  },
  [125] = {
    [aux_sym_sem_alternatives_repeat1] = STATE(6),
    [sym_conid] = ACTIONS(468),
  },
  [126] = {
    [anon_sym_RPAREN] = ACTIONS(470),
  },
  [127] = {
    [anon_sym_DQUOTE] = ACTIONS(472),
  },
  [128] = {
    [sym_varid] = ACTIONS(474),
  },
  [129] = {
    [sym_varid] = ACTIONS(476),
  },
  [130] = {
    [sym_conid] = ACTIONS(478),
  },
  [131] = {
    [sym_conid] = ACTIONS(480),
  },
  [132] = {
    [sym_varid] = ACTIONS(482),
  },
  [133] = {
    [anon_sym_DQUOTE] = ACTIONS(484),
  },
  [134] = {
    [anon_sym_LBRACE] = ACTIONS(486),
  },
  [135] = {
    [anon_sym_EQ] = ACTIONS(488),
  },
  [136] = {
    [anon_sym_DQUOTE] = ACTIONS(490),
  },
  [137] = {
    [anon_sym_LBRACE] = ACTIONS(492),
  },
  [138] = {
    [sym_conid] = ACTIONS(494),
  },
  [139] = {
    [anon_sym_RBRACE] = ACTIONS(496),
  },
  [140] = {
    [sym_string_content] = ACTIONS(498),
  },
  [141] = {
    [sym_varid] = ACTIONS(500),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(502),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(504),
  },
  [144] = {
    [sym_conid] = ACTIONS(506),
  },
  [145] = {
    [sym_conid] = ACTIONS(508),
  },
  [146] = {
    [sym_conid] = ACTIONS(510),
  },
  [147] = {
    [sym_conid] = ACTIONS(512),
  },
  [148] = {
    [sym_code_block_content] = ACTIONS(514),
  },
  [149] = {
    [anon_sym_RBRACE] = ACTIONS(516),
  },
  [150] = {
    [sym_conid] = ACTIONS(518),
  },
  [151] = {
    [anon_sym_RBRACE] = ACTIONS(520),
  },
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(522),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(524),
  },
  [154] = {
    [sym_code_block_content] = ACTIONS(526),
  },
  [155] = {
    [sym_varid] = ACTIONS(528),
  },
  [156] = {
    [sym_code_block_content] = ACTIONS(530),
  },
  [157] = {
    [sym_code_block_content] = ACTIONS(532),
  },
  [158] = {
    [sym_code_block_content] = ACTIONS(534),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(115),
  [7] = {.count = 1, .reusable = true}, SHIFT(148),
  [9] = {.count = 1, .reusable = false}, SHIFT(147),
  [11] = {.count = 1, .reusable = true}, SHIFT(147),
  [13] = {.count = 1, .reusable = false}, SHIFT(146),
  [15] = {.count = 1, .reusable = true}, SHIFT(146),
  [17] = {.count = 1, .reusable = false}, SHIFT(145),
  [19] = {.count = 1, .reusable = true}, SHIFT(145),
  [21] = {.count = 1, .reusable = false}, SHIFT(144),
  [23] = {.count = 1, .reusable = true}, SHIFT(144),
  [25] = {.count = 1, .reusable = true}, SHIFT(127),
  [27] = {.count = 1, .reusable = false}, SHIFT(127),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(155),
  [36] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(155),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(128),
  [42] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(132),
  [48] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(132),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_attr_declarations, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(155),
  [95] = {.count = 1, .reusable = false}, SHIFT(155),
  [97] = {.count = 1, .reusable = true}, SHIFT(128),
  [99] = {.count = 1, .reusable = false}, SHIFT(128),
  [101] = {.count = 1, .reusable = true}, SHIFT(132),
  [103] = {.count = 1, .reusable = false}, SHIFT(132),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 2),
  [109] = {.count = 1, .reusable = false}, SHIFT(25),
  [111] = {.count = 1, .reusable = false}, SHIFT(103),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 2),
  [115] = {.count = 1, .reusable = false}, SHIFT(124),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(121),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definitions, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(121),
  [128] = {.count = 1, .reusable = false}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definitions, 1),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_sem_alternatives, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_sem_alternatives, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(103),
  [147] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat2, 2), SHIFT_REPEAT(124),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_code_block, 3),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_code_block, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(129),
  [165] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attribute_repeat1, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(78),
  [173] = {.count = 1, .reusable = false}, SHIFT(55),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_new_attr_style, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(129),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [195] = {.count = 1, .reusable = false}, SHIFT(43),
  [197] = {.count = 1, .reusable = false}, SHIFT(100),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(25),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(43),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(100),
  [220] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_attr_impl, 4),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_attr_impl, 4),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [232] = {.count = 1, .reusable = true}, SHIFT(150),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_data_definition, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sem_definition_repeat1, 2), SHIFT_REPEAT(125),
  [241] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sem_definition_repeat1, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_local_attribute, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_local_attribute, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_local_attr_impl, 4),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_local_attr_impl, 4),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(125),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_sem_definition, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_data_definition, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_sem_definition, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_sem_definition, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_sem_impl, 1),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_sem_impl, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(150),
  [274] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 5),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_type_definition, 5),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 5),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_definition, 2),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_code_block_definition, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 6),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_include_definition, 4),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_include_definition, 4),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_attr_definition, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 7),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_definition, 1),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_code_block_definition, 1),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 6),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_type_definition, 6),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_old_attr_style, 4),
  [320] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sem_alternatives_repeat1, 2), SHIFT_REPEAT(55),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(60),
  [326] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(64),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(58),
  [334] = {.count = 1, .reusable = true}, SHIFT(60),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [338] = {.count = 1, .reusable = true}, SHIFT(64),
  [340] = {.count = 1, .reusable = true}, SHIFT(58),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 1),
  [344] = {.count = 1, .reusable = true}, SHIFT(92),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [348] = {.count = 1, .reusable = true}, SHIFT(61),
  [350] = {.count = 1, .reusable = true}, SHIFT(57),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 2),
  [354] = {.count = 1, .reusable = true}, SHIFT(137),
  [356] = {.count = 1, .reusable = false}, SHIFT(118),
  [358] = {.count = 1, .reusable = true}, SHIFT(118),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_at_pattern1, 2),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_pattern1, 3),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(141),
  [367] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [371] = {.count = 1, .reusable = true}, SHIFT(44),
  [373] = {.count = 1, .reusable = true}, SHIFT(87),
  [375] = {.count = 1, .reusable = true}, SHIFT(154),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(72),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(87),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(154),
  [390] = {.count = 1, .reusable = true}, SHIFT(141),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [396] = {.count = 1, .reusable = true}, SHIFT(52),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [402] = {.count = 1, .reusable = true}, SHIFT(45),
  [404] = {.count = 1, .reusable = true}, SHIFT(72),
  [406] = {.count = 1, .reusable = true}, SHIFT(53),
  [408] = {.count = 1, .reusable = true}, SHIFT(81),
  [410] = {.count = 1, .reusable = true}, SHIFT(50),
  [412] = {.count = 1, .reusable = true}, SHIFT(75),
  [414] = {.count = 1, .reusable = true}, SHIFT(76),
  [416] = {.count = 1, .reusable = true}, SHIFT(47),
  [418] = {.count = 1, .reusable = true}, SHIFT(86),
  [420] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(72),
  [425] = {.count = 1, .reusable = true}, SHIFT(80),
  [427] = {.count = 1, .reusable = true}, SHIFT(10),
  [429] = {.count = 1, .reusable = true}, SHIFT(156),
  [431] = {.count = 1, .reusable = true}, SHIFT(39),
  [433] = {.count = 1, .reusable = true}, SHIFT(157),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [437] = {.count = 1, .reusable = true}, SHIFT(101),
  [439] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(74),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 2),
  [446] = {.count = 1, .reusable = true}, SHIFT(74),
  [448] = {.count = 1, .reusable = true}, SHIFT(158),
  [450] = {.count = 1, .reusable = true}, SHIFT(134),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 4),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_list, 1),
  [456] = {.count = 1, .reusable = true}, SHIFT(18),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_use_operator, 3),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_use_operator, 3),
  [466] = {.count = 1, .reusable = true}, SHIFT(73),
  [468] = {.count = 1, .reusable = true}, SHIFT(6),
  [470] = {.count = 1, .reusable = true}, SHIFT(65),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_include_keyword, 1),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [476] = {.count = 1, .reusable = true}, SHIFT(110),
  [478] = {.count = 1, .reusable = true}, SHIFT(135),
  [480] = {.count = 1, .reusable = true}, SHIFT(34),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [484] = {.count = 1, .reusable = true}, SHIFT(48),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_assign_symbol, 1),
  [488] = {.count = 1, .reusable = true}, SHIFT(143),
  [490] = {.count = 1, .reusable = true}, SHIFT(140),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_use_keyword, 1),
  [494] = {.count = 1, .reusable = true}, SHIFT(35),
  [496] = {.count = 1, .reusable = true}, SHIFT(41),
  [498] = {.count = 1, .reusable = true}, SHIFT(133),
  [500] = {.count = 1, .reusable = true}, SHIFT(90),
  [502] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [504] = {.count = 1, .reusable = true}, SHIFT(67),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_type_keyword, 1),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_sem_keyword, 1),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [514] = {.count = 1, .reusable = true}, SHIFT(139),
  [516] = {.count = 1, .reusable = true}, SHIFT(77),
  [518] = {.count = 1, .reusable = true}, SHIFT(24),
  [520] = {.count = 1, .reusable = true}, SHIFT(14),
  [522] = {.count = 1, .reusable = true}, SHIFT(42),
  [524] = {.count = 1, .reusable = true}, SHIFT(29),
  [526] = {.count = 1, .reusable = true}, SHIFT(149),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [530] = {.count = 1, .reusable = true}, SHIFT(151),
  [532] = {.count = 1, .reusable = true}, SHIFT(152),
  [534] = {.count = 1, .reusable = true}, SHIFT(153),
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
