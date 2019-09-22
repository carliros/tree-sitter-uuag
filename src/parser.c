#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 75
#define SYMBOL_COUNT 51
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
  aux_sym_old_attr_style_repeat1 = 45,
  aux_sym_old_attr_style_repeat2 = 46,
  aux_sym_data_definition_repeat1 = 47,
  aux_sym_data_alternatives_repeat1 = 48,
  aux_sym_var_type_definitions_repeat1 = 49,
  aux_sym_varids_repeat1 = 50,
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
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(53);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(38);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(51);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(47);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_attr);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
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
    [sym_source_file] = STATE(72),
    [sym__elem] = STATE(5),
    [sym_attr_definition] = STATE(5),
    [sym_data_definition] = STATE(5),
    [sym_data_keyword] = STATE(71),
    [sym_attr_keyword] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
  },
  [2] = {
    [sym_attr_declarations] = STATE(24),
    [sym_old_attr_style] = STATE(22),
    [sym_new_attr_style] = STATE(22),
    [sym_inh_attr_declaration_new_style] = STATE(25),
    [sym_syn_attr_declaration_new_style] = STATE(25),
    [sym_chn_attr_declaration_new_style] = STATE(25),
    [sym_inh_keyword] = STATE(55),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(53),
    [aux_sym_attr_definition_repeat1] = STATE(8),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_conid] = ACTIONS(11),
    [anon_sym_INH] = ACTIONS(13),
    [anon_sym_inh] = ACTIONS(15),
    [anon_sym_SYN] = ACTIONS(17),
    [anon_sym_syn] = ACTIONS(19),
    [anon_sym_CHN] = ACTIONS(21),
    [anon_sym_chn] = ACTIONS(23),
  },
  [3] = {
    [sym_field] = STATE(4),
    [sym_var_type_definition] = STATE(11),
    [aux_sym_data_alternatives_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [sym_conid] = ACTIONS(27),
    [sym_varid] = ACTIONS(29),
    [anon_sym_data] = ACTIONS(31),
    [anon_sym_DATA] = ACTIONS(31),
    [anon_sym_attr] = ACTIONS(31),
    [anon_sym_ATTR] = ACTIONS(31),
  },
  [4] = {
    [sym_field] = STATE(7),
    [sym_var_type_definition] = STATE(11),
    [aux_sym_data_alternatives_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [sym_conid] = ACTIONS(27),
    [sym_varid] = ACTIONS(29),
    [anon_sym_data] = ACTIONS(35),
    [anon_sym_DATA] = ACTIONS(35),
    [anon_sym_attr] = ACTIONS(35),
    [anon_sym_ATTR] = ACTIONS(35),
  },
  [5] = {
    [sym__elem] = STATE(6),
    [sym_attr_definition] = STATE(6),
    [sym_data_definition] = STATE(6),
    [sym_data_keyword] = STATE(71),
    [sym_attr_keyword] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
  },
  [6] = {
    [sym__elem] = STATE(6),
    [sym_attr_definition] = STATE(6),
    [sym_data_definition] = STATE(6),
    [sym_data_keyword] = STATE(71),
    [sym_attr_keyword] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_data] = ACTIONS(41),
    [anon_sym_DATA] = ACTIONS(41),
    [anon_sym_attr] = ACTIONS(44),
    [anon_sym_ATTR] = ACTIONS(44),
  },
  [7] = {
    [sym_field] = STATE(7),
    [sym_var_type_definition] = STATE(11),
    [aux_sym_data_alternatives_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_conid] = ACTIONS(49),
    [sym_varid] = ACTIONS(52),
    [anon_sym_data] = ACTIONS(55),
    [anon_sym_DATA] = ACTIONS(55),
    [anon_sym_attr] = ACTIONS(55),
    [anon_sym_ATTR] = ACTIONS(55),
  },
  [8] = {
    [aux_sym_attr_definition_repeat1] = STATE(8),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_conid] = ACTIONS(59),
    [anon_sym_INH] = ACTIONS(62),
    [anon_sym_inh] = ACTIONS(57),
    [anon_sym_SYN] = ACTIONS(62),
    [anon_sym_syn] = ACTIONS(57),
    [anon_sym_CHN] = ACTIONS(62),
    [anon_sym_chn] = ACTIONS(57),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [sym_conid] = ACTIONS(66),
    [sym_varid] = ACTIONS(66),
    [anon_sym_data] = ACTIONS(66),
    [anon_sym_DATA] = ACTIONS(66),
    [anon_sym_attr] = ACTIONS(66),
    [anon_sym_ATTR] = ACTIONS(66),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym_conid] = ACTIONS(70),
    [sym_varid] = ACTIONS(70),
    [anon_sym_data] = ACTIONS(70),
    [anon_sym_DATA] = ACTIONS(70),
    [anon_sym_attr] = ACTIONS(70),
    [anon_sym_ATTR] = ACTIONS(70),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_conid] = ACTIONS(74),
    [sym_varid] = ACTIONS(74),
    [anon_sym_data] = ACTIONS(74),
    [anon_sym_DATA] = ACTIONS(74),
    [anon_sym_attr] = ACTIONS(74),
    [anon_sym_ATTR] = ACTIONS(74),
  },
  [12] = {
    [sym_data_alternatives] = STATE(12),
    [aux_sym_data_definition_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_data] = ACTIONS(76),
    [anon_sym_DATA] = ACTIONS(76),
    [anon_sym_attr] = ACTIONS(76),
    [anon_sym_ATTR] = ACTIONS(76),
  },
  [13] = {
    [sym_data_alternatives] = STATE(14),
    [aux_sym_data_definition_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_data] = ACTIONS(81),
    [anon_sym_DATA] = ACTIONS(81),
    [anon_sym_attr] = ACTIONS(81),
    [anon_sym_ATTR] = ACTIONS(81),
  },
  [14] = {
    [sym_data_alternatives] = STATE(12),
    [aux_sym_data_definition_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_data] = ACTIONS(85),
    [anon_sym_DATA] = ACTIONS(85),
    [anon_sym_attr] = ACTIONS(85),
    [anon_sym_ATTR] = ACTIONS(85),
  },
  [15] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_data] = ACTIONS(87),
    [anon_sym_DATA] = ACTIONS(87),
    [anon_sym_attr] = ACTIONS(87),
    [anon_sym_ATTR] = ACTIONS(87),
  },
  [16] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_data] = ACTIONS(92),
    [anon_sym_DATA] = ACTIONS(92),
    [anon_sym_attr] = ACTIONS(92),
    [anon_sym_ATTR] = ACTIONS(92),
  },
  [17] = {
    [aux_sym_var_type_definitions_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_data] = ACTIONS(96),
    [anon_sym_DATA] = ACTIONS(96),
    [anon_sym_attr] = ACTIONS(96),
    [anon_sym_ATTR] = ACTIONS(96),
  },
  [18] = {
    [sym_syn_attr_declaration_old_style] = STATE(18),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(18),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [sym_varid] = ACTIONS(100),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_data] = ACTIONS(64),
    [anon_sym_DATA] = ACTIONS(64),
    [anon_sym_attr] = ACTIONS(64),
    [anon_sym_ATTR] = ACTIONS(64),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_data] = ACTIONS(68),
    [anon_sym_DATA] = ACTIONS(68),
    [anon_sym_attr] = ACTIONS(68),
    [anon_sym_ATTR] = ACTIONS(68),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_data] = ACTIONS(87),
    [anon_sym_DATA] = ACTIONS(87),
    [anon_sym_attr] = ACTIONS(87),
    [anon_sym_ATTR] = ACTIONS(87),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_data] = ACTIONS(103),
    [anon_sym_DATA] = ACTIONS(103),
    [anon_sym_attr] = ACTIONS(103),
    [anon_sym_ATTR] = ACTIONS(103),
  },
  [23] = {
    [sym_syn_attr_declaration_old_style] = STATE(43),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(43),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_varid] = ACTIONS(107),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_DATA] = ACTIONS(109),
    [anon_sym_attr] = ACTIONS(109),
    [anon_sym_ATTR] = ACTIONS(109),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_data] = ACTIONS(111),
    [anon_sym_DATA] = ACTIONS(111),
    [anon_sym_attr] = ACTIONS(111),
    [anon_sym_ATTR] = ACTIONS(111),
  },
  [26] = {
    [sym_inh_attr_declaration_old_style] = STATE(32),
    [sym_varids] = STATE(52),
    [aux_sym_old_attr_style_repeat1] = STATE(32),
    [anon_sym_PIPE] = ACTIONS(113),
    [sym_varid] = ACTIONS(107),
  },
  [27] = {
    [sym_syn_attr_declaration_old_style] = STATE(33),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_varid] = ACTIONS(107),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_data] = ACTIONS(117),
    [anon_sym_DATA] = ACTIONS(117),
    [anon_sym_attr] = ACTIONS(117),
    [anon_sym_ATTR] = ACTIONS(117),
  },
  [29] = {
    [sym_syn_attr_declaration_old_style] = STATE(39),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(39),
    [anon_sym_PIPE] = ACTIONS(119),
    [sym_varid] = ACTIONS(107),
  },
  [30] = {
    [sym_syn_attr_declaration_old_style] = STATE(18),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(18),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_varid] = ACTIONS(107),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_data] = ACTIONS(121),
    [anon_sym_DATA] = ACTIONS(121),
    [anon_sym_attr] = ACTIONS(121),
    [anon_sym_ATTR] = ACTIONS(121),
  },
  [32] = {
    [sym_inh_attr_declaration_old_style] = STATE(41),
    [sym_varids] = STATE(52),
    [aux_sym_old_attr_style_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(123),
    [sym_varid] = ACTIONS(107),
  },
  [33] = {
    [sym_syn_attr_declaration_old_style] = STATE(18),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(18),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_varid] = ACTIONS(107),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_data] = ACTIONS(125),
    [anon_sym_DATA] = ACTIONS(125),
    [anon_sym_attr] = ACTIONS(125),
    [anon_sym_ATTR] = ACTIONS(125),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_data] = ACTIONS(127),
    [anon_sym_DATA] = ACTIONS(127),
    [anon_sym_attr] = ACTIONS(127),
    [anon_sym_ATTR] = ACTIONS(127),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_data] = ACTIONS(129),
    [anon_sym_DATA] = ACTIONS(129),
    [anon_sym_attr] = ACTIONS(129),
    [anon_sym_ATTR] = ACTIONS(129),
  },
  [37] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_varid] = ACTIONS(107),
  },
  [38] = {
    [sym_syn_attr_declaration_old_style] = STATE(18),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(18),
    [anon_sym_PIPE] = ACTIONS(133),
    [sym_varid] = ACTIONS(107),
  },
  [39] = {
    [sym_syn_attr_declaration_old_style] = STATE(18),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(18),
    [anon_sym_PIPE] = ACTIONS(135),
    [sym_varid] = ACTIONS(107),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_data] = ACTIONS(137),
    [anon_sym_DATA] = ACTIONS(137),
    [anon_sym_attr] = ACTIONS(137),
    [anon_sym_ATTR] = ACTIONS(137),
  },
  [41] = {
    [sym_inh_attr_declaration_old_style] = STATE(41),
    [sym_varids] = STATE(52),
    [aux_sym_old_attr_style_repeat1] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_varid] = ACTIONS(141),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(144),
    [anon_sym_DATA] = ACTIONS(144),
    [anon_sym_attr] = ACTIONS(144),
    [anon_sym_ATTR] = ACTIONS(144),
  },
  [43] = {
    [sym_syn_attr_declaration_old_style] = STATE(18),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(18),
    [anon_sym_RBRACK] = ACTIONS(146),
    [sym_varid] = ACTIONS(107),
  },
  [44] = {
    [sym_syn_attr_declaration_old_style] = STATE(38),
    [sym_varids] = STATE(49),
    [aux_sym_old_attr_style_repeat2] = STATE(38),
    [anon_sym_PIPE] = ACTIONS(135),
    [sym_varid] = ACTIONS(107),
  },
  [45] = {
    [aux_sym_varids_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_COLON_COLON] = ACTIONS(152),
  },
  [46] = {
    [aux_sym_varids_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_COLON_COLON] = ACTIONS(156),
  },
  [47] = {
    [aux_sym_varids_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(163),
  },
  [48] = {
    [sym_type_symbol] = STATE(64),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(167),
  },
  [49] = {
    [sym_type_symbol] = STATE(60),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(167),
  },
  [50] = {
    [sym_type_symbol] = STATE(62),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(167),
  },
  [51] = {
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_varid] = ACTIONS(169),
  },
  [52] = {
    [sym_type_symbol] = STATE(63),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(167),
  },
  [53] = {
    [sym_var_type_definitions] = STATE(36),
    [sym_var_type_definition] = STATE(17),
    [sym_varid] = ACTIONS(171),
  },
  [54] = {
    [sym_var_type_definitions] = STATE(35),
    [sym_var_type_definition] = STATE(17),
    [sym_varid] = ACTIONS(171),
  },
  [55] = {
    [sym_var_type_definitions] = STATE(34),
    [sym_var_type_definition] = STATE(17),
    [sym_varid] = ACTIONS(171),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(163),
  },
  [57] = {
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [sym_varid] = ACTIONS(64),
  },
  [58] = {
    [aux_sym_attr_definition_repeat1] = STATE(2),
    [sym_conid] = ACTIONS(173),
  },
  [59] = {
    [anon_sym_PIPE] = ACTIONS(175),
    [sym_varid] = ACTIONS(175),
  },
  [60] = {
    [sym_type] = STATE(51),
    [sym_conid] = ACTIONS(177),
  },
  [61] = {
    [sym_var_type_definition] = STATE(21),
    [sym_varid] = ACTIONS(171),
  },
  [62] = {
    [sym_type] = STATE(20),
    [sym_conid] = ACTIONS(179),
  },
  [63] = {
    [sym_type] = STATE(59),
    [sym_conid] = ACTIONS(177),
  },
  [64] = {
    [sym_type] = STATE(10),
    [sym_conid] = ACTIONS(181),
  },
  [65] = {
    [sym_varid] = ACTIONS(183),
  },
  [66] = {
    [sym_conid] = ACTIONS(185),
  },
  [67] = {
    [sym_varid] = ACTIONS(187),
  },
  [68] = {
    [sym_varid] = ACTIONS(189),
  },
  [69] = {
    [sym_varid] = ACTIONS(191),
  },
  [70] = {
    [sym_conid] = ACTIONS(193),
  },
  [71] = {
    [sym_conid] = ACTIONS(195),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(197),
  },
  [73] = {
    [sym_conid] = ACTIONS(199),
  },
  [74] = {
    [sym_conid] = ACTIONS(201),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(70),
  [7] = {.count = 1, .reusable = true}, SHIFT(73),
  [9] = {.count = 1, .reusable = true}, SHIFT(26),
  [11] = {.count = 1, .reusable = false}, SHIFT(8),
  [13] = {.count = 1, .reusable = false}, SHIFT(68),
  [15] = {.count = 1, .reusable = true}, SHIFT(68),
  [17] = {.count = 1, .reusable = false}, SHIFT(69),
  [19] = {.count = 1, .reusable = true}, SHIFT(69),
  [21] = {.count = 1, .reusable = false}, SHIFT(67),
  [23] = {.count = 1, .reusable = true}, SHIFT(67),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(48),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(48),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(66),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(66),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(61),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [94] = {.count = 1, .reusable = true}, SHIFT(61),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(46),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(40),
  [107] = {.count = 1, .reusable = true}, SHIFT(46),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(29),
  [115] = {.count = 1, .reusable = true}, SHIFT(28),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [119] = {.count = 1, .reusable = true}, SHIFT(37),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [123] = {.count = 1, .reusable = true}, SHIFT(44),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(31),
  [133] = {.count = 1, .reusable = true}, SHIFT(23),
  [135] = {.count = 1, .reusable = true}, SHIFT(27),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(46),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [146] = {.count = 1, .reusable = true}, SHIFT(42),
  [148] = {.count = 1, .reusable = true}, SHIFT(65),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(65),
  [161] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [165] = {.count = 1, .reusable = false}, SHIFT(74),
  [167] = {.count = 1, .reusable = true}, SHIFT(74),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [171] = {.count = 1, .reusable = true}, SHIFT(50),
  [173] = {.count = 1, .reusable = true}, SHIFT(2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [177] = {.count = 1, .reusable = true}, SHIFT(57),
  [179] = {.count = 1, .reusable = true}, SHIFT(19),
  [181] = {.count = 1, .reusable = true}, SHIFT(9),
  [183] = {.count = 1, .reusable = true}, SHIFT(56),
  [185] = {.count = 1, .reusable = true}, SHIFT(3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(13),
  [197] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
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
