#ifndef __GAMETEXT_H__
#define __GAMETEXT_H__

#include <cstdint>
#include "LanguageBarrier.h"

namespace lb {
LB_GLOBAL uint8_t FIRST_FONT_ID;
LB_GLOBAL float COORDS_MULTIPLIER;
LB_GLOBAL uint8_t FONT_CELL_WIDTH;
LB_GLOBAL uint8_t FONT_CELL_HEIGHT;
LB_GLOBAL uint8_t FONT_ROW_LENGTH;
static const uint16_t TOTAL_NUM_FONT_CELLS = 8000;
LB_GLOBAL uint16_t GLYPH_RANGE_FULLWIDTH_START;
// TODO: make this JSON-configurable in some manner
static const uint16_t MAX_DIALOGUE_PAGE_LENGTH = 2000;
static const uint16_t MAX_PROCESSED_STRING_LENGTH = 512;
LB_GLOBAL uint16_t DEFAULT_LINE_LENGTH;
LB_GLOBAL uint16_t DEFAULT_MAX_CHARACTERS;
LB_GLOBAL float SGHD_LINK_UNDERLINE_GLYPH_X;
LB_GLOBAL float SGHD_LINK_UNDERLINE_GLYPH_Y;
// Careful: this also messes with the speaker markers (for spoken lines) and
// highlight in the backlog
LB_GLOBAL int DIALOGUE_REDESIGN_YOFFSET_SHIFT;
LB_GLOBAL int DIALOGUE_REDESIGN_LINEHEIGHT_SHIFT;
LB_GLOBAL bool HAS_BACKLOG_UNDERLINE;
LB_GLOBAL int8_t BACKLOG_HIGHLIGHT_DEFAULT_HEIGHT;
LB_GLOBAL int8_t BACKLOG_HIGHLIGHT_HEIGHT_SHIFT;
LB_GLOBAL float OUTLINE_EXTRA_X;
// arbitrarily chosen; I hope the game doesn't try to use this
LB_GLOBAL uint8_t OUTLINE_TEXTURE_ID;
static const int LINECOUNT_DISABLE_OR_ERROR = 0xFF;
static const uint8_t NOT_A_LINK = 0xFF;
LB_GLOBAL int SGHD_PHONE_X_PADDING;
LB_GLOBAL uint16_t GLYPH_ID_FULLWIDTH_SPACE;
LB_GLOBAL uint16_t GLYPH_ID_HALFWIDTH_SPACE;
LB_GLOBAL bool HAS_SGHD_PHONE;
LB_GLOBAL bool HAS_RINE;
LB_GLOBAL bool RINE_BLACK_NAMES;
LB_GLOBAL bool NEEDS_CLEARLIST_TEXT_POSITION_ADJUST;
LB_GLOBAL bool IMPROVE_DIALOGUE_OUTLINES;

void gameTextInit();
}

#endif  // !__GAMETEXT_H__
