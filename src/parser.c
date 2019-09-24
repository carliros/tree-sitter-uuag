#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 77
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_LBRACK = 1,
  anon_sym_PIPE = 2,
  anon_sym_RBRACK = 3,
  anon_sym_COMMA = 4,
  sym_conid = 5,
  sym_varid = 6,
  anon_sym_data = 7,
  anon_sym_DATA = 8,
  anon_sym_attr = 9,
  anon_sym_ATTR = 10,
  anon_sym_INH = 11,
  anon_sym_inh = 12,
  anon_sym_SYN = 13,
  anon_sym_syn = 14,
  anon_sym_CHN = 15,
  anon_sym_chn = 16,
  anon_sym_COLON = 17,
  anon_sym_COLON_COLON = 18,
  sym_source_file = 19,
  sym__elem = 20,
  sym_attr_definition = 21,
  sym_attr_declarations = 22,
  sym_old_attr_style = 23,
  sym_new_attr_style = 24,
  sym_inh_attr_declaration_new_style = 25,
  sym_syn_attr_declaration_new_style = 26,
  sym_chn_attr_declaration_new_style = 27,
  sym_inh_attr_declaration_old_style = 28,
  sym_syn_attr_declaration_old_style = 29,
  sym_data_definition = 30,
  sym_data_alternatives = 31,
  sym_field = 32,
  sym_var_type_definitions = 33,
  sym_var_type_definition = 34,
  sym_type = 35,
  sym_varids = 36,
  sym_data_keyword = 37,
  sym_attr_keyword = 38,
  sym_inh_keyword = 39,
  sym_syn_keyword = 40,
  sym_chn_keyword = 41,
  sym_type_symbol = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_attr_definition_repeat1 = 44,
  aux_sym_attr_declarations_repeat1 = 45,
  aux_sym_old_attr_style_repeat1 = 46,
  aux_sym_old_attr_style_repeat2 = 47,
  aux_sym_data_definition_repeat1 = 48,
  aux_sym_data_alternatives_repeat1 = 49,
  aux_sym_var_type_definitions_repeat1 = 50,
  aux_sym_varids_repeat1 = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_conid] = "conid",
  [sym_varid] = "varid",
  [anon_sym_data] = "data",
  [anon_sym_DATA] = "DATA",
  [anon_sym_attr] = "attr",
  [anon_sym_ATTR] = "ATTR",
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
  [sym_attr_definition] = "attr_definition",
  [sym_attr_declarations] = "attr_declarations",
  [sym_old_attr_style] = "old_attr_style",
  [sym_new_attr_style] = "new_attr_style",
  [sym_inh_attr_declaration_new_style] = "inh_attr_declaration_new_style",
  [sym_syn_attr_declaration_new_style] = "syn_attr_declaration_new_style",
  [sym_chn_attr_declaration_new_style] = "chn_attr_declaration_new_style",
  [sym_inh_attr_declaration_old_style] = "inh_attr_declaration_old_style",
  [sym_syn_attr_declaration_old_style] = "syn_attr_declaration_old_style",
  [sym_data_definition] = "data_definition",
  [sym_data_alternatives] = "data_alternatives",
  [sym_field] = "field",
  [sym_var_type_definitions] = "var_type_definitions",
  [sym_var_type_definition] = "var_type_definition",
  [sym_type] = "type",
  [sym_varids] = "varids",
  [sym_data_keyword] = "data_keyword",
  [sym_attr_keyword] = "attr_keyword",
  [sym_inh_keyword] = "inh_keyword",
  [sym_syn_keyword] = "syn_keyword",
  [sym_chn_keyword] = "chn_keyword",
  [sym_type_symbol] = "type_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_data_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_keyword] = {
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
      if (lookahead == 0) ADVANCE(29);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(45);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(29);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'I') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(29);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(45);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == 'Y') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(59);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(44);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(57);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(53);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_attr);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 74:
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
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_conid] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_DATA] = ACTIONS(1),
    [anon_sym_attr] = ACTIONS(1),
    [anon_sym_ATTR] = ACTIONS(1),
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
    [sym_source_file] = STATE(74),
    [sym__elem] = STATE(18),
    [sym_attr_definition] = STATE(18),
    [sym_data_definition] = STATE(18),
    [sym_data_keyword] = STATE(73),
    [sym_attr_keyword] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
  },
  [2] = {
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(16),
    [sym_syn_attr_declaration_new_style] = STATE(16),
    [sym_chn_attr_declaration_new_style] = STATE(16),
    [sym_inh_keyword] = STATE(53),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(51),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(9),
    [anon_sym_DATA] = ACTIONS(9),
    [anon_sym_attr] = ACTIONS(9),
    [anon_sym_ATTR] = ACTIONS(9),
    [anon_sym_INH] = ACTIONS(11),
    [anon_sym_inh] = ACTIONS(11),
    [anon_sym_SYN] = ACTIONS(13),
    [anon_sym_syn] = ACTIONS(13),
    [anon_sym_CHN] = ACTIONS(15),
    [anon_sym_chn] = ACTIONS(15),
  },
  [3] = {
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(16),
    [sym_syn_attr_declaration_new_style] = STATE(16),
    [sym_chn_attr_declaration_new_style] = STATE(16),
    [sym_inh_keyword] = STATE(53),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(51),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_DATA] = ACTIONS(17),
    [anon_sym_attr] = ACTIONS(17),
    [anon_sym_ATTR] = ACTIONS(17),
    [anon_sym_INH] = ACTIONS(19),
    [anon_sym_inh] = ACTIONS(19),
    [anon_sym_SYN] = ACTIONS(22),
    [anon_sym_syn] = ACTIONS(22),
    [anon_sym_CHN] = ACTIONS(25),
    [anon_sym_chn] = ACTIONS(25),
  },
  [4] = {
    [sym_attr_declarations] = STATE(43),
    [sym_old_attr_style] = STATE(28),
    [sym_new_attr_style] = STATE(2),
    [sym_inh_attr_declaration_new_style] = STATE(16),
    [sym_syn_attr_declaration_new_style] = STATE(16),
    [sym_chn_attr_declaration_new_style] = STATE(16),
    [sym_inh_keyword] = STATE(53),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(51),
    [aux_sym_attr_definition_repeat1] = STATE(20),
    [aux_sym_attr_declarations_repeat1] = STATE(2),
    [anon_sym_LBRACK] = ACTIONS(28),
    [sym_conid] = ACTIONS(30),
    [anon_sym_INH] = ACTIONS(32),
    [anon_sym_inh] = ACTIONS(11),
    [anon_sym_SYN] = ACTIONS(34),
    [anon_sym_syn] = ACTIONS(13),
    [anon_sym_CHN] = ACTIONS(36),
    [anon_sym_chn] = ACTIONS(15),
  },
  [5] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(38),
    [anon_sym_DATA] = ACTIONS(38),
    [anon_sym_attr] = ACTIONS(38),
    [anon_sym_ATTR] = ACTIONS(38),
    [anon_sym_INH] = ACTIONS(38),
    [anon_sym_inh] = ACTIONS(38),
    [anon_sym_SYN] = ACTIONS(38),
    [anon_sym_syn] = ACTIONS(38),
    [anon_sym_CHN] = ACTIONS(38),
    [anon_sym_chn] = ACTIONS(38),
  },
  [6] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_data] = ACTIONS(42),
    [anon_sym_DATA] = ACTIONS(42),
    [anon_sym_attr] = ACTIONS(42),
    [anon_sym_ATTR] = ACTIONS(42),
    [anon_sym_INH] = ACTIONS(42),
    [anon_sym_inh] = ACTIONS(42),
    [anon_sym_SYN] = ACTIONS(42),
    [anon_sym_syn] = ACTIONS(42),
    [anon_sym_CHN] = ACTIONS(42),
    [anon_sym_chn] = ACTIONS(42),
  },
  [7] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(47),
    [anon_sym_DATA] = ACTIONS(47),
    [anon_sym_attr] = ACTIONS(47),
    [anon_sym_ATTR] = ACTIONS(47),
    [anon_sym_INH] = ACTIONS(47),
    [anon_sym_inh] = ACTIONS(47),
    [anon_sym_SYN] = ACTIONS(47),
    [anon_sym_syn] = ACTIONS(47),
    [anon_sym_CHN] = ACTIONS(47),
    [anon_sym_chn] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_data] = ACTIONS(49),
    [anon_sym_DATA] = ACTIONS(49),
    [anon_sym_attr] = ACTIONS(49),
    [anon_sym_ATTR] = ACTIONS(49),
    [anon_sym_INH] = ACTIONS(49),
    [anon_sym_inh] = ACTIONS(49),
    [anon_sym_SYN] = ACTIONS(49),
    [anon_sym_syn] = ACTIONS(49),
    [anon_sym_CHN] = ACTIONS(49),
    [anon_sym_chn] = ACTIONS(49),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_data] = ACTIONS(51),
    [anon_sym_DATA] = ACTIONS(51),
    [anon_sym_attr] = ACTIONS(51),
    [anon_sym_ATTR] = ACTIONS(51),
    [anon_sym_INH] = ACTIONS(51),
    [anon_sym_inh] = ACTIONS(51),
    [anon_sym_SYN] = ACTIONS(51),
    [anon_sym_syn] = ACTIONS(51),
    [anon_sym_CHN] = ACTIONS(51),
    [anon_sym_chn] = ACTIONS(51),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(42),
    [anon_sym_DATA] = ACTIONS(42),
    [anon_sym_attr] = ACTIONS(42),
    [anon_sym_ATTR] = ACTIONS(42),
    [anon_sym_INH] = ACTIONS(42),
    [anon_sym_inh] = ACTIONS(42),
    [anon_sym_SYN] = ACTIONS(42),
    [anon_sym_syn] = ACTIONS(42),
    [anon_sym_CHN] = ACTIONS(42),
    [anon_sym_chn] = ACTIONS(42),
  },
  [11] = {
    [sym_field] = STATE(11),
    [sym_var_type_definition] = STATE(24),
    [aux_sym_data_alternatives_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [sym_conid] = ACTIONS(55),
    [sym_varid] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(61),
    [anon_sym_DATA] = ACTIONS(61),
    [anon_sym_attr] = ACTIONS(61),
    [anon_sym_ATTR] = ACTIONS(61),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_data] = ACTIONS(63),
    [anon_sym_DATA] = ACTIONS(63),
    [anon_sym_attr] = ACTIONS(63),
    [anon_sym_ATTR] = ACTIONS(63),
    [anon_sym_INH] = ACTIONS(63),
    [anon_sym_inh] = ACTIONS(63),
    [anon_sym_SYN] = ACTIONS(63),
    [anon_sym_syn] = ACTIONS(63),
    [anon_sym_CHN] = ACTIONS(63),
    [anon_sym_chn] = ACTIONS(63),
  },
  [13] = {
    [sym_field] = STATE(11),
    [sym_var_type_definition] = STATE(24),
    [aux_sym_data_alternatives_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_conid] = ACTIONS(67),
    [sym_varid] = ACTIONS(69),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_DATA] = ACTIONS(71),
    [anon_sym_attr] = ACTIONS(71),
    [anon_sym_ATTR] = ACTIONS(71),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_data] = ACTIONS(73),
    [anon_sym_DATA] = ACTIONS(73),
    [anon_sym_attr] = ACTIONS(73),
    [anon_sym_ATTR] = ACTIONS(73),
    [anon_sym_INH] = ACTIONS(73),
    [anon_sym_inh] = ACTIONS(73),
    [anon_sym_SYN] = ACTIONS(73),
    [anon_sym_syn] = ACTIONS(73),
    [anon_sym_CHN] = ACTIONS(73),
    [anon_sym_chn] = ACTIONS(73),
  },
  [15] = {
    [sym__elem] = STATE(15),
    [sym_attr_definition] = STATE(15),
    [sym_data_definition] = STATE(15),
    [sym_data_keyword] = STATE(73),
    [sym_attr_keyword] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(77),
    [anon_sym_DATA] = ACTIONS(77),
    [anon_sym_attr] = ACTIONS(80),
    [anon_sym_ATTR] = ACTIONS(80),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_data] = ACTIONS(83),
    [anon_sym_DATA] = ACTIONS(83),
    [anon_sym_attr] = ACTIONS(83),
    [anon_sym_ATTR] = ACTIONS(83),
    [anon_sym_INH] = ACTIONS(83),
    [anon_sym_inh] = ACTIONS(83),
    [anon_sym_SYN] = ACTIONS(83),
    [anon_sym_syn] = ACTIONS(83),
    [anon_sym_CHN] = ACTIONS(83),
    [anon_sym_chn] = ACTIONS(83),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_data] = ACTIONS(85),
    [anon_sym_DATA] = ACTIONS(85),
    [anon_sym_attr] = ACTIONS(85),
    [anon_sym_ATTR] = ACTIONS(85),
    [anon_sym_INH] = ACTIONS(85),
    [anon_sym_inh] = ACTIONS(85),
    [anon_sym_SYN] = ACTIONS(85),
    [anon_sym_syn] = ACTIONS(85),
    [anon_sym_CHN] = ACTIONS(85),
    [anon_sym_chn] = ACTIONS(85),
  },
  [18] = {
    [sym__elem] = STATE(15),
    [sym_attr_definition] = STATE(15),
    [sym_data_definition] = STATE(15),
    [sym_data_keyword] = STATE(73),
    [sym_attr_keyword] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
  },
  [19] = {
    [sym_field] = STATE(13),
    [sym_var_type_definition] = STATE(24),
    [aux_sym_data_alternatives_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_conid] = ACTIONS(67),
    [sym_varid] = ACTIONS(69),
    [anon_sym_data] = ACTIONS(91),
    [anon_sym_DATA] = ACTIONS(91),
    [anon_sym_attr] = ACTIONS(91),
    [anon_sym_ATTR] = ACTIONS(91),
  },
  [20] = {
    [aux_sym_attr_definition_repeat1] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym_conid] = ACTIONS(95),
    [anon_sym_INH] = ACTIONS(98),
    [anon_sym_inh] = ACTIONS(93),
    [anon_sym_SYN] = ACTIONS(98),
    [anon_sym_syn] = ACTIONS(93),
    [anon_sym_CHN] = ACTIONS(98),
    [anon_sym_chn] = ACTIONS(93),
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
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_conid] = ACTIONS(104),
    [sym_varid] = ACTIONS(104),
    [anon_sym_data] = ACTIONS(104),
    [anon_sym_DATA] = ACTIONS(104),
    [anon_sym_attr] = ACTIONS(104),
    [anon_sym_ATTR] = ACTIONS(104),
  },
  [23] = {
    [sym_data_alternatives] = STATE(21),
    [aux_sym_data_definition_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(106),
    [anon_sym_DATA] = ACTIONS(106),
    [anon_sym_attr] = ACTIONS(106),
    [anon_sym_ATTR] = ACTIONS(106),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [sym_conid] = ACTIONS(110),
    [sym_varid] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_DATA] = ACTIONS(110),
    [anon_sym_attr] = ACTIONS(110),
    [anon_sym_ATTR] = ACTIONS(110),
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
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [sym_conid] = ACTIONS(117),
    [sym_varid] = ACTIONS(117),
    [anon_sym_data] = ACTIONS(117),
    [anon_sym_DATA] = ACTIONS(117),
    [anon_sym_attr] = ACTIONS(117),
    [anon_sym_ATTR] = ACTIONS(117),
  },
  [27] = {
    [sym_syn_attr_declaration_old_style] = STATE(27),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_varid] = ACTIONS(121),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(9),
    [anon_sym_DATA] = ACTIONS(9),
    [anon_sym_attr] = ACTIONS(9),
    [anon_sym_ATTR] = ACTIONS(9),
  },
  [29] = {
    [sym_syn_attr_declaration_old_style] = STATE(27),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(27),
    [anon_sym_RBRACK] = ACTIONS(124),
    [sym_varid] = ACTIONS(126),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_data] = ACTIONS(128),
    [anon_sym_DATA] = ACTIONS(128),
    [anon_sym_attr] = ACTIONS(128),
    [anon_sym_ATTR] = ACTIONS(128),
  },
  [31] = {
    [sym_syn_attr_declaration_old_style] = STATE(27),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(27),
    [anon_sym_RBRACK] = ACTIONS(130),
    [sym_varid] = ACTIONS(126),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_DATA] = ACTIONS(132),
    [anon_sym_attr] = ACTIONS(132),
    [anon_sym_ATTR] = ACTIONS(132),
  },
  [33] = {
    [sym_syn_attr_declaration_old_style] = STATE(41),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(134),
    [sym_varid] = ACTIONS(126),
  },
  [34] = {
    [sym_syn_attr_declaration_old_style] = STATE(31),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(31),
    [anon_sym_RBRACK] = ACTIONS(136),
    [sym_varid] = ACTIONS(126),
  },
  [35] = {
    [sym_syn_attr_declaration_old_style] = STATE(27),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(27),
    [anon_sym_RBRACK] = ACTIONS(136),
    [sym_varid] = ACTIONS(126),
  },
  [36] = {
    [sym_inh_attr_declaration_old_style] = STATE(45),
    [sym_varids] = STATE(55),
    [aux_sym_old_attr_style_repeat1] = STATE(45),
    [anon_sym_PIPE] = ACTIONS(138),
    [sym_varid] = ACTIONS(126),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(140),
    [anon_sym_DATA] = ACTIONS(140),
    [anon_sym_attr] = ACTIONS(140),
    [anon_sym_ATTR] = ACTIONS(140),
  },
  [38] = {
    [sym_inh_attr_declaration_old_style] = STATE(36),
    [sym_varids] = STATE(55),
    [aux_sym_old_attr_style_repeat1] = STATE(36),
    [anon_sym_PIPE] = ACTIONS(142),
    [sym_varid] = ACTIONS(126),
  },
  [39] = {
    [sym_syn_attr_declaration_old_style] = STATE(29),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_varid] = ACTIONS(126),
  },
  [40] = {
    [sym_syn_attr_declaration_old_style] = STATE(27),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(146),
    [sym_varid] = ACTIONS(126),
  },
  [41] = {
    [sym_syn_attr_declaration_old_style] = STATE(27),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(27),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_varid] = ACTIONS(126),
  },
  [42] = {
    [sym_syn_attr_declaration_old_style] = STATE(35),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(124),
    [sym_varid] = ACTIONS(126),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(150),
    [anon_sym_DATA] = ACTIONS(150),
    [anon_sym_attr] = ACTIONS(150),
    [anon_sym_ATTR] = ACTIONS(150),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_DATA] = ACTIONS(152),
    [anon_sym_attr] = ACTIONS(152),
    [anon_sym_ATTR] = ACTIONS(152),
  },
  [45] = {
    [sym_inh_attr_declaration_old_style] = STATE(45),
    [sym_varids] = STATE(55),
    [aux_sym_old_attr_style_repeat1] = STATE(45),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym_varid] = ACTIONS(156),
  },
  [46] = {
    [sym_syn_attr_declaration_old_style] = STATE(40),
    [sym_varids] = STATE(50),
    [aux_sym_old_attr_style_repeat2] = STATE(40),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_varid] = ACTIONS(126),
  },
  [47] = {
    [aux_sym_varids_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(163),
  },
  [48] = {
    [aux_sym_varids_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(167),
  },
  [49] = {
    [aux_sym_varids_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_COLON_COLON] = ACTIONS(174),
  },
  [50] = {
    [sym_type_symbol] = STATE(65),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_COLON_COLON] = ACTIONS(178),
  },
  [51] = {
    [sym_var_type_definitions] = STATE(14),
    [sym_var_type_definition] = STATE(5),
    [sym_varid] = ACTIONS(180),
  },
  [52] = {
    [sym_type_symbol] = STATE(66),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_COLON_COLON] = ACTIONS(178),
  },
  [53] = {
    [sym_var_type_definitions] = STATE(17),
    [sym_var_type_definition] = STATE(5),
    [sym_varid] = ACTIONS(180),
  },
  [54] = {
    [sym_var_type_definitions] = STATE(12),
    [sym_var_type_definition] = STATE(5),
    [sym_varid] = ACTIONS(180),
  },
  [55] = {
    [sym_type_symbol] = STATE(61),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_COLON_COLON] = ACTIONS(178),
  },
  [56] = {
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [sym_varid] = ACTIONS(182),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_COLON_COLON] = ACTIONS(174),
  },
  [58] = {
    [sym_type_symbol] = STATE(63),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_COLON_COLON] = ACTIONS(178),
  },
  [59] = {
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_varid] = ACTIONS(51),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(184),
    [sym_varid] = ACTIONS(184),
  },
  [61] = {
    [sym_type] = STATE(60),
    [sym_conid] = ACTIONS(186),
  },
  [62] = {
    [aux_sym_attr_definition_repeat1] = STATE(4),
    [sym_conid] = ACTIONS(188),
  },
  [63] = {
    [sym_type] = STATE(8),
    [sym_conid] = ACTIONS(190),
  },
  [64] = {
    [sym_var_type_definition] = STATE(10),
    [sym_varid] = ACTIONS(180),
  },
  [65] = {
    [sym_type] = STATE(56),
    [sym_conid] = ACTIONS(186),
  },
  [66] = {
    [sym_type] = STATE(26),
    [sym_conid] = ACTIONS(192),
  },
  [67] = {
    [sym_conid] = ACTIONS(194),
  },
  [68] = {
    [sym_conid] = ACTIONS(196),
  },
  [69] = {
    [sym_varid] = ACTIONS(198),
  },
  [70] = {
    [sym_varid] = ACTIONS(200),
  },
  [71] = {
    [sym_varid] = ACTIONS(202),
  },
  [72] = {
    [sym_conid] = ACTIONS(204),
  },
  [73] = {
    [sym_conid] = ACTIONS(206),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(208),
  },
  [75] = {
    [sym_conid] = ACTIONS(210),
  },
  [76] = {
    [sym_varid] = ACTIONS(212),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(67),
  [7] = {.count = 1, .reusable = true}, SHIFT(75),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [11] = {.count = 1, .reusable = true}, SHIFT(69),
  [13] = {.count = 1, .reusable = true}, SHIFT(76),
  [15] = {.count = 1, .reusable = true}, SHIFT(71),
  [17] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(69),
  [22] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(76),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(71),
  [28] = {.count = 1, .reusable = true}, SHIFT(38),
  [30] = {.count = 1, .reusable = false}, SHIFT(20),
  [32] = {.count = 1, .reusable = false}, SHIFT(69),
  [34] = {.count = 1, .reusable = false}, SHIFT(76),
  [36] = {.count = 1, .reusable = false}, SHIFT(71),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [40] = {.count = 1, .reusable = true}, SHIFT(64),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(64),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(24),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(52),
  [61] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [67] = {.count = 1, .reusable = false}, SHIFT(24),
  [69] = {.count = 1, .reusable = false}, SHIFT(52),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2), SHIFT_REPEAT(20),
  [98] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [102] = {.count = 1, .reusable = true}, SHIFT(68),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(68),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(48),
  [124] = {.count = 1, .reusable = true}, SHIFT(37),
  [126] = {.count = 1, .reusable = true}, SHIFT(48),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [130] = {.count = 1, .reusable = true}, SHIFT(30),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [134] = {.count = 1, .reusable = true}, SHIFT(39),
  [136] = {.count = 1, .reusable = true}, SHIFT(32),
  [138] = {.count = 1, .reusable = true}, SHIFT(46),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [142] = {.count = 1, .reusable = true}, SHIFT(33),
  [144] = {.count = 1, .reusable = true}, SHIFT(44),
  [146] = {.count = 1, .reusable = true}, SHIFT(34),
  [148] = {.count = 1, .reusable = true}, SHIFT(42),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [154] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(48),
  [159] = {.count = 1, .reusable = true}, SHIFT(70),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(70),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [176] = {.count = 1, .reusable = false}, SHIFT(72),
  [178] = {.count = 1, .reusable = true}, SHIFT(72),
  [180] = {.count = 1, .reusable = true}, SHIFT(58),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(59),
  [188] = {.count = 1, .reusable = true}, SHIFT(4),
  [190] = {.count = 1, .reusable = true}, SHIFT(9),
  [192] = {.count = 1, .reusable = true}, SHIFT(22),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [196] = {.count = 1, .reusable = true}, SHIFT(19),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [200] = {.count = 1, .reusable = true}, SHIFT(57),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [206] = {.count = 1, .reusable = true}, SHIFT(23),
  [208] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
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
