#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 88
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  aux_sym_code_block_content_token1 = 9,
  anon_sym_data = 10,
  anon_sym_DATA = 11,
  anon_sym_attr = 12,
  anon_sym_ATTR = 13,
  anon_sym_use = 14,
  anon_sym_USE = 15,
  anon_sym_INH = 16,
  anon_sym_inh = 17,
  anon_sym_SYN = 18,
  anon_sym_syn = 19,
  anon_sym_CHN = 20,
  anon_sym_chn = 21,
  anon_sym_COLON = 22,
  anon_sym_COLON_COLON = 23,
  sym_source_file = 24,
  sym__elem = 25,
  sym_attr_definition = 26,
  sym_attr_declarations = 27,
  sym_old_attr_style = 28,
  sym_new_attr_style = 29,
  sym_inh_attr_declaration_new_style = 30,
  sym_syn_attr_declaration_new_style = 31,
  sym_chn_attr_declaration_new_style = 32,
  sym_inh_attr_declaration_old_style = 33,
  sym_syn_attr_declaration_old_style = 34,
  sym_use_operator = 35,
  sym_data_definition = 36,
  sym_data_alternatives = 37,
  sym_field = 38,
  sym_var_type_definitions = 39,
  sym_var_type_definition = 40,
  sym_type = 41,
  sym_varids = 42,
  sym_code_block = 43,
  sym_code_block_content = 44,
  sym_data_keyword = 45,
  sym_attr_keyword = 46,
  sym_use_keyword = 47,
  sym_inh_keyword = 48,
  sym_syn_keyword = 49,
  sym_chn_keyword = 50,
  sym_type_symbol = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_attr_definition_repeat1 = 53,
  aux_sym_attr_declarations_repeat1 = 54,
  aux_sym_old_attr_style_repeat1 = 55,
  aux_sym_old_attr_style_repeat2 = 56,
  aux_sym_data_definition_repeat1 = 57,
  aux_sym_data_alternatives_repeat1 = 58,
  aux_sym_var_type_definitions_repeat1 = 59,
  aux_sym_varids_repeat1 = 60,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_conid] = "conid",
  [sym_varid] = "varid",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_code_block_content_token1] = "code_block_content_token1",
  [anon_sym_data] = "data",
  [anon_sym_DATA] = "DATA",
  [anon_sym_attr] = "attr",
  [anon_sym_ATTR] = "ATTR",
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
  [sym_code_block_content] = "code_block_content",
  [sym_data_keyword] = "data_keyword",
  [sym_attr_keyword] = "attr_keyword",
  [sym_use_keyword] = "use_keyword",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_block_content_token1] = {
    .visible = false,
    .named = false,
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
  [sym_code_block_content] = {
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
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(47);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'I') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == 'H') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead == 'Y') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(69);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'A') ADVANCE(50);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'E') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'H') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'N') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'R') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'S') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'T') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == 'Y') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_conid);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(67);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'a') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 'r') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == 't') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_varid);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_varid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_code_block_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_code_block_content_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_attr);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_attr);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ATTR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_INH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_INH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_inh);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_syn);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CHN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CHN);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_chn);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 87:
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
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 64},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_conid] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_DATA] = ACTIONS(1),
    [anon_sym_attr] = ACTIONS(1),
    [anon_sym_ATTR] = ACTIONS(1),
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
    [sym_source_file] = STATE(84),
    [sym__elem] = STATE(15),
    [sym_attr_definition] = STATE(15),
    [sym_data_definition] = STATE(15),
    [sym_data_keyword] = STATE(83),
    [sym_attr_keyword] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
  },
  [2] = {
    [sym_attr_declarations] = STATE(36),
    [sym_old_attr_style] = STATE(35),
    [sym_new_attr_style] = STATE(3),
    [sym_inh_attr_declaration_new_style] = STATE(16),
    [sym_syn_attr_declaration_new_style] = STATE(16),
    [sym_chn_attr_declaration_new_style] = STATE(16),
    [sym_inh_keyword] = STATE(58),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(61),
    [aux_sym_attr_definition_repeat1] = STATE(20),
    [aux_sym_attr_declarations_repeat1] = STATE(3),
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
    [sym_new_attr_style] = STATE(4),
    [sym_inh_attr_declaration_new_style] = STATE(16),
    [sym_syn_attr_declaration_new_style] = STATE(16),
    [sym_chn_attr_declaration_new_style] = STATE(16),
    [sym_inh_keyword] = STATE(58),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(61),
    [aux_sym_attr_declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_DATA] = ACTIONS(25),
    [anon_sym_attr] = ACTIONS(25),
    [anon_sym_ATTR] = ACTIONS(25),
    [anon_sym_INH] = ACTIONS(15),
    [anon_sym_inh] = ACTIONS(15),
    [anon_sym_SYN] = ACTIONS(19),
    [anon_sym_syn] = ACTIONS(19),
    [anon_sym_CHN] = ACTIONS(23),
    [anon_sym_chn] = ACTIONS(23),
  },
  [4] = {
    [sym_new_attr_style] = STATE(4),
    [sym_inh_attr_declaration_new_style] = STATE(16),
    [sym_syn_attr_declaration_new_style] = STATE(16),
    [sym_chn_attr_declaration_new_style] = STATE(16),
    [sym_inh_keyword] = STATE(58),
    [sym_syn_keyword] = STATE(54),
    [sym_chn_keyword] = STATE(61),
    [aux_sym_attr_declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_DATA] = ACTIONS(27),
    [anon_sym_attr] = ACTIONS(27),
    [anon_sym_ATTR] = ACTIONS(27),
    [anon_sym_INH] = ACTIONS(29),
    [anon_sym_inh] = ACTIONS(29),
    [anon_sym_SYN] = ACTIONS(32),
    [anon_sym_syn] = ACTIONS(32),
    [anon_sym_CHN] = ACTIONS(35),
    [anon_sym_chn] = ACTIONS(35),
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
    [sym__elem] = STATE(11),
    [sym_attr_definition] = STATE(11),
    [sym_data_definition] = STATE(11),
    [sym_data_keyword] = STATE(83),
    [sym_attr_keyword] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_data] = ACTIONS(55),
    [anon_sym_DATA] = ACTIONS(55),
    [anon_sym_attr] = ACTIONS(58),
    [anon_sym_ATTR] = ACTIONS(58),
  },
  [12] = {
    [sym_field] = STATE(18),
    [sym_var_type_definition] = STATE(23),
    [aux_sym_data_alternatives_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [sym_conid] = ACTIONS(63),
    [sym_varid] = ACTIONS(65),
    [anon_sym_data] = ACTIONS(67),
    [anon_sym_DATA] = ACTIONS(67),
    [anon_sym_attr] = ACTIONS(67),
    [anon_sym_ATTR] = ACTIONS(67),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_data] = ACTIONS(69),
    [anon_sym_DATA] = ACTIONS(69),
    [anon_sym_attr] = ACTIONS(69),
    [anon_sym_ATTR] = ACTIONS(69),
    [anon_sym_INH] = ACTIONS(69),
    [anon_sym_inh] = ACTIONS(69),
    [anon_sym_SYN] = ACTIONS(69),
    [anon_sym_syn] = ACTIONS(69),
    [anon_sym_CHN] = ACTIONS(69),
    [anon_sym_chn] = ACTIONS(69),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_DATA] = ACTIONS(71),
    [anon_sym_attr] = ACTIONS(71),
    [anon_sym_ATTR] = ACTIONS(71),
    [anon_sym_INH] = ACTIONS(71),
    [anon_sym_inh] = ACTIONS(71),
    [anon_sym_SYN] = ACTIONS(71),
    [anon_sym_syn] = ACTIONS(71),
    [anon_sym_CHN] = ACTIONS(71),
    [anon_sym_chn] = ACTIONS(71),
  },
  [15] = {
    [sym__elem] = STATE(11),
    [sym_attr_definition] = STATE(11),
    [sym_data_definition] = STATE(11),
    [sym_data_keyword] = STATE(83),
    [sym_attr_keyword] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_DATA] = ACTIONS(5),
    [anon_sym_attr] = ACTIONS(7),
    [anon_sym_ATTR] = ACTIONS(7),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_DATA] = ACTIONS(75),
    [anon_sym_attr] = ACTIONS(75),
    [anon_sym_ATTR] = ACTIONS(75),
    [anon_sym_INH] = ACTIONS(75),
    [anon_sym_inh] = ACTIONS(75),
    [anon_sym_SYN] = ACTIONS(75),
    [anon_sym_syn] = ACTIONS(75),
    [anon_sym_CHN] = ACTIONS(75),
    [anon_sym_chn] = ACTIONS(75),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_data] = ACTIONS(77),
    [anon_sym_DATA] = ACTIONS(77),
    [anon_sym_attr] = ACTIONS(77),
    [anon_sym_ATTR] = ACTIONS(77),
    [anon_sym_INH] = ACTIONS(77),
    [anon_sym_inh] = ACTIONS(77),
    [anon_sym_SYN] = ACTIONS(77),
    [anon_sym_syn] = ACTIONS(77),
    [anon_sym_CHN] = ACTIONS(77),
    [anon_sym_chn] = ACTIONS(77),
  },
  [18] = {
    [sym_field] = STATE(18),
    [sym_var_type_definition] = STATE(23),
    [aux_sym_data_alternatives_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_conid] = ACTIONS(81),
    [sym_varid] = ACTIONS(84),
    [anon_sym_data] = ACTIONS(87),
    [anon_sym_DATA] = ACTIONS(87),
    [anon_sym_attr] = ACTIONS(87),
    [anon_sym_ATTR] = ACTIONS(87),
  },
  [19] = {
    [sym_field] = STATE(12),
    [sym_var_type_definition] = STATE(23),
    [aux_sym_data_alternatives_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_conid] = ACTIONS(63),
    [sym_varid] = ACTIONS(65),
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
    [sym_data_alternatives] = STATE(22),
    [aux_sym_data_definition_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(100),
    [anon_sym_DATA] = ACTIONS(100),
    [anon_sym_attr] = ACTIONS(100),
    [anon_sym_ATTR] = ACTIONS(100),
  },
  [22] = {
    [sym_data_alternatives] = STATE(26),
    [aux_sym_data_definition_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(104),
    [anon_sym_DATA] = ACTIONS(104),
    [anon_sym_attr] = ACTIONS(104),
    [anon_sym_ATTR] = ACTIONS(104),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [sym_conid] = ACTIONS(108),
    [sym_varid] = ACTIONS(108),
    [anon_sym_data] = ACTIONS(108),
    [anon_sym_DATA] = ACTIONS(108),
    [anon_sym_attr] = ACTIONS(108),
    [anon_sym_ATTR] = ACTIONS(108),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [sym_conid] = ACTIONS(110),
    [sym_varid] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_DATA] = ACTIONS(110),
    [anon_sym_attr] = ACTIONS(110),
    [anon_sym_ATTR] = ACTIONS(110),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_conid] = ACTIONS(112),
    [sym_varid] = ACTIONS(112),
    [anon_sym_data] = ACTIONS(112),
    [anon_sym_DATA] = ACTIONS(112),
    [anon_sym_attr] = ACTIONS(112),
    [anon_sym_ATTR] = ACTIONS(112),
  },
  [26] = {
    [sym_data_alternatives] = STATE(26),
    [aux_sym_data_definition_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_data] = ACTIONS(114),
    [anon_sym_DATA] = ACTIONS(114),
    [anon_sym_attr] = ACTIONS(114),
    [anon_sym_ATTR] = ACTIONS(114),
  },
  [27] = {
    [sym_use_operator] = STATE(60),
    [sym_use_keyword] = STATE(72),
    [sym_type_symbol] = STATE(68),
    [anon_sym_use] = ACTIONS(119),
    [anon_sym_USE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
  },
  [28] = {
    [aux_sym_varids_repeat1] = STATE(31),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_use] = ACTIONS(127),
    [anon_sym_USE] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_COLON_COLON] = ACTIONS(127),
  },
  [29] = {
    [aux_sym_varids_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_use] = ACTIONS(134),
    [anon_sym_USE] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_COLON_COLON] = ACTIONS(134),
  },
  [30] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(138),
    [sym_varid] = ACTIONS(140),
  },
  [31] = {
    [aux_sym_varids_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_use] = ACTIONS(143),
    [anon_sym_USE] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(143),
  },
  [32] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_PIPE] = ACTIONS(147),
    [sym_varid] = ACTIONS(149),
  },
  [33] = {
    [sym_syn_attr_declaration_old_style] = STATE(41),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(41),
    [anon_sym_PIPE] = ACTIONS(151),
    [sym_varid] = ACTIONS(149),
  },
  [34] = {
    [sym_inh_attr_declaration_old_style] = STATE(45),
    [sym_varids] = STATE(55),
    [aux_sym_old_attr_style_repeat1] = STATE(45),
    [anon_sym_PIPE] = ACTIONS(153),
    [sym_varid] = ACTIONS(149),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_DATA] = ACTIONS(25),
    [anon_sym_attr] = ACTIONS(25),
    [anon_sym_ATTR] = ACTIONS(25),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_data] = ACTIONS(155),
    [anon_sym_DATA] = ACTIONS(155),
    [anon_sym_attr] = ACTIONS(155),
    [anon_sym_ATTR] = ACTIONS(155),
  },
  [37] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_varid] = ACTIONS(149),
  },
  [38] = {
    [sym_syn_attr_declaration_old_style] = STATE(46),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(46),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_varid] = ACTIONS(149),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_data] = ACTIONS(159),
    [anon_sym_DATA] = ACTIONS(159),
    [anon_sym_attr] = ACTIONS(159),
    [anon_sym_ATTR] = ACTIONS(159),
  },
  [40] = {
    [sym_syn_attr_declaration_old_style] = STATE(49),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(49),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_varid] = ACTIONS(149),
  },
  [41] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_PIPE] = ACTIONS(163),
    [sym_varid] = ACTIONS(149),
  },
  [42] = {
    [sym_inh_attr_declaration_old_style] = STATE(34),
    [sym_varids] = STATE(55),
    [aux_sym_old_attr_style_repeat1] = STATE(34),
    [anon_sym_PIPE] = ACTIONS(165),
    [sym_varid] = ACTIONS(149),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_data] = ACTIONS(167),
    [anon_sym_DATA] = ACTIONS(167),
    [anon_sym_attr] = ACTIONS(167),
    [anon_sym_ATTR] = ACTIONS(167),
  },
  [44] = {
    [sym_syn_attr_declaration_old_style] = STATE(32),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(32),
    [anon_sym_PIPE] = ACTIONS(163),
    [sym_varid] = ACTIONS(149),
  },
  [45] = {
    [sym_inh_attr_declaration_old_style] = STATE(45),
    [sym_varids] = STATE(55),
    [aux_sym_old_attr_style_repeat1] = STATE(45),
    [anon_sym_PIPE] = ACTIONS(169),
    [sym_varid] = ACTIONS(171),
  },
  [46] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_RBRACK] = ACTIONS(174),
    [sym_varid] = ACTIONS(149),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_use] = ACTIONS(134),
    [anon_sym_USE] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_COLON_COLON] = ACTIONS(134),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_data] = ACTIONS(176),
    [anon_sym_DATA] = ACTIONS(176),
    [anon_sym_attr] = ACTIONS(176),
    [anon_sym_ATTR] = ACTIONS(176),
  },
  [49] = {
    [sym_syn_attr_declaration_old_style] = STATE(30),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(30),
    [anon_sym_RBRACK] = ACTIONS(178),
    [sym_varid] = ACTIONS(149),
  },
  [50] = {
    [sym_syn_attr_declaration_old_style] = STATE(37),
    [sym_varids] = STATE(27),
    [aux_sym_old_attr_style_repeat2] = STATE(37),
    [anon_sym_RBRACK] = ACTIONS(178),
    [sym_varid] = ACTIONS(149),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_data] = ACTIONS(180),
    [anon_sym_DATA] = ACTIONS(180),
    [anon_sym_attr] = ACTIONS(180),
    [anon_sym_ATTR] = ACTIONS(180),
  },
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_COLON_COLON] = ACTIONS(182),
  },
  [53] = {
    [sym_code_block] = STATE(76),
    [sym_code_block_content] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(186),
    [aux_sym_code_block_content_token1] = ACTIONS(188),
  },
  [54] = {
    [sym_var_type_definitions] = STATE(14),
    [sym_var_type_definition] = STATE(5),
    [sym_varid] = ACTIONS(190),
  },
  [55] = {
    [sym_type_symbol] = STATE(73),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
  },
  [56] = {
    [sym_type_symbol] = STATE(69),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
  },
  [57] = {
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_RBRACK] = ACTIONS(192),
    [sym_varid] = ACTIONS(192),
  },
  [58] = {
    [sym_var_type_definitions] = STATE(17),
    [sym_var_type_definition] = STATE(5),
    [sym_varid] = ACTIONS(190),
  },
  [59] = {
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym_varid] = ACTIONS(194),
  },
  [60] = {
    [sym_type_symbol] = STATE(71),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
  },
  [61] = {
    [sym_var_type_definitions] = STATE(13),
    [sym_var_type_definition] = STATE(5),
    [sym_varid] = ACTIONS(190),
  },
  [62] = {
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_varid] = ACTIONS(49),
  },
  [63] = {
    [sym_type_symbol] = STATE(65),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
  },
  [64] = {
    [sym_code_block] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(196),
  },
  [65] = {
    [sym_type] = STATE(9),
    [sym_conid] = ACTIONS(198),
  },
  [66] = {
    [sym_var_type_definition] = STATE(10),
    [sym_varid] = ACTIONS(190),
  },
  [67] = {
    [anon_sym_PIPE] = ACTIONS(200),
    [sym_varid] = ACTIONS(200),
  },
  [68] = {
    [sym_type] = STATE(59),
    [sym_conid] = ACTIONS(202),
  },
  [69] = {
    [sym_type] = STATE(25),
    [sym_conid] = ACTIONS(204),
  },
  [70] = {
    [aux_sym_attr_definition_repeat1] = STATE(2),
    [sym_conid] = ACTIONS(206),
  },
  [71] = {
    [sym_type] = STATE(57),
    [sym_conid] = ACTIONS(202),
  },
  [72] = {
    [sym_code_block] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(196),
  },
  [73] = {
    [sym_type] = STATE(67),
    [sym_conid] = ACTIONS(202),
  },
  [74] = {
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_COLON_COLON] = ACTIONS(210),
  },
  [75] = {
    [sym_conid] = ACTIONS(212),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(214),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(216),
  },
  [78] = {
    [anon_sym_LBRACE] = ACTIONS(218),
  },
  [79] = {
    [sym_varid] = ACTIONS(220),
  },
  [80] = {
    [sym_varid] = ACTIONS(222),
  },
  [81] = {
    [sym_conid] = ACTIONS(224),
  },
  [82] = {
    [sym_varid] = ACTIONS(226),
  },
  [83] = {
    [sym_conid] = ACTIONS(228),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(230),
  },
  [85] = {
    [sym_conid] = ACTIONS(232),
  },
  [86] = {
    [sym_varid] = ACTIONS(234),
  },
  [87] = {
    [sym_conid] = ACTIONS(236),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(87),
  [7] = {.count = 1, .reusable = true}, SHIFT(85),
  [9] = {.count = 1, .reusable = true}, SHIFT(42),
  [11] = {.count = 1, .reusable = false}, SHIFT(20),
  [13] = {.count = 1, .reusable = false}, SHIFT(80),
  [15] = {.count = 1, .reusable = true}, SHIFT(80),
  [17] = {.count = 1, .reusable = false}, SHIFT(79),
  [19] = {.count = 1, .reusable = true}, SHIFT(79),
  [21] = {.count = 1, .reusable = false}, SHIFT(82),
  [23] = {.count = 1, .reusable = true}, SHIFT(82),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_attr_declarations, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(80),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(79),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attr_declarations_repeat1, 2), SHIFT_REPEAT(82),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 1),
  [40] = {.count = 1, .reusable = true}, SHIFT(66),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_var_type_definitions_repeat1, 2), SHIFT_REPEAT(66),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definitions, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_var_type_definition, 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 3),
  [63] = {.count = 1, .reusable = false}, SHIFT(23),
  [65] = {.count = 1, .reusable = false}, SHIFT(56),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_chn_attr_declaration_new_style, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_new_style, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_new_attr_style, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_new_style, 2),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(23),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2), SHIFT_REPEAT(56),
  [87] = {.count = 1, .reusable = false}, REDUCE(aux_sym_data_alternatives_repeat1, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_data_alternatives, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_data_alternatives, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2), SHIFT_REPEAT(20),
  [98] = {.count = 1, .reusable = false}, REDUCE(aux_sym_attr_definition_repeat1, 2),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 2),
  [102] = {.count = 1, .reusable = true}, SHIFT(81),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_data_definition, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_field, 1),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_field, 1),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_var_type_definition, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(81),
  [119] = {.count = 1, .reusable = true}, SHIFT(78),
  [121] = {.count = 1, .reusable = false}, SHIFT(75),
  [123] = {.count = 1, .reusable = true}, SHIFT(75),
  [125] = {.count = 1, .reusable = true}, SHIFT(86),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 1),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2), SHIFT_REPEAT(86),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_varids_repeat1, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(aux_sym_varids_repeat1, 2),
  [138] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat2, 2), SHIFT_REPEAT(28),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_varids, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_varids, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(38),
  [149] = {.count = 1, .reusable = true}, SHIFT(28),
  [151] = {.count = 1, .reusable = true}, SHIFT(40),
  [153] = {.count = 1, .reusable = true}, SHIFT(44),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_attr_definition, 3),
  [157] = {.count = 1, .reusable = true}, SHIFT(39),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 6),
  [161] = {.count = 1, .reusable = true}, SHIFT(48),
  [163] = {.count = 1, .reusable = true}, SHIFT(50),
  [165] = {.count = 1, .reusable = true}, SHIFT(33),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 5),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_attr_style_repeat1, 2), SHIFT_REPEAT(28),
  [174] = {.count = 1, .reusable = true}, SHIFT(51),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 4),
  [178] = {.count = 1, .reusable = true}, SHIFT(43),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_old_attr_style, 7),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_code_block, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_code_block, 3),
  [186] = {.count = 1, .reusable = false}, SHIFT(53),
  [188] = {.count = 1, .reusable = true}, SHIFT(76),
  [190] = {.count = 1, .reusable = true}, SHIFT(63),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_syn_attr_declaration_old_style, 3),
  [196] = {.count = 1, .reusable = true}, SHIFT(53),
  [198] = {.count = 1, .reusable = true}, SHIFT(8),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_inh_attr_declaration_old_style, 3),
  [202] = {.count = 1, .reusable = true}, SHIFT(62),
  [204] = {.count = 1, .reusable = true}, SHIFT(24),
  [206] = {.count = 1, .reusable = true}, SHIFT(2),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_use_operator, 3),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_use_operator, 3),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_type_symbol, 1),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_code_block_content, 1),
  [216] = {.count = 1, .reusable = true}, SHIFT(52),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_use_keyword, 1),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_syn_keyword, 1),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_inh_keyword, 1),
  [224] = {.count = 1, .reusable = true}, SHIFT(19),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_chn_keyword, 1),
  [228] = {.count = 1, .reusable = true}, SHIFT(21),
  [230] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_attr_keyword, 1),
  [234] = {.count = 1, .reusable = true}, SHIFT(47),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_data_keyword, 1),
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
