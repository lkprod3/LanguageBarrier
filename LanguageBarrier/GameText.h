#ifndef __GAMETEXT_H__
#define __GAMETEXT_H__

#include <cstdint>

namespace lb {
    static const uint8_t FIRST_FONT_ID = 0x4E;
    static const float COORDS_MULTIPLIER = 1.5f;
    static const uint8_t GLYPH_WIDTH = 32;
    static const uint8_t GLYPH_HEIGHT = 32;
    static const uint8_t FONT_ROW_LENGTH = 64;


    void gameTextInit();
}

#endif  // !__GAMETEXT_H__