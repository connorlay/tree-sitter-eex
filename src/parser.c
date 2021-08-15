#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 2
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT_PERCENT = 1,
  anon_sym_LT_PERCENT_EQ = 2,
  anon_sym_LT_PERCENT_PERCENT = 3,
  anon_sym_LT_PERCENT_PERCENT_EQ = 4,
  anon_sym_PERCENT_GT = 5,
  anon_sym_LT_PERCENT_POUND = 6,
  sym_text = 7,
  sym_code = 8,
  sym_fragment = 9,
  sym__node = 10,
  sym_directive = 11,
  sym_comment = 12,
  aux_sym_fragment_repeat1 = 13,
  aux_sym_directive_repeat1 = 14,
  anon_alias_sym_code = 15,
  anon_alias_sym_text = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT_PERCENT_EQ] = "<%%=",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [sym_text] = "text",
  [sym_code] = "code",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [anon_alias_sym_code] = "code",
  [anon_alias_sym_text] = "text",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT_PERCENT_EQ] = anon_sym_LT_PERCENT_PERCENT_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [sym_text] = sym_text,
  [sym_code] = sym_code,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [anon_alias_sym_code] = anon_alias_sym_code,
  [anon_alias_sym_text] = anon_alias_sym_text,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_text] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_code,
  },
  [2] = {
    [1] = anon_alias_sym_text,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_directive_repeat1, 3,
    aux_sym_directive_repeat1,
    anon_alias_sym_code,
    anon_alias_sym_text,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_code);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(12),
    [sym__node] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_fragment_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym__node] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(7),
    [sym_text] = ACTIONS(13),
  },
  [3] = {
    [sym__node] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LT_PERCENT] = ACTIONS(17),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(17),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(17),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(20),
    [sym_text] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 6,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [12] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 6,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [24] = 3,
    ACTIONS(34), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(36), 1,
      sym_code,
    STATE(8), 1,
      aux_sym_directive_repeat1,
  [34] = 3,
    ACTIONS(36), 1,
      sym_code,
    ACTIONS(38), 1,
      anon_sym_PERCENT_GT,
    STATE(8), 1,
      aux_sym_directive_repeat1,
  [44] = 3,
    ACTIONS(40), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(42), 1,
      sym_code,
    STATE(8), 1,
      aux_sym_directive_repeat1,
  [54] = 2,
    ACTIONS(45), 1,
      sym_code,
    STATE(6), 1,
      aux_sym_directive_repeat1,
  [61] = 2,
    ACTIONS(45), 1,
      sym_code,
    STATE(7), 1,
      aux_sym_directive_repeat1,
  [68] = 1,
    ACTIONS(47), 2,
      anon_sym_PERCENT_GT,
      sym_code,
  [73] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 61,
  [SMALL_STATE(11)] = 68,
  [SMALL_STATE(12)] = 73,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, .production_id = 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 1),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eex(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
