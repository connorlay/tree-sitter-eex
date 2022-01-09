#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT_PERCENT = 1,
  anon_sym_LT_PERCENT_EQ = 2,
  anon_sym_LT_PERCENT_PERCENT = 3,
  anon_sym_LT_PERCENT_PERCENT_EQ = 4,
  anon_sym_PERCENT_GT = 5,
  anon_sym_LT_PERCENT_POUND = 6,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 7,
  aux_sym__bang_comment_token1 = 8,
  anon_sym_DASH_DASH_PERCENT_GT = 9,
  sym_text = 10,
  sym__code = 11,
  sym_fragment = 12,
  sym__node = 13,
  sym_directive = 14,
  sym_comment = 15,
  sym__hash_comment = 16,
  sym__bang_comment = 17,
  aux_sym_fragment_repeat1 = 18,
  aux_sym_directive_repeat1 = 19,
  aux_sym__bang_comment_repeat1 = 20,
  anon_alias_sym_code = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT_PERCENT_EQ] = "<%%=",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = "<%!--",
  [aux_sym__bang_comment_token1] = "_bang_comment_token1",
  [anon_sym_DASH_DASH_PERCENT_GT] = "--%>",
  [sym_text] = "text",
  [sym__code] = "_code",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [sym__hash_comment] = "_hash_comment",
  [sym__bang_comment] = "_bang_comment",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym__bang_comment_repeat1] = "_bang_comment_repeat1",
  [anon_alias_sym_code] = "code",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT_PERCENT_EQ] = anon_sym_LT_PERCENT_PERCENT_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = anon_sym_LT_PERCENT_BANG_DASH_DASH,
  [aux_sym__bang_comment_token1] = aux_sym__bang_comment_token1,
  [anon_sym_DASH_DASH_PERCENT_GT] = anon_sym_DASH_DASH_PERCENT_GT,
  [sym_text] = sym_text,
  [sym__code] = sym__code,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [sym__hash_comment] = sym__hash_comment,
  [sym__bang_comment] = sym__bang_comment,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym__bang_comment_repeat1] = aux_sym__bang_comment_repeat1,
  [anon_alias_sym_code] = anon_alias_sym_code,
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
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bang_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
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
  [sym__hash_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__bang_comment] = {
    .visible = false,
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
  [aux_sym__bang_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_code] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_code,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_directive_repeat1, 2,
    aux_sym_directive_repeat1,
    anon_alias_sym_code,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__bang_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__bang_comment_token1);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__bang_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
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
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_PERCENT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(20),
    [sym__node] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__hash_comment] = STATE(8),
    [sym__bang_comment] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(7),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [2] = {
    [sym__node] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__hash_comment] = STATE(8),
    [sym__bang_comment] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LT_PERCENT] = ACTIONS(15),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(15),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(15),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(15),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(18),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(21),
    [sym_text] = ACTIONS(24),
  },
  [3] = {
    [sym__node] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__hash_comment] = STATE(8),
    [sym__bang_comment] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(7),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(9),
    [sym_text] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [13] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [26] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [39] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [52] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [65] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [78] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [91] = 3,
    ACTIONS(59), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(61), 1,
      sym__code,
    STATE(15), 1,
      aux_sym_directive_repeat1,
  [101] = 3,
    ACTIONS(61), 1,
      sym__code,
    ACTIONS(63), 1,
      anon_sym_PERCENT_GT,
    STATE(15), 1,
      aux_sym_directive_repeat1,
  [111] = 3,
    ACTIONS(61), 1,
      sym__code,
    ACTIONS(65), 1,
      anon_sym_PERCENT_GT,
    STATE(11), 1,
      aux_sym_directive_repeat1,
  [121] = 3,
    ACTIONS(67), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(69), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(18), 1,
      aux_sym__bang_comment_repeat1,
  [131] = 3,
    ACTIONS(71), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(73), 1,
      sym__code,
    STATE(15), 1,
      aux_sym_directive_repeat1,
  [141] = 3,
    ACTIONS(76), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(78), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(14), 1,
      aux_sym__bang_comment_repeat1,
  [151] = 3,
    ACTIONS(61), 1,
      sym__code,
    ACTIONS(80), 1,
      anon_sym_PERCENT_GT,
    STATE(12), 1,
      aux_sym_directive_repeat1,
  [161] = 3,
    ACTIONS(82), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(18), 1,
      aux_sym__bang_comment_repeat1,
  [171] = 1,
    ACTIONS(87), 2,
      anon_sym_PERCENT_GT,
      sym__code,
  [176] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 65,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 91,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 111,
  [SMALL_STATE(14)] = 121,
  [SMALL_STATE(15)] = 131,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 176,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(13),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(17),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bang_comment_repeat1, 2), SHIFT_REPEAT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bang_comment_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
