#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cassert>

namespace {

using std::vector;

enum TokenType {
  LAYOUT_OPEN_BRACE,
  LAYOUT_LINE_CONTENT,
  LAYOUT_CLOSE_BRACE,
};

struct Scanner {
  Scanner() {
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    buffer[i++] = queued_close_brace_count;

    vector<uint16_t>::iterator
      iter = indent_length_stack.begin(),
      end = indent_length_stack.end();

    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    queued_close_brace_count = 0;
    indent_length_stack.clear();

    if (length > 0) {
      size_t i = 0;
      queued_close_brace_count = buffer[i++];
      while (i < length) indent_length_stack.push_back(buffer[i++]);
    }
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool isolated_sequence(TSLexer *lexer, const char *sequence) {
    for (const char *c = sequence; *c; c++) {
      if (lexer->lookahead == *c) {
        advance(lexer);
      } else {
        return false;
      }
    }

    return lexer->lookahead == 0 || iswspace(lexer->lookahead);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[LAYOUT_CLOSE_BRACE] && queued_close_brace_count > 0) {
      queued_close_brace_count--;
      lexer->result_symbol = LAYOUT_CLOSE_BRACE;
      return true;
    }

    if (valid_symbols[LAYOUT_OPEN_BRACE]) {
      lexer->mark_end(lexer);

      while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
      }

      uint32_t column = lexer->get_column(lexer);

      // if (lexer->lookahead == '{') {
      //   lexer->advance(lexer, true);
      //   if (lexer->lookahead != '-') {
      //     return false;
      //   }
      // }

      if (indent_length_stack.size() == 1 && column == indent_length_stack.back()) {
        queued_close_brace_count++;
      } else {
        indent_length_stack.push_back(column);
      }
      lexer->result_symbol = LAYOUT_OPEN_BRACE;
      return true;
    }

    if (valid_symbols[LAYOUT_LINE_CONTENT]) {
      lexer->mark_end(lexer);

      while (lexer->lookahead != '\n') {
        advance(lexer);
      }
      advance(lexer);

      lexer->result_symbol = LAYOUT_LINE_CONTENT;
      return true;
    }

    // while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    //   lexer->advance(lexer, true);
    // }
    //
    // if (lexer->lookahead == 0) { // I guess end of file
    //   // if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
    //   //   lexer->result_symbol = LAYOUT_CLOSE_BRACE;
    //   //   return true;
    //   // }
    //
    //   if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
    //     lexer->result_symbol = LAYOUT_CLOSE_BRACE;
    //     return true;
    //   }
    //   return false;
    // }
    //
    // lexer->mark_end(lexer);
    //
    // if (lexer->lookahead != '\n') {
    //   return false;
    // }
    // advance(lexer);

    // bool next_token_is_comment = false;
    // uint32_t indent_length = 0;
    // for (;;) {
    //   if (lexer->lookahead == '\n') {
    //     indent_length = 0;
    //     advance(lexer);
    //   } else if (lexer->lookahead == ' ') {
    //     indent_length++;
    //     advance(lexer);
    //   } else if (lexer->lookahead == '\t') {
    //     indent_length += 8;
    //     advance(lexer);
    //   } else if (lexer->lookahead == 0) {
    //     if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
    //       lexer->result_symbol = LAYOUT_CLOSE_BRACE;
    //       return true;
    //     }
    //     return false;
    //   } else {
    //     next_token_is_comment = lexer->lookahead == '#';
    //
    //     if (lexer->lookahead == '{') {
    //       advance(lexer);
    //       if (lexer->lookahead == '-') {
    //         advance(lexer);
    //         next_token_is_comment = lexer->lookahead != '#';
    //       }
    //     }
    //
    //     if (lexer->lookahead == '-') {
    //       advance(lexer);
    //       next_token_is_comment = lexer->lookahead == '}';
    //     }
    //
    //     break;
    //   }
    // }

    // if (!next_token_is_comment) {
    //   if (indent_length_stack.size() > 0) {
    //     if (indent_length < indent_length_stack.back()) {
    //       while (indent_length_stack.size() > 0 && indent_length < indent_length_stack.back()) {
    //         indent_length_stack.pop_back();
    //         queued_close_brace_count++;
    //       }
    //
    //       if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
    //         queued_close_brace_count--;
    //         lexer->result_symbol = LAYOUT_CLOSE_BRACE;
    //         return true;
    //       }
    //     } else if (indent_length == indent_length_stack.back()) {
    //
    //     }
    //   }
    // }

    return false;
  }

  vector<uint16_t> indent_length_stack;
  uint32_t queued_close_brace_count;
};

}

extern "C" {

void *tree_sitter_uuag_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_uuag_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_uuag_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_uuag_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_uuag_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
