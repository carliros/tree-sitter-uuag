#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 102
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_PIPE = 4,
  anon_sym_COMMA = 5,
  sym_conid = 6,
  sym_varid = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_code_block_content = 10,
  anon_sym_data = 11,
  anon_sym_DATA = 12,
  anon_sym_attr = 13,
  anon_sym_ATTR = 14,
  anon_sym_type = 15,
  anon_sym_TYPE = 16,
  anon_sym_use = 17,
  anon_sym_USE = 18,
  anon_sym_INH = 19,
  anon_sym_inh = 20,
  anon_sym_SYN = 21,
  anon_sym_syn = 22,
  anon_sym_CHN = 23,
  anon_sym_chn = 24,
  anon_sym_COLON = 25,
  anon_sym_COLON_COLON = 26,
  sym_source_file = 27,
  sym__elem = 28,
  sym_type_definition = 29,
  sym_attr_definition = 30,
  sym_attr_declarations = 31,
  sym_old_attr_style = 32,
  sym_new_attr_style = 33,
  sym_inh_attr_declaration_new_style = 34,
  sym_syn_attr_declaration_new_style = 35,
  sym_chn_attr_declaration_new_style = 36,
  sym_inh_attr_declaration_old_style = 37,
  sym_syn_attr_declaration_old_style = 38,
  sym_use_operator = 39,
  sym_data_definition = 40,
  sym_data_alternatives = 41,
  sym_field = 42,
  sym_var_type_definitions = 43,
  sym_var_type_definition = 44,
  sym_type = 45,
  sym_varids = 46,
  sym_code_block = 47,
  sym_data_keyword = 48,
  sym_attr_keyword = 49,
  sym_type_keyword = 50,
  sym_use_keyword = 51,
  sym_inh_keyword = 52,
  sym_syn_keyword = 53,
  sym_chn_keyword = 54,
  sym_type_symbol = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_type_definition_repeat1 = 57,
  aux_sym_attr_definition_repeat1 = 58,
  aux_sym_attr_declarations_repeat1 = 59,
  aux_sym_old_attr_style_repeat1 = 60,
  aux_sym_old_attr_style_repeat2 = 61,
  aux_sym_data_definition_repeat1 = 62,
  aux_sym_data_alternatives_repeat1 = 63,
  aux_sym_var_type_definitions_repeat1 = 64,
  aux_sym_varids_repeat1 = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [sym_conid] = "conid",
  [sym_varid] = "varid",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_code_block_content] = "code_block_content",
  [anon_sym_data] = "data",
  [anon_sym_DATA] = "DATA",
  [anon_sym_attr] = "attr",
  [anon_sym_ATTR] = "ATTR",
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
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [sym_source_file] = "source_file",
  [sym__elem] = "_elem",
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
  [sym_type_keyword] = "type_keyword",
  [sym_use_keyword] = "use_keyword",
  [sym_inh_keyword] = "inh_keyword",
  [sym_syn_keyword] = "syn_keyword",
  [sym_chn_keyword] = "chn_keyword",
  [sym_type_symbol] = "type_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_attr_definition_repeat1] = "attr_definition_repeat1",
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_definition_repeat1] = {
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
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'D') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(39);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'H') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == 'H') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 'Y') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'Y') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(82);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(59);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'P') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'S') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(80);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(71);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'e') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'p') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'y') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_code_block_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_attr);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 77},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 77},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_conid] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_DATA] = ACTIONS(1),
    [anon_sym_attr] = ACTIONS(1),
    [anon_sym_ATTR] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__elem] = STATE(7),
    [sym_type_definition] = STATE(7),
    [sym_attr_definition] = STATE(7),
    [sym_data_definition] = STATE(7),
    [sym_data_keyword] = STATE(92),
    [sym_attr_keyword] = STATE(79),
    [sym_type_keyword] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_TYPE] = ACTIONS(9),
  },
  [2] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(19),
    [sym_syn_attr_declaration_new_style] = STATE(19),
    [sym_chn_attr_declaration_new_style] = STATE(19),
    [sym_inh_keyword] = STATE(74),
    [sym_syn_keyword] = STATE(73),
    [sym_chn_keyword] = STATE(72),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_data] = ACTIONS(11),
    [anon_sym_DATA] = ACTIONS(11),
    [anon_sym_attr] = ACTIONS(11),
    [anon_sym_ATTR] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_TYPE] = ACTIONS(11),
    [anon_sym_INH] = ACTIONS(13),
    [anon_sym_inh] = ACTIONS(13),
    [anon_sym_SYN] = ACTIONS(16),
    [anon_sym_syn] = ACTIONS(16),
    [anon_sym_CHN] = ACTIONS(19),
    [anon_sym_chn] = ACTIONS(19),
  },
  [3] = {
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(19),
    [sym_syn_attr_declaration_new_style] = STATE(19),
    [sym_chn_attr_declaration_new_style] = STATE(19),
    [sym_inh_keyword] = STATE(74),
    [sym_syn_keyword] = STATE(73),
    [sym_chn_keyword] = STATE(72),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_DATA] = ACTIONS(22),
    [anon_sym_attr] = ACTIONS(22),
    [anon_sym_ATTR] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(22),
    [anon_sym_TYPE] = ACTIONS(22),
    [anon_sym_INH] = ACTIONS(24),
    [anon_sym_inh] = ACTIONS(24),
    [anon_sym_SYN] = ACTIONS(26),
    [anon_sym_syn] = ACTIONS(26),
    [anon_sym_CHN] = ACTIONS(28),
    [anon_sym_chn] = ACTIONS(28),
  },
  [4] = {
    [sym_attr_declarations] = STATE(33),
    [sym_old_attr_style] = STATE(32),
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(19),
    [sym_syn_attr_declaration_new_style] = STATE(19),
    [sym_chn_attr_declaration_new_style] = STATE(19),
    [sym_inh_keyword] = STATE(74),
    [sym_syn_keyword] = STATE(73),
    [sym_chn_keyword] = STATE(72),
    [aux_sym_attr_definition_repeat1] = STATE(28),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
    [anon_sym_LBRACK] = ACTIONS(30),
    [sym_conid] = ACTIONS(32),
    [anon_sym_INH] = ACTIONS(34),
    [anon_sym_inh] = ACTIONS(24),
    [anon_sym_SYN] = ACTIONS(36),
    [anon_sym_syn] = ACTIONS(26),
    [anon_sym_CHN] = ACTIONS(38),
    [anon_sym_chn] = ACTIONS(28),
  },
  [5] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_DATA] = ACTIONS(40),
    [anon_sym_attr] = ACTIONS(40),
    [anon_sym_ATTR] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [anon_sym_TYPE] = ACTIONS(40),
    [anon_sym_INH] = ACTIONS(40),
    [anon_sym_inh] = ACTIONS(40),
    [anon_sym_SYN] = ACTIONS(40),
    [anon_sym_syn] = ACTIONS(40),
    [anon_sym_CHN] = ACTIONS(40),
    [anon_sym_chn] = ACTIONS(40),
  },
  [6] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_data] = ACTIONS(45),
    [anon_sym_DATA] = ACTIONS(45),
    [anon_sym_attr] = ACTIONS(45),
    [anon_sym_ATTR] = ACTIONS(45),
    [anon_sym_type] = ACTIONS(45),
    [anon_sym_TYPE] = ACTIONS(45),
    [anon_sym_INH] = ACTIONS(45),
    [anon_sym_inh] = ACTIONS(45),
    [anon_sym_SYN] = ACTIONS(45),
    [anon_sym_syn] = ACTIONS(45),
    [anon_sym_CHN] = ACTIONS(45),
    [anon_sym_chn] = ACTIONS(45),
  },
  [7] = {
    [sym__elem] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_attr_definition] = STATE(9),
    [sym_data_definition] = STATE(9),
    [sym_data_keyword] = STATE(92),
    [sym_attr_keyword] = STATE(79),
    [sym_type_keyword] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_TYPE] = ACTIONS(9),
  },
  [8] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_data] = ACTIONS(51),
    [anon_sym_DATA] = ACTIONS(51),
    [anon_sym_attr] = ACTIONS(51),
    [anon_sym_ATTR] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(51),
    [anon_sym_TYPE] = ACTIONS(51),
    [anon_sym_INH] = ACTIONS(51),
    [anon_sym_inh] = ACTIONS(51),
    [anon_sym_SYN] = ACTIONS(51),
    [anon_sym_syn] = ACTIONS(51),
    [anon_sym_CHN] = ACTIONS(51),
    [anon_sym_chn] = ACTIONS(51),
  },
  [9] = {
    [sym__elem] = STATE(9),
    [sym_type_definition] = STATE(9),
    [sym_attr_definition] = STATE(9),
    [sym_data_definition] = STATE(9),
    [sym_data_keyword] = STATE(92),
    [sym_attr_keyword] = STATE(79),
    [sym_type_keyword] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_data] = ACTIONS(55),
    [anon_sym_DATA] = ACTIONS(55),
    [anon_sym_attr] = ACTIONS(58),
    [anon_sym_ATTR] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(61),
    [anon_sym_TYPE] = ACTIONS(61),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_DATA] = ACTIONS(40),
    [anon_sym_attr] = ACTIONS(40),
    [anon_sym_ATTR] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [anon_sym_TYPE] = ACTIONS(40),
    [anon_sym_INH] = ACTIONS(40),
    [anon_sym_inh] = ACTIONS(40),
    [anon_sym_SYN] = ACTIONS(40),
    [anon_sym_syn] = ACTIONS(40),
    [anon_sym_CHN] = ACTIONS(40),
    [anon_sym_chn] = ACTIONS(40),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_data] = ACTIONS(64),
    [anon_sym_DATA] = ACTIONS(64),
    [anon_sym_attr] = ACTIONS(64),
    [anon_sym_ATTR] = ACTIONS(64),
    [anon_sym_type] = ACTIONS(64),
    [anon_sym_TYPE] = ACTIONS(64),
    [anon_sym_INH] = ACTIONS(64),
    [anon_sym_inh] = ACTIONS(64),
    [anon_sym_SYN] = ACTIONS(64),
    [anon_sym_syn] = ACTIONS(64),
    [anon_sym_CHN] = ACTIONS(64),
    [anon_sym_chn] = ACTIONS(64),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_data] = ACTIONS(66),
    [anon_sym_DATA] = ACTIONS(66),
    [anon_sym_attr] = ACTIONS(66),
    [anon_sym_ATTR] = ACTIONS(66),
    [anon_sym_type] = ACTIONS(66),
    [anon_sym_TYPE] = ACTIONS(66),
    [anon_sym_INH] = ACTIONS(66),
    [anon_sym_inh] = ACTIONS(66),
    [anon_sym_SYN] = ACTIONS(66),
    [anon_sym_syn] = ACTIONS(66),
    [anon_sym_CHN] = ACTIONS(66),
    [anon_sym_chn] = ACTIONS(66),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_data] = ACTIONS(68),
    [anon_sym_DATA] = ACTIONS(68),
    [anon_sym_attr] = ACTIONS(68),
    [anon_sym_ATTR] = ACTIONS(68),
    [anon_sym_type] = ACTIONS(68),
    [anon_sym_TYPE] = ACTIONS(68),
    [anon_sym_INH] = ACTIONS(68),
    [anon_sym_inh] = ACTIONS(68),
    [anon_sym_SYN] = ACTIONS(68),
    [anon_sym_syn] = ACTIONS(68),
    [anon_sym_CHN] = ACTIONS(68),
    [anon_sym_chn] = ACTIONS(68),
  },
  [14] = {
    [sym_field] = STATE(20),
    [sym_var_type_definition] = STATE(22),
    [aux_sym_data_alternatives_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [sym_conid] = ACTIONS(72),
    [sym_varid] = ACTIONS(74),
    [anon_sym_data] = ACTIONS(76),
    [anon_sym_DATA] = ACTIONS(76),
    [anon_sym_attr] = ACTIONS(76),
    [anon_sym_ATTR] = ACTIONS(76),
    [anon_sym_type] = ACTIONS(76),
    [anon_sym_TYPE] = ACTIONS(76),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_data] = ACTIONS(78),
    [anon_sym_DATA] = ACTIONS(78),
    [anon_sym_attr] = ACTIONS(78),
    [anon_sym_ATTR] = ACTIONS(78),
    [anon_sym_type] = ACTIONS(78),
    [anon_sym_TYPE] = ACTIONS(78),
    [anon_sym_INH] = ACTIONS(78),
    [anon_sym_inh] = ACTIONS(78),
    [anon_sym_SYN] = ACTIONS(78),
    [anon_sym_syn] = ACTIONS(78),
    [anon_sym_CHN] = ACTIONS(78),
    [anon_sym_chn] = ACTIONS(78),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_data] = ACTIONS(80),
    [anon_sym_DATA] = ACTIONS(80),
    [anon_sym_attr] = ACTIONS(80),
    [anon_sym_ATTR] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_TYPE] = ACTIONS(80),
    [anon_sym_INH] = ACTIONS(80),
    [anon_sym_inh] = ACTIONS(80),
    [anon_sym_SYN] = ACTIONS(80),
    [anon_sym_syn] = ACTIONS(80),
    [anon_sym_CHN] = ACTIONS(80),
    [anon_sym_chn] = ACTIONS(80),
  },
  [17] = {
    [sym_field] = STATE(14),
    [sym_var_type_definition] = STATE(22),
    [aux_sym_data_alternatives_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [sym_conid] = ACTIONS(72),
    [sym_varid] = ACTIONS(74),
    [anon_sym_data] = ACTIONS(84),
    [anon_sym_DATA] = ACTIONS(84),
    [anon_sym_attr] = ACTIONS(84),
    [anon_sym_ATTR] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym_TYPE] = ACTIONS(84),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_data] = ACTIONS(86),
    [anon_sym_DATA] = ACTIONS(86),
    [anon_sym_attr] = ACTIONS(86),
    [anon_sym_ATTR] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_TYPE] = ACTIONS(86),
    [anon_sym_INH] = ACTIONS(86),
    [anon_sym_inh] = ACTIONS(86),
    [anon_sym_SYN] = ACTIONS(86),
    [anon_sym_syn] = ACTIONS(86),
    [anon_sym_CHN] = ACTIONS(86),
    [anon_sym_chn] = ACTIONS(86),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_data] = ACTIONS(88),
    [anon_sym_DATA] = ACTIONS(88),
    [anon_sym_attr] = ACTIONS(88),
    [anon_sym_ATTR] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_TYPE] = ACTIONS(88),
    [anon_sym_INH] = ACTIONS(88),
    [anon_sym_inh] = ACTIONS(88),
    [anon_sym_SYN] = ACTIONS(88),
    [anon_sym_syn] = ACTIONS(88),
    [anon_sym_CHN] = ACTIONS(88),
    [anon_sym_chn] = ACTIONS(88),
  },
  [20] = {
    [sym_field] = STATE(20),
    [sym_var_type_definition] = STATE(22),
    [aux_sym_data_alternatives_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [sym_conid] = ACTIONS(92),
    [sym_varid] = ACTIONS(95),
    [anon_sym_data] = ACTIONS(98),
    [anon_sym_DATA] = ACTIONS(98),
    [anon_sym_attr] = ACTIONS(98),
    [anon_sym_ATTR] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [anon_sym_TYPE] = ACTIONS(98),
  },
  [21] = {
    [sym_data_alternatives] = STATE(25),
    [aux_sym_data_definition_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(100),
    [anon_sym_DATA] = ACTIONS(100),
    [anon_sym_attr] = ACTIONS(100),
    [anon_sym_ATTR] = ACTIONS(100),
    [anon_sym_type] = ACTIONS(100),
    [anon_sym_TYPE] = ACTIONS(100),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [sym_conid] = ACTIONS(106),
    [sym_varid] = ACTIONS(106),
    [anon_sym_data] = ACTIONS(106),
    [anon_sym_DATA] = ACTIONS(106),
    [anon_sym_attr] = ACTIONS(106),
    [anon_sym_ATTR] = ACTIONS(106),
    [anon_sym_type] = ACTIONS(106),
    [anon_sym_TYPE] = ACTIONS(106),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [sym_conid] = ACTIONS(108),
    [sym_varid] = ACTIONS(108),
    [anon_sym_data] = ACTIONS(108),
    [anon_sym_DATA] = ACTIONS(108),
    [anon_sym_attr] = ACTIONS(108),
    [anon_sym_ATTR] = ACTIONS(108),
    [anon_sym_type] = ACTIONS(108),
    [anon_sym_TYPE] = ACTIONS(108),
  },
  [24] = {
    [sym_data_alternatives] = STATE(21),
    [aux_sym_data_definition_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_DATA] = ACTIONS(110),
    [anon_sym_attr] = ACTIONS(110),
    [anon_sym_ATTR] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_TYPE] = ACTIONS(110),
  },
  [25] = {
    [sym_data_alternatives] = STATE(25),
    [aux_sym_data_definition_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_data] = ACTIONS(112),
    [anon_sym_DATA] = ACTIONS(112),
    [anon_sym_attr] = ACTIONS(112),
    [anon_sym_ATTR] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
    [anon_sym_TYPE] = ACTIONS(112),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym_conid] = ACTIONS(117),
    [sym_varid] = ACTIONS(117),
    [anon_sym_data] = ACTIONS(117),
    [anon_sym_DATA] = ACTIONS(117),
    [anon_sym_attr] = ACTIONS(117),
    [anon_sym_ATTR] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(117),
    [anon_sym_TYPE] = ACTIONS(117),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_conid] = ACTIONS(119),
    [sym_varid] = ACTIONS(119),
    [anon_sym_data] = ACTIONS(119),
    [anon_sym_DATA] = ACTIONS(119),
    [anon_sym_attr] = ACTIONS(119),
    [anon_sym_ATTR] = ACTIONS(119),
    [anon_sym_type] = ACTIONS(119),
    [anon_sym_TYPE] = ACTIONS(119),
  },
  [28] = {
    [aux_sym_attr_definition_repeat1] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(121),
    [sym_conid] = ACTIONS(123),
    [anon_sym_INH] = ACTIONS(126),
    [anon_sym_inh] = ACTIONS(121),
    [anon_sym_SYN] = ACTIONS(126),
    [anon_sym_syn] = ACTIONS(121),
    [anon_sym_CHN] = ACTIONS(126),
    [anon_sym_chn] = ACTIONS(121),
  },
  [29] = {
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [sym_conid] = ACTIONS(64),
    [sym_varid] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_COLON_COLON] = ACTIONS(64),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_data] = ACTIONS(128),
    [anon_sym_DATA] = ACTIONS(128),
    [anon_sym_attr] = ACTIONS(128),
    [anon_sym_ATTR] = ACTIONS(128),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_TYPE] = ACTIONS(128),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_data] = ACTIONS(130),
    [anon_sym_DATA] = ACTIONS(130),
    [anon_sym_attr] = ACTIONS(130),
    [anon_sym_ATTR] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(130),
    [anon_sym_TYPE] = ACTIONS(130),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_DATA] = ACTIONS(22),
    [anon_sym_attr] = ACTIONS(22),
    [anon_sym_ATTR] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(22),
    [anon_sym_TYPE] = ACTIONS(22),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_DATA] = ACTIONS(132),
    [anon_sym_attr] = ACTIONS(132),
    [anon_sym_ATTR] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_TYPE] = ACTIONS(132),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_data] = ACTIONS(134),
    [anon_sym_DATA] = ACTIONS(134),
    [anon_sym_attr] = ACTIONS(134),
    [anon_sym_ATTR] = ACTIONS(134),
    [anon_sym_type] = ACTIONS(134),
    [anon_sym_TYPE] = ACTIONS(134),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_DATA] = ACTIONS(136),
    [anon_sym_attr] = ACTIONS(136),
    [anon_sym_ATTR] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [anon_sym_TYPE] = ACTIONS(136),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_data] = ACTIONS(138),
    [anon_sym_DATA] = ACTIONS(138),
    [anon_sym_attr] = ACTIONS(138),
    [anon_sym_ATTR] = ACTIONS(138),
    [anon_sym_type] = ACTIONS(138),
    [anon_sym_TYPE] = ACTIONS(138),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(140),
    [anon_sym_DATA] = ACTIONS(140),
    [anon_sym_attr] = ACTIONS(140),
    [anon_sym_ATTR] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(140),
    [anon_sym_TYPE] = ACTIONS(140),
  },
  [38] = {
    [sym_use_operator] = STATE(68),
    [sym_use_keyword] = STATE(75),
    [sym_type_symbol] = STATE(62),
    [anon_sym_use] = ACTIONS(142),
    [anon_sym_USE] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(146),
  },
  [39] = {
    [aux_sym_varids_repeat1] = STATE(39),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_use] = ACTIONS(151),
    [anon_sym_USE] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(151),
  },
  [40] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [sym_varid] = ACTIONS(157),
  },
  [41] = {
    [aux_sym_varids_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_use] = ACTIONS(162),
    [anon_sym_USE] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_COLON_COLON] = ACTIONS(162),
  },
  [42] = {
    [sym_type] = STATE(43),
    [sym_code_block] = STATE(54),
    [aux_sym_type_definition_repeat1] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(166),
    [sym_conid] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [43] = {
    [sym_type] = STATE(43),
    [sym_code_block] = STATE(54),
    [aux_sym_type_definition_repeat1] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(172),
    [sym_conid] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(177),
  },
  [44] = {
    [sym_type] = STATE(42),
    [sym_code_block] = STATE(54),
    [aux_sym_type_definition_repeat1] = STATE(42),
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_conid] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [45] = {
    [aux_sym_varids_repeat1] = STATE(39),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_use] = ACTIONS(182),
    [anon_sym_USE] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_COLON_COLON] = ACTIONS(182),
  },
  [46] = {
    [sym_syn_attr_declaration_old_style] = STATE(58),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(186),
    [sym_varid] = ACTIONS(188),
  },
  [47] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_PIPE] = ACTIONS(190),
    [sym_varid] = ACTIONS(188),
  },
  [48] = {
    [sym_syn_attr_declaration_old_style] = STATE(47),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(47),
    [anon_sym_PIPE] = ACTIONS(192),
    [sym_varid] = ACTIONS(188),
  },
  [49] = {
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_use] = ACTIONS(151),
    [anon_sym_USE] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(151),
  },
  [50] = {
    [sym_syn_attr_declaration_old_style] = STATE(57),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(57),
    [anon_sym_PIPE] = ACTIONS(190),
    [sym_varid] = ACTIONS(188),
  },
  [51] = {
    [sym_inh_attr_declaration_old_style] = STATE(51),
    [sym_varids] = STATE(70),
    [aux_sym_old_attr_style_repeat1] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(194),
    [sym_varid] = ACTIONS(196),
  },
  [52] = {
    [sym_inh_attr_declaration_old_style] = STATE(60),
    [sym_varids] = STATE(70),
    [aux_sym_old_attr_style_repeat1] = STATE(60),
    [anon_sym_PIPE] = ACTIONS(199),
    [sym_varid] = ACTIONS(188),
  },
  [53] = {
    [sym_syn_attr_declaration_old_style] = STATE(56),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(56),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_varid] = ACTIONS(188),
  },
  [54] = {
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_conid] = ACTIONS(66),
    [sym_varid] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(66),
  },
  [55] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_varid] = ACTIONS(188),
  },
  [56] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym_varid] = ACTIONS(188),
  },
  [57] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_PIPE] = ACTIONS(205),
    [sym_varid] = ACTIONS(188),
  },
  [58] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_varid] = ACTIONS(188),
  },
  [59] = {
    [sym_syn_attr_declaration_old_style] = STATE(55),
    [sym_varids] = STATE(38),
    [aux_sym_old_attr_style_repeat2] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_varid] = ACTIONS(188),
  },
  [60] = {
    [sym_inh_attr_declaration_old_style] = STATE(51),
    [sym_varids] = STATE(70),
    [aux_sym_old_attr_style_repeat1] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(209),
    [sym_varid] = ACTIONS(188),
  },
  [61] = {
    [sym_type] = STATE(78),
    [sym_code_block] = STATE(54),
    [sym_conid] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [62] = {
    [sym_type] = STATE(66),
    [sym_code_block] = STATE(54),
    [sym_conid] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [63] = {
    [sym_type] = STATE(13),
    [sym_code_block] = STATE(12),
    [sym_conid] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(213),
  },
  [64] = {
    [sym_type] = STATE(26),
    [sym_code_block] = STATE(27),
    [sym_conid] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(217),
  },
  [65] = {
    [sym_type] = STATE(71),
    [sym_code_block] = STATE(54),
    [sym_conid] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [66] = {
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [sym_varid] = ACTIONS(219),
  },
  [67] = {
    [sym_type_symbol] = STATE(64),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(146),
  },
  [68] = {
    [sym_type_symbol] = STATE(65),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(146),
  },
  [69] = {
    [sym_type_symbol] = STATE(63),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(146),
  },
  [70] = {
    [sym_type_symbol] = STATE(61),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(146),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [sym_varid] = ACTIONS(221),
  },
  [72] = {
    [sym_var_type_definitions] = STATE(15),
    [sym_var_type_definition] = STATE(8),
    [sym_varid] = ACTIONS(223),
  },
  [73] = {
    [sym_var_type_definitions] = STATE(16),
    [sym_var_type_definition] = STATE(8),
    [sym_varid] = ACTIONS(223),
  },
  [74] = {
    [sym_var_type_definitions] = STATE(18),
    [sym_var_type_definition] = STATE(8),
    [sym_varid] = ACTIONS(223),
  },
  [75] = {
    [sym_code_block] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [76] = {
    [sym_conid] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
  },
  [77] = {
    [sym_var_type_definition] = STATE(10),
    [sym_varid] = ACTIONS(223),
  },
  [78] = {
    [anon_sym_PIPE] = ACTIONS(227),
    [sym_varid] = ACTIONS(227),
  },
  [79] = {
    [aux_sym_attr_definition_repeat1] = STATE(4),
    [sym_conid] = ACTIONS(229),
  },
  [80] = {
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_COLON_COLON] = ACTIONS(233),
  },
  [81] = {
    [sym_code_block] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(170),
  },
  [82] = {
    [sym_varid] = ACTIONS(235),
  },
  [83] = {
    [sym_varid] = ACTIONS(237),
  },
  [84] = {
    [sym_varid] = ACTIONS(239),
  },
  [85] = {
    [sym_varid] = ACTIONS(241),
  },
  [86] = {
    [anon_sym_LBRACE] = ACTIONS(243),
  },
  [87] = {
    [anon_sym_RBRACE] = ACTIONS(245),
  },
  [88] = {
    [sym_conid] = ACTIONS(247),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(249),
  },
  [90] = {
    [sym_conid] = ACTIONS(251),
  },
  [91] = {
    [anon_sym_LBRACK] = ACTIONS(253),
  },
  [92] = {
    [sym_conid] = ACTIONS(255),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(257),
  },
  [94] = {
    [sym_conid] = ACTIONS(259),
  },
  [95] = {
    [sym_conid] = ACTIONS(261),
  },
  [96] = {
    [sym_code_block_content] = ACTIONS(263),
  },
  [97] = {
    [anon_sym_RBRACE] = ACTIONS(265),
  },
  [98] = {
    [anon_sym_RBRACE] = ACTIONS(267),
  },
  [99] = {
    [sym_conid] = ACTIONS(269),
  },
  [100] = {
    [sym_code_block_content] = ACTIONS(271),
  },
  [101] = {
    [sym_code_block_content] = ACTIONS(273),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(99),
  [7] = {.count = 1, .reusable = true}, SHIFT(95),
  [9] = {.count = 1, .reusable = true}, SHIFT(94),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(85),
  [16] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(84),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(83),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [24] = {.count = 1, .reusable = true}, SHIFT(85),
  [26] = {.count = 1, .reusable = true}, SHIFT(84),
  [28] = {.count = 1, .reusable = true}, SHIFT(83),
  [30] = {.count = 1, .reusable = true}, SHIFT(52),
  [32] = {.count = 1, .reusable = false}, SHIFT(28),
  [34] = {.count = 1, .reusable = false}, SHIFT(85),
  [36] = {.count = 1, .reusable = false}, SHIFT(84),
  [38] = {.count = 1, .reusable = false}, SHIFT(83),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(77),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(77),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_code_block, 3),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [72] = {.count = 1, .reusable = false}, SHIFT(22),
  [74] = {.count = 1, .reusable = false}, SHIFT(67),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [92] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(22),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(67),
  [98] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [102] = {.count = 1, .reusable = true}, SHIFT(88),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_code_block, 3),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(88),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2), SHIFT_REPEAT(28),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 5),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_type_definition, 6),
  [142] = {.count = 1, .reusable = true}, SHIFT(86),
  [144] = {.count = 1, .reusable = false}, SHIFT(76),
  [146] = {.count = 1, .reusable = true}, SHIFT(76),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(82),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(41),
  [160] = {.count = 1, .reusable = true}, SHIFT(82),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [166] = {.count = 1, .reusable = true}, SHIFT(37),
  [168] = {.count = 1, .reusable = true}, SHIFT(54),
  [170] = {.count = 1, .reusable = true}, SHIFT(96),
  [172] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(54),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(96),
  [180] = {.count = 1, .reusable = true}, SHIFT(35),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [186] = {.count = 1, .reusable = true}, SHIFT(31),
  [188] = {.count = 1, .reusable = true}, SHIFT(41),
  [190] = {.count = 1, .reusable = true}, SHIFT(59),
  [192] = {.count = 1, .reusable = true}, SHIFT(46),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(41),
  [199] = {.count = 1, .reusable = true}, SHIFT(48),
  [201] = {.count = 1, .reusable = true}, SHIFT(36),
  [203] = {.count = 1, .reusable = true}, SHIFT(30),
  [205] = {.count = 1, .reusable = true}, SHIFT(53),
  [207] = {.count = 1, .reusable = true}, SHIFT(34),
  [209] = {.count = 1, .reusable = true}, SHIFT(50),
  [211] = {.count = 1, .reusable = true}, SHIFT(12),
  [213] = {.count = 1, .reusable = true}, SHIFT(100),
  [215] = {.count = 1, .reusable = true}, SHIFT(27),
  [217] = {.count = 1, .reusable = true}, SHIFT(101),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 4),
  [223] = {.count = 1, .reusable = true}, SHIFT(69),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [229] = {.count = 1, .reusable = true}, SHIFT(4),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_use_operator, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_use_operator, 3),
  [235] = {.count = 1, .reusable = true}, SHIFT(49),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_use_keyword, 1),
  [245] = {.count = 1, .reusable = true}, SHIFT(29),
  [247] = {.count = 1, .reusable = true}, SHIFT(17),
  [249] = {.count = 1, .reusable = true}, SHIFT(91),
  [251] = {.count = 1, .reusable = true}, SHIFT(89),
  [253] = {.count = 1, .reusable = true}, SHIFT(44),
  [255] = {.count = 1, .reusable = true}, SHIFT(24),
  [257] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_type_keyword, 1),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(87),
  [265] = {.count = 1, .reusable = true}, SHIFT(11),
  [267] = {.count = 1, .reusable = true}, SHIFT(23),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [271] = {.count = 1, .reusable = true}, SHIFT(97),
  [273] = {.count = 1, .reusable = true}, SHIFT(98),
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
