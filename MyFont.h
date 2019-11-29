// generate FreeFont from LCD Vision font
const uint8_t FreeArial12fullBitmaps[] PROGMEM = {
    // 0x0 [0x20 ' ']

    // 1x12 [0x21 '!']
    0xFF, 0xD0,
    // 4x4 [0x22 '"']
    0x99, 0x99,
    // 9x12 [0x23 '#']
    0x11, 0x08, 0x84, 0x44, 0x4F, 0xF9, 0x10, 0x88, 0x44, 0xFF, 0xA2, 0x11, 0x08, 0x80,
    // 7x14 [0x24 '$']
    0x10, 0x79, 0x4C, 0x99, 0x12, 0x1C, 0x0E, 0x12, 0x26, 0x4A, 0xA3, 0x82, 0x00,
    // 12x12 [0x25 '%']
    0x70, 0x88, 0x90, 0x89, 0x08, 0xA0, 0x8A, 0x07, 0x20, 0x04, 0xE0, 0x51, 0x09, 0x10, 0x91, 0x11,
    0x11, 0x0E,
    // 9x12 [0x26 '&']
    0x38, 0x22, 0x11, 0x08, 0x82, 0x81, 0x81, 0x41, 0x11, 0x85, 0x41, 0x11, 0x47, 0x10,
    // 1x4 [0x27 ''']
    0xF0,
    // 3x15 [0x28 '(']
    0x29, 0x29, 0x24, 0x92, 0x24, 0x88,
    // 3x15 [0x29 ')']
    0x89, 0x22, 0x49, 0x24, 0xA4, 0xA0,
    // 5x5 [0x2A '*']
    0x27, 0xC8, 0xA5, 0x00,
    // 7x7 [0x2B '+']
    0x10, 0x20, 0x47, 0xF1, 0x02, 0x04, 0x00,
    // 1x3 [0x2C ',']
    0xE0,
    // 4x1 [0x2D '-']
    0xF0,
    // 1x1 [0x2E '.']
    0x80,
    // 4x12 [0x2F '/']
    0x11, 0x22, 0x22, 0x44, 0x44, 0x88,
    // 7x12 [0x30 '0']
    0x38, 0x8A, 0x0C, 0x18, 0x30, 0x60, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 4x12 [0x31 '1']
    0x13, 0x59, 0x11, 0x11, 0x11, 0x11,
    // 7x12 [0x32 '2']
    0x3C, 0x8A, 0x08, 0x10, 0x20, 0x81, 0x04, 0x10, 0x41, 0x07, 0xF0,
    // 7x12 [0x33 '3']
    0x38, 0x8A, 0x10, 0x20, 0xC7, 0x01, 0x01, 0x03, 0x07, 0x11, 0xC0,
    // 8x12 [0x34 '4']
    0x02, 0x06, 0x0A, 0x12, 0x12, 0x22, 0x42, 0x82, 0xFF, 0x02, 0x02, 0x02,
    // 7x12 [0x35 '5']
    0x7E, 0x81, 0x04, 0x0F, 0x90, 0x80, 0x81, 0x03, 0x05, 0x11, 0xC0,
    // 7x12 [0x36 '6']
    0x38, 0x8A, 0x0C, 0x0B, 0x98, 0xA0, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 7x12 [0x37 '7']
    0xFE, 0x08, 0x10, 0x40, 0x82, 0x04, 0x08, 0x10, 0x40, 0x81, 0x00,
    // 7x12 [0x38 '8']
    0x38, 0x8A, 0x0C, 0x14, 0x47, 0x11, 0x41, 0x83, 0x05, 0x11, 0xC0,
    // 7x12 [0x39 '9']
    0x38, 0x8A, 0x0C, 0x18, 0x30, 0x51, 0x9D, 0x03, 0x05, 0x11, 0xC0,
    // 1x9 [0x3A ':']
    0x80, 0x80,
    // 1x11 [0x3B ';']
    0x80, 0xE0,
    // 7x7 [0x3C '<']
    0x02, 0x39, 0x84, 0x06, 0x03, 0x80, 0x80,
    // 7x5 [0x3D '=']
    0xFE, 0x00, 0x00, 0x0F, 0xE0,
    // 7x7 [0x3E '>']
    0x80, 0xE0, 0x30, 0x10, 0xCE, 0x20, 0x00,
    // 7x12 [0x3F '?']
    0x38, 0x8A, 0x0C, 0x10, 0x20, 0x82, 0x08, 0x10, 0x20, 0x00, 0x80,
    // 15x15 [0x40 '@']
    0x07, 0xE0, 0x30, 0x30, 0x80, 0x12, 0x1D, 0x24, 0x46, 0x31, 0x04, 0x64, 0x08, 0xC8, 0x21, 0x90,
    0x43, 0x20, 0x8A, 0x23, 0x22, 0x3B, 0x82, 0x00, 0x23, 0x01, 0x81, 0xFC, 0x00,
    // 9x12 [0x41 'A']
    0x08, 0x0A, 0x05, 0x02, 0x82, 0x21, 0x10, 0x88, 0xFE, 0x41, 0x20, 0xA0, 0x30, 0x10,
    // 9x12 [0x42 'B']
    0xFF, 0x40, 0xA0, 0x30, 0x18, 0x17, 0xF2, 0x05, 0x01, 0x80, 0xC0, 0x60, 0x5F, 0xC0,
    // 10x12 [0x43 'C']
    0x1F, 0x08, 0x24, 0x06, 0x00, 0x80, 0x20, 0x08, 0x02, 0x00, 0x80, 0x10, 0x12, 0x08, 0x7C,
    // 10x12 [0x44 'D']
    0xFE, 0x20, 0x48, 0x0A, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x80, 0x60, 0x28, 0x13, 0xF8,
    // 9x12 [0x45 'E']
    0xFF, 0xC0, 0x20, 0x10, 0x08, 0x07, 0xFA, 0x01, 0x00, 0x80, 0x40, 0x20, 0x1F, 0xF0,
    // 8x12 [0x46 'F']
    0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80,
    // 10x12 [0x47 'G']
    0x1E, 0x08, 0x44, 0x0A, 0x00, 0x80, 0x20, 0x08, 0x7E, 0x01, 0x80, 0x50, 0x22, 0x10, 0x78,
    // 9x12 [0x48 'H']
    0x80, 0xC0, 0x60, 0x30, 0x18, 0x0F, 0xFE, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x10,
    // 1x12 [0x49 'I']
    0xFF, 0xF0,
    // 6x12 [0x4A 'J']
    0x04, 0x10, 0x41, 0x04, 0x10, 0x41, 0x86, 0x18, 0x5E,
    // 9x12 [0x4B 'K']
    0x80, 0xC0, 0xA0, 0x90, 0x88, 0x84, 0xC2, 0xA1, 0x88, 0x82, 0x41, 0x20, 0x50, 0x10,
    // 7x12 [0x4C 'L']
    0x81, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x02, 0x07, 0xF0,
    // 11x12 [0x4D 'M']
    0x80, 0x38, 0x0F, 0x01, 0xD0, 0x5A, 0x0B, 0x22, 0x64, 0x4C, 0x51, 0x8A, 0x31, 0x46, 0x10, 0xC2,
    0x10,
    // 9x12 [0x4E 'N']
    0x80, 0xE0, 0x68, 0x34, 0x19, 0x0C, 0x46, 0x23, 0x09, 0x82, 0xC1, 0x60, 0x70, 0x10,
    // 10x12 [0x4F 'O']
    0x1E, 0x08, 0x44, 0x0A, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x80, 0x50, 0x22, 0x10, 0x78,
    // 9x12 [0x50 'P']
    0xFE, 0x40, 0xA0, 0x30, 0x18, 0x0C, 0x0B, 0xF9, 0x00, 0x80, 0x40, 0x20, 0x10, 0x00,
    // 10x12 [0x51 'Q']
    0x1E, 0x08, 0x44, 0x0A, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x80, 0x51, 0xB2, 0x18, 0x7B,
    // 9x12 [0x52 'R']
    0xFE, 0x40, 0xA0, 0x30, 0x18, 0x0C, 0x0B, 0xF9, 0x08, 0x82, 0x41, 0x20, 0x50, 0x10,
    // 9x12 [0x53 'S']
    0x3E, 0x20, 0xA0, 0x30, 0x04, 0x01, 0xC0, 0x1C, 0x01, 0x00, 0xC0, 0x50, 0x47, 0xC0,
    // 9x12 [0x54 'T']
    0xFF, 0x84, 0x02, 0x01, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00,
    // 9x12 [0x55 'U']
    0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x50, 0x47, 0xC0,
    // 9x12 [0x56 'V']
    0x80, 0xC0, 0x50, 0x48, 0x24, 0x11, 0x10, 0x88, 0x44, 0x14, 0x0A, 0x02, 0x01, 0x00,
    // 15x12 [0x57 'W']
    0x81, 0x03, 0x05, 0x05, 0x0A, 0x12, 0x14, 0x24, 0x44, 0x48, 0x88, 0x89, 0x12, 0x14, 0x14, 0x28,
    0x28, 0x50, 0x50, 0x40, 0x40, 0x80, 0x80,
    // 11x12 [0x58 'X']
    0x40, 0x44, 0x10, 0x44, 0x08, 0x80, 0xA0, 0x08, 0x02, 0x80, 0x88, 0x11, 0x04, 0x11, 0x01, 0x40,
    0x10,
    // 9x12 [0x59 'Y']
    0x80, 0xA0, 0x90, 0x44, 0x41, 0x40, 0xA0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00,
    // 9x12 [0x5A 'Z']
    0x7F, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10, 0x1F, 0xF0,
    // 3x15 [0x5B '[']
    0xF2, 0x49, 0x24, 0x92, 0x49, 0x38,
    // 4x12 [0x5C '\']
    0x88, 0x44, 0x44, 0x22, 0x22, 0x11,
    // 3x15 [0x5D ']']
    0xE4, 0x92, 0x49, 0x24, 0x92, 0x78,
    // 7x6 [0x5E '^']
    0x10, 0x50, 0xA2, 0x24, 0x50, 0x40,
    // 9x1 [0x5F '_']
    0xFF, 0x80,
    // 2x2 [0x60 '`']
    0x90,
    // 7x9 [0x61 'a']
    0x3C, 0x86, 0x08, 0x77, 0x30, 0x60, 0xC3, 0x7A,
    // 7x12 [0x62 'b']
    0x81, 0x02, 0x05, 0xCC, 0x50, 0x60, 0xC1, 0x83, 0x07, 0x15, 0xC0,
    // 6x9 [0x63 'c']
    0x39, 0x18, 0x20, 0x82, 0x08, 0x11, 0x38,
    // 7x12 [0x64 'd']
    0x02, 0x04, 0x09, 0xD4, 0x70, 0x60, 0xC1, 0x83, 0x05, 0x19, 0xD0,
    // 7x9 [0x65 'e']
    0x38, 0x8A, 0x0C, 0x1F, 0xF0, 0x20, 0xA2, 0x38,
    // 4x12 [0x66 'f']
    0x34, 0x4F, 0x44, 0x44, 0x44, 0x44,
    // 7x12 [0x67 'g']
    0x3A, 0x8E, 0x0C, 0x18, 0x30, 0x60, 0xA3, 0x3A, 0x06, 0x13, 0xC0,
    // 6x12 [0x68 'h']
    0x82, 0x08, 0x2E, 0xC6, 0x18, 0x61, 0x86, 0x18, 0x61,
    // 1x12 [0x69 'i']
    0x9F, 0xF0,
    // 3x15 [0x6A 'j']
    0x20, 0x12, 0x49, 0x24, 0x92, 0x70,
    // 7x12 [0x6B 'k']
    0x81, 0x02, 0x04, 0x18, 0x51, 0x24, 0x58, 0xC9, 0x12, 0x14, 0x10,
    // 1x12 [0x6C 'l']
    0xFF, 0xF0,
    // 11x9 [0x6D 'm']
    0xB9, 0xD8, 0xC6, 0x10, 0xC2, 0x18, 0x43, 0x08, 0x61, 0x0C, 0x21, 0x84, 0x20,
    // 6x9 [0x6E 'n']
    0xBB, 0x18, 0x61, 0x86, 0x18, 0x61, 0x84,
    // 7x9 [0x6F 'o']
    0x38, 0x8A, 0x0C, 0x18, 0x30, 0x60, 0xA2, 0x38,
    // 7x12 [0x70 'p']
    0xB9, 0x8A, 0x0C, 0x18, 0x30, 0x60, 0xE2, 0xB9, 0x02, 0x04, 0x00,
    // 7x12 [0x71 'q']
    0x3A, 0x8E, 0x0C, 0x18, 0x30, 0x60, 0xA3, 0x3A, 0x04, 0x08, 0x10,
    // 4x9 [0x72 'r']
    0xBC, 0x88, 0x88, 0x88, 0x80,
    // 6x9 [0x73 's']
    0x7A, 0x18, 0x20, 0x78, 0x10, 0x61, 0x78,
    // 4x11 [0x74 't']
    0x44, 0xF4, 0x44, 0x44, 0x44, 0x70,
    // 6x9 [0x75 'u']
    0x86, 0x18, 0x61, 0x86, 0x18, 0x63, 0x74,
    // 7x9 [0x76 'v']
    0x83, 0x05, 0x12, 0x22, 0x85, 0x0A, 0x08, 0x10,
    // 11x9 [0x77 'w']
    0x84, 0x30, 0x85, 0x29, 0x25, 0x25, 0x14, 0xA2, 0x94, 0x51, 0x04, 0x20, 0x80,
    // 7x9 [0x78 'x']
    0x82, 0x88, 0xA1, 0x41, 0x05, 0x0A, 0x22, 0x82,
    // 7x12 [0x79 'y']
    0x83, 0x06, 0x12, 0x24, 0x45, 0x0A, 0x14, 0x10, 0x20, 0x43, 0x00,
    // 7x9 [0x7A 'z']
    0xFE, 0x08, 0x20, 0x41, 0x04, 0x08, 0x20, 0xFE,
    // 5x15 [0x7B '{']
    0x19, 0x08, 0x42, 0x10, 0x98, 0x21, 0x08, 0x42, 0x10, 0x60,
    // 1x15 [0x7C '|']
    0xFF, 0xFE,
    // 5x15 [0x7D '}']
    0xC1, 0x08, 0x42, 0x10, 0x83, 0x21, 0x08, 0x42, 0x13, 0x00,
    // 8x2 [0x7E '~']
    0x71, 0x8E,
    // 8x11 [0x7F '']
    0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
    // 8x12 [0x80 '€']
    0x0E, 0x11, 0x20, 0x40, 0x40, 0xFE, 0x40, 0xFE, 0x40, 0x40, 0x21, 0x1E,
    // 8x11 [0x81 '�']
    0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
    // 1x3 [0x82 '‚']
    0xE0,
    // 9x15 [0x83 'ƒ']
    0x03, 0x82, 0x01, 0x03, 0xE0, 0x40, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x02, 0x01, 0x00, 0x83,
    0xC0,
    // 3x3 [0x84 '„']
    0xB6, 0x80,
    // 11x1 [0x85 '…']
    0x84, 0x20,
    // 7x15 [0x86 '†']
    0x10, 0x20, 0x47, 0xF1, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x02, 0x04, 0x00,
    // 7x15 [0x87 '‡']
    0x10, 0x20, 0x47, 0xF1, 0x02, 0x04, 0x08, 0x10, 0x20, 0x47, 0xF1, 0x02, 0x04, 0x00,
    // 4x2 [0x88 'ˆ']
    0x69,
    // 17x12 [0x89 '‰']
    0x71, 0x00, 0x44, 0x80, 0x22, 0x80, 0x11, 0x40, 0x08, 0xA0, 0x03, 0xA0, 0x00, 0x17, 0x1C, 0x14,
    0x51, 0x0A, 0x28, 0x89, 0x14, 0x44, 0x8A, 0x22, 0x38, 0xE0,
    // 9x15 [0x8A 'Š']
    0x12, 0x06, 0x00, 0x07, 0xC4, 0x14, 0x06, 0x00, 0x80, 0x38, 0x03, 0x80, 0x20, 0x18, 0x0A, 0x08,
    0xF8,
    // 3x7 [0x8B '‹']
    0x29, 0x44, 0x88,
    // 15x12 [0x8C 'Œ']
    0x1E, 0x7E, 0x42, 0x81, 0x03, 0x04, 0x02, 0x08, 0x04, 0x10, 0x0F, 0xE0, 0x10, 0x40, 0x20, 0x80,
    0x40, 0x81, 0x80, 0x85, 0x00, 0xF3, 0xF0,
    // 8x11 [0x8D '�']
    0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
    // 9x15 [0x8E 'Ž']
    0x12, 0x06, 0x00, 0x0F, 0xF0, 0x10, 0x10, 0x08, 0x08, 0x08, 0x04, 0x04, 0x04, 0x02, 0x02, 0x03,
    0xFE,
    // 8x11 [0x8F '�']
    0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
    // 8x11 [0x90 '�']
    0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
    // 1x3 [0x91 '‘']
    0xE0,
    // 1x3 [0x92 '’']
    0xE0,
    // 3x3 [0x93 '“']
    0xB6, 0x80,
    // 3x3 [0x94 '”']
    0xB6, 0x80,
    // 4x4 [0x95 '•']
    0x6F, 0xF6,
    // 9x1 [0x96 '–']
    0xFF, 0x80,
    // 16x1 [0x97 '—']
    0xFF, 0xFF,
    // 4x2 [0x98 '˜']
    0x5A,
    // 13x6 [0x99 '™']
    0xFB, 0x19, 0x18, 0xC8, 0xAA, 0x45, 0x52, 0x2A, 0x91, 0x24,
    // 6x12 [0x9A 'š']
    0x48, 0xC0, 0x1E, 0x86, 0x08, 0x1E, 0x04, 0x18, 0x5E,
    // 3x7 [0x9B '›']
    0x89, 0x14, 0xA0,
    // 13x9 [0x9C 'œ']
    0x38, 0xE2, 0x28, 0xA0, 0x83, 0x04, 0x18, 0x3F, 0xC1, 0x02, 0x08, 0x28, 0xE2, 0x38, 0xE0,
    // 8x11 [0x9D '�']
    0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
    // 7x12 [0x9E 'ž']
    0x24, 0x30, 0x07, 0xF0, 0x41, 0x02, 0x08, 0x20, 0x41, 0x07, 0xF0,
    // 9x14 [0x9F 'Ÿ']
    0x14, 0x00, 0x20, 0x28, 0x24, 0x11, 0x10, 0x50, 0x28, 0x08, 0x04, 0x02, 0x01, 0x00, 0x80, 0x40,
    // 0x0 [0xA0 ' ']

    // 1x12 [0xA1 '¡']
    0xBF, 0xF0,
    // 7x15 [0xA2 '¢']
    0x04, 0x08, 0x11, 0xC4, 0xD1, 0x64, 0x48, 0x91, 0x45, 0x91, 0xC2, 0x08, 0x10, 0x00,
    // 8x12 [0xA3 '£']
    0x3C, 0x62, 0x41, 0x40, 0x40, 0xF8, 0x20, 0x20, 0x20, 0x40, 0x79, 0x86,
    // 6x6 [0xA4 '¤']
    0xB5, 0x28, 0x61, 0x4A, 0xD0,
    // 9x12 [0xA5 '¥']
    0x80, 0xA0, 0x88, 0x84, 0x41, 0x40, 0xA3, 0xFE, 0x10, 0xFF, 0x84, 0x02, 0x01, 0x00,
    // 1x15 [0xA6 '¦']
    0xFC, 0x7E,
    // 8x15 [0xA7 '§']
    0x3C, 0x42, 0x42, 0x60, 0x30, 0x4C, 0x82, 0x81, 0x41, 0x32, 0x0C, 0x06, 0x82, 0x42, 0x3C,
    // 3x1 [0xA8 '¨']
    0xA0,
    // 12x12 [0xA9 '©']
    0x1F, 0x82, 0x04, 0x4F, 0x29, 0x09, 0x90, 0x19, 0x01, 0x90, 0x19, 0x09, 0x8F, 0x14, 0x02, 0x20,
    0x41, 0xF8,
    // 5x6 [0xAA 'ª']
    0x74, 0x4F, 0x98, 0xBC,
    // 6x7 [0xAB '«']
    0x25, 0x24, 0xA4, 0x49, 0x22, 0x40,
    // 7x5 [0xAC '¬']
    0xFE, 0x04, 0x08, 0x10, 0x20,
    // 4x1 [0xAD '­']
    0xF0,
    // 12x12 [0xAE '®']
    0x1F, 0x82, 0x04, 0x5F, 0x29, 0x09, 0x90, 0x99, 0xF1, 0x92, 0x19, 0x11, 0x90, 0x94, 0x02, 0x20,
    0x41, 0xF8,
    // 9x1 [0xAF '¯']
    0xFF, 0x80,
    // 4x4 [0xB0 '°']
    0x69, 0x96,
    // 7x10 [0xB1 '±']
    0x10, 0x20, 0x47, 0xF1, 0x02, 0x04, 0x00, 0x01, 0xFC,
    // 5x6 [0xB2 '²']
    0x74, 0x42, 0x64, 0x7C,
    // 5x6 [0xB3 '³']
    0x7C, 0x44, 0x18, 0xB8,
    // 2x2 [0xB4 '´']
    0x60,
    // 7x12 [0xB5 'µ']
    0x83, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xE3, 0xBB, 0x02, 0x04, 0x00,
    // 9x15 [0xB6 '¶']
    0x7F, 0xFC, 0xBE, 0x5F, 0x2F, 0x91, 0xC8, 0x24, 0x12, 0x09, 0x04, 0x82, 0x41, 0x20, 0x90, 0x48,
    0x24,
    // 1x1 [0xB7 '·']
    0x80,
    // 3x3 [0xB8 '¸']
    0x47, 0x80,
    // 3x6 [0xB9 '¹']
    0x74, 0x92, 0x40,
    // 5x6 [0xBA 'º']
    0x74, 0x63, 0x18, 0xB8,
    // 6x7 [0xBB '»']
    0x91, 0x24, 0x89, 0x49, 0x29, 0x00,
    // 12x12 [0xBC '¼']
    0x60, 0x4A, 0x08, 0x20, 0x82, 0x10, 0x22, 0x02, 0x20, 0x04, 0x20, 0x86, 0x08, 0xA1, 0x12, 0x21,
    0xF4, 0x02,
    // 12x12 [0xBD '½']
    0x60, 0x4A, 0x08, 0x21, 0x02, 0x10, 0x22, 0x02, 0x40, 0x04, 0xE0, 0x91, 0x10, 0x12, 0x06, 0x20,
    0x84, 0x1F,
    // 13x12 [0xBE '¾']
    0x78, 0x24, 0x42, 0x04, 0x10, 0x11, 0x08, 0x90, 0x39, 0x00, 0x08, 0x40, 0x86, 0x08, 0x50, 0x44,
    0x84, 0x3E, 0x40, 0x20,
    // 8x12 [0xBF '¿']
    0x10, 0x00, 0x10, 0x10, 0x10, 0x20, 0x40, 0x80, 0x81, 0x81, 0x42, 0x3C,
    // 9x15 [0xC0 'À']
    0x10, 0x04, 0x00, 0x01, 0x01, 0x40, 0xA0, 0x50, 0x44, 0x22, 0x11, 0x1F, 0xC8, 0x24, 0x14, 0x06,
    0x02,
    // 9x15 [0xC1 'Á']
    0x04, 0x04, 0x00, 0x01, 0x01, 0x40, 0xA0, 0x50, 0x44, 0x22, 0x11, 0x1F, 0xC8, 0x24, 0x14, 0x06,
    0x02,
    // 9x15 [0xC2 'Â']
    0x0C, 0x09, 0x00, 0x01, 0x01, 0x40, 0xA0, 0x50, 0x44, 0x22, 0x11, 0x1F, 0xC8, 0x24, 0x14, 0x06,
    0x02,
    // 9x15 [0xC3 'Ã']
    0x0A, 0x0A, 0x00, 0x01, 0x01, 0x40, 0xA0, 0x50, 0x44, 0x22, 0x11, 0x1F, 0xC8, 0x24, 0x14, 0x06,
    0x02,
    // 9x14 [0xC4 'Ä']
    0x14, 0x00, 0x02, 0x02, 0x81, 0x40, 0xA0, 0x88, 0x44, 0x22, 0x3F, 0x90, 0x48, 0x28, 0x0C, 0x04,
    // 9x14 [0xC5 'Å']
    0x1C, 0x0A, 0x07, 0x02, 0x81, 0x40, 0xA0, 0x88, 0x44, 0x22, 0x3F, 0x90, 0x48, 0x28, 0x0C, 0x04,
    // 15x12 [0xC6 'Æ']
    0x07, 0xFE, 0x09, 0x00, 0x22, 0x00, 0x44, 0x01, 0x08, 0x02, 0x1F, 0xC8, 0x20, 0x1F, 0xC0, 0x40,
    0x80, 0x81, 0x02, 0x02, 0x04, 0x07, 0xF0,
    // 10x15 [0xC7 'Ç']
    0x1F, 0x08, 0x24, 0x06, 0x00, 0x80, 0x20, 0x08, 0x02, 0x00, 0x80, 0x10, 0x12, 0x08, 0x7C, 0x04,
    0x00, 0x80, 0xE0,
    // 9x15 [0xC8 'È']
    0x08, 0x02, 0x00, 0x1F, 0xF8, 0x04, 0x02, 0x01, 0x00, 0xFF, 0x40, 0x20, 0x10, 0x08, 0x04, 0x03,
    0xFE,
    // 9x15 [0xC9 'É']
    0x04, 0x04, 0x00, 0x1F, 0xF8, 0x04, 0x02, 0x01, 0x00, 0xFF, 0x40, 0x20, 0x10, 0x08, 0x04, 0x03,
    0xFE,
    // 9x15 [0xCA 'Ê']
    0x0C, 0x09, 0x00, 0x1F, 0xF8, 0x04, 0x02, 0x01, 0x00, 0xFF, 0x40, 0x20, 0x10, 0x08, 0x04, 0x03,
    0xFE,
    // 9x14 [0xCB 'Ë']
    0x14, 0x00, 0x3F, 0xF0, 0x08, 0x04, 0x02, 0x01, 0xFE, 0x80, 0x40, 0x20, 0x10, 0x08, 0x07, 0xFC,
    // 2x15 [0xCC 'Ì']
    0x91, 0x55, 0x55, 0x54,
    // 2x15 [0xCD 'Í']
    0x62, 0xAA, 0xAA, 0xA8,
    // 4x15 [0xCE 'Î']
    0x69, 0x04, 0x44, 0x44, 0x44, 0x44, 0x44, 0x40,
    // 3x14 [0xCF 'Ï']
    0xA1, 0x24, 0x92, 0x49, 0x24, 0x80,
    // 11x12 [0xD0 'Ð']
    0x7F, 0x08, 0x11, 0x01, 0x20, 0x14, 0x03, 0xF8, 0x50, 0x0A, 0x01, 0x40, 0x28, 0x09, 0x02, 0x3F,
    0x80,
    // 9x15 [0xD1 'Ñ']
    0x0A, 0x0A, 0x00, 0x10, 0x1C, 0x0D, 0x06, 0x83, 0x21, 0x88, 0xC4, 0x61, 0x30, 0x58, 0x2C, 0x0E,
    0x02,
    // 10x15 [0xD2 'Ò']
    0x08, 0x01, 0x00, 0x00, 0x78, 0x21, 0x10, 0x28, 0x06, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x40,
    0x88, 0x41, 0xE0,
    // 10x15 [0xD3 'Ó']
    0x04, 0x02, 0x00, 0x00, 0x78, 0x21, 0x10, 0x28, 0x06, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x40,
    0x88, 0x41, 0xE0,
    // 10x15 [0xD4 'Ô']
    0x0C, 0x04, 0x80, 0x00, 0x78, 0x21, 0x10, 0x28, 0x06, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x40,
    0x88, 0x41, 0xE0,
    // 10x15 [0xD5 'Õ']
    0x0A, 0x05, 0x00, 0x00, 0x78, 0x21, 0x10, 0x28, 0x06, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01, 0x40,
    0x88, 0x41, 0xE0,
    // 10x14 [0xD6 'Ö']
    0x0A, 0x00, 0x01, 0xE0, 0x84, 0x40, 0xA0, 0x18, 0x06, 0x01, 0x80, 0x60, 0x18, 0x05, 0x02, 0x21,
    0x07, 0x80,
    // 7x7 [0xD7 '×']
    0x82, 0x88, 0xE0, 0x83, 0x88, 0xA0, 0x80,
    // 10x12 [0xD8 'Ø']
    0x1E, 0x48, 0x64, 0x1A, 0x09, 0x82, 0x61, 0x18, 0x86, 0x41, 0x90, 0x58, 0x26, 0x12, 0x78,
    // 9x15 [0xD9 'Ù']
    0x10, 0x04, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0A, 0x08,
    0xF8,
    // 9x15 [0xDA 'Ú']
    0x04, 0x04, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0A, 0x08,
    0xF8,
    // 9x15 [0xDB 'Û']
    0x0C, 0x09, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0A, 0x08,
    0xF8,
    // 9x14 [0xDC 'Ü']
    0x14, 0x00, 0x20, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x14, 0x11, 0xF0,
    // 9x15 [0xDD 'Ý']
    0x04, 0x04, 0x00, 0x10, 0x14, 0x12, 0x08, 0x88, 0x28, 0x14, 0x04, 0x02, 0x01, 0x00, 0x80, 0x40,
    0x20,
    // 9x12 [0xDE 'Þ']
    0x80, 0x40, 0x3F, 0x90, 0x28, 0x0C, 0x06, 0x03, 0x01, 0x81, 0x7F, 0x20, 0x10, 0x00,
    // 7x12 [0xDF 'ß']
    0x30, 0x92, 0x24, 0x49, 0x12, 0x22, 0x42, 0x83, 0x06, 0x8C, 0xE0,
    // 7x12 [0xE0 'à']
    0x10, 0x10, 0x01, 0xE4, 0x30, 0x43, 0xB9, 0x83, 0x06, 0x1B, 0xD0,
    // 7x12 [0xE1 'á']
    0x08, 0x20, 0x01, 0xE4, 0x30, 0x43, 0xB9, 0x83, 0x06, 0x1B, 0xD0,
    // 7x12 [0xE2 'â']
    0x18, 0x48, 0x01, 0xE4, 0x30, 0x43, 0xB9, 0x83, 0x06, 0x1B, 0xD0,
    // 7x12 [0xE3 'ã']
    0x14, 0x50, 0x01, 0xE4, 0x30, 0x43, 0xB9, 0x83, 0x06, 0x1B, 0xD0,
    // 7x11 [0xE4 'ä']
    0x28, 0x00, 0xF2, 0x18, 0x21, 0xDC, 0xC1, 0x83, 0x0D, 0xE8,
    // 7x13 [0xE5 'å']
    0x38, 0x50, 0xE0, 0x03, 0xC8, 0x60, 0x87, 0x73, 0x06, 0x0C, 0x37, 0xA0,
    // 13x9 [0xE6 'æ']
    0x3C, 0xE2, 0x18, 0xA0, 0x82, 0x1C, 0x17, 0x3F, 0xC1, 0x02, 0x08, 0x30, 0xE2, 0x78, 0xE0,
    // 6x12 [0xE7 'ç']
    0x39, 0x18, 0x20, 0x82, 0x08, 0x11, 0x38, 0x40, 0x8E,
    // 7x12 [0xE8 'è']
    0x20, 0x20, 0x01, 0xC4, 0x50, 0x60, 0xFF, 0x81, 0x05, 0x11, 0xC0,
    // 7x12 [0xE9 'é']
    0x08, 0x20, 0x01, 0xC4, 0x50, 0x60, 0xFF, 0x81, 0x05, 0x11, 0xC0,
    // 7x12 [0xEA 'ê']
    0x18, 0x48, 0x01, 0xC4, 0x50, 0x60, 0xFF, 0x81, 0x05, 0x11, 0xC0,
    // 7x11 [0xEB 'ë']
    0x28, 0x00, 0xE2, 0x28, 0x30, 0x7F, 0xC0, 0x82, 0x88, 0xE0,
    // 2x12 [0xEC 'ì']
    0x91, 0x55, 0x55,
    // 2x12 [0xED 'í']
    0x62, 0xAA, 0xAA,
    // 4x12 [0xEE 'î']
    0x69, 0x04, 0x44, 0x44, 0x44, 0x44,
    // 3x11 [0xEF 'ï']
    0xA1, 0x24, 0x92, 0x49, 0x00,
    // 7x12 [0xF0 'ð']
    0x34, 0x31, 0xB1, 0xE4, 0x50, 0x60, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 6x12 [0xF1 'ñ']
    0x29, 0x40, 0x2E, 0xC6, 0x18, 0x61, 0x86, 0x18, 0x61,
    // 7x12 [0xF2 'ò']
    0x20, 0x20, 0x01, 0xC4, 0x50, 0x60, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 7x12 [0xF3 'ó']
    0x08, 0x20, 0x01, 0xC4, 0x50, 0x60, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 7x12 [0xF4 'ô']
    0x18, 0x48, 0x01, 0xC4, 0x50, 0x60, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 7x12 [0xF5 'õ']
    0x14, 0x50, 0x01, 0xC4, 0x50, 0x60, 0xC1, 0x83, 0x05, 0x11, 0xC0,
    // 7x11 [0xF6 'ö']
    0x28, 0x00, 0xE2, 0x28, 0x30, 0x60, 0xC1, 0x82, 0x88, 0xE0,
    // 7x5 [0xF7 '÷']
    0x10, 0x03, 0xF8, 0x01, 0x00,
    // 7x9 [0xF8 'ø']
    0x3A, 0x8A, 0x1C, 0x59, 0x34, 0x70, 0xA2, 0xB8,
    // 6x12 [0xF9 'ù']
    0x20, 0x40, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18, 0xDD,
    // 6x12 [0xFA 'ú']
    0x08, 0x40, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18, 0xDD,
    // 6x12 [0xFB 'û']
    0x31, 0x20, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18, 0xDD,
    // 6x11 [0xFC 'ü']
    0x50, 0x08, 0x61, 0x86, 0x18, 0x61, 0x86, 0x37, 0x40,
    // 7x15 [0xFD 'ý']
    0x08, 0x20, 0x04, 0x18, 0x30, 0x91, 0x22, 0x28, 0x50, 0xA0, 0x81, 0x02, 0x18, 0x00,
    // 7x15 [0xFE 'þ']
    0x81, 0x02, 0x05, 0xCC, 0x50, 0x60, 0xC1, 0x83, 0x07, 0x15, 0xC8, 0x10, 0x20, 0x00,
    // 7x14 [0xFF 'ÿ']
    0x28, 0x02, 0x0C, 0x18, 0x48, 0x91, 0x14, 0x28, 0x50, 0x40, 0x81, 0x0C, 0x00,
};
// strip blank pixels: top = 0, bot = 0, left = 0, rt = 1, adv = 17, desc = 3
const GFXglyph FreeArial12fullGlyphs[] PROGMEM = {
    {   0,  0,  0,  8,  7, -15 }, // 0x20 ' '
    {   0,  1, 12,  6,  2, -12 }, // 0x21 '!'
    {   2,  4,  4,  7,  1, -12 }, // 0x22 '"'
    {   4,  9, 12, 10,  0, -12 }, // 0x23 '#'
    {  18,  7, 14, 10,  1, -13 }, // 0x24 '$'
    {  31, 12, 12, 15,  1, -12 }, // 0x25 '%'
    {  49,  9, 12, 12,  1, -12 }, // 0x26 '&'
    {  63,  1,  4,  4,  1, -12 }, // 0x27 '''
    {  64,  3, 15,  6,  1, -12 }, // 0x28 '('
    {  70,  3, 15,  6,  1, -12 }, // 0x29 ')'
    {  76,  5,  5,  7,  0, -12 }, // 0x2A '*'
    {  80,  7,  7, 10,  1,  -9 }, // 0x2B '+'
    {  87,  1,  3,  5,  2,  -1 }, // 0x2C ','
    {  88,  4,  1,  6,  0,  -4 }, // 0x2D '-'
    {  89,  1,  1,  5,  2,  -1 }, // 0x2E '.'
    {  90,  4, 12,  5,  0, -12 }, // 0x2F '/'
    {  96,  7, 12, 10,  1, -12 }, // 0x30 '0'
    { 107,  4, 12, 10,  2, -12 }, // 0x31 '1'
    { 113,  7, 12, 10,  1, -12 }, // 0x32 '2'
    { 124,  7, 12, 10,  1, -12 }, // 0x33 '3'
    { 135,  8, 12, 10,  0, -12 }, // 0x34 '4'
    { 147,  7, 12, 10,  1, -12 }, // 0x35 '5'
    { 158,  7, 12, 10,  1, -12 }, // 0x36 '6'
    { 169,  7, 12, 10,  1, -12 }, // 0x37 '7'
    { 180,  7, 12, 10,  1, -12 }, // 0x38 '8'
    { 191,  7, 12, 10,  1, -12 }, // 0x39 '9'
    { 202,  1,  9,  5,  1,  -9 }, // 0x3A ':'
    { 204,  1, 11,  5,  1,  -9 }, // 0x3B ';'
    { 206,  7,  7, 10,  1,  -9 }, // 0x3C '<'
    { 213,  7,  5, 10,  1,  -8 }, // 0x3D '='
    { 218,  7,  7, 10,  1,  -9 }, // 0x3E '>'
    { 225,  7, 12, 10,  1, -12 }, // 0x3F '?'
    { 236, 15, 15, 17,  1, -12 }, // 0x40 '@'
    { 265,  9, 12, 12,  1, -12 }, // 0x41 'A'
    { 279,  9, 12, 12,  1, -12 }, // 0x42 'B'
    { 293, 10, 12, 13,  1, -12 }, // 0x43 'C'
    { 308, 10, 12, 13,  1, -12 }, // 0x44 'D'
    { 323,  9, 12, 12,  1, -12 }, // 0x45 'E'
    { 337,  8, 12, 11,  1, -12 }, // 0x46 'F'
    { 349, 10, 12, 13,  1, -12 }, // 0x47 'G'
    { 364,  9, 12, 12,  1, -12 }, // 0x48 'H'
    { 378,  1, 12,  4,  1, -12 }, // 0x49 'I'
    { 380,  6, 12,  9,  1, -12 }, // 0x4A 'J'
    { 389,  9, 12, 12,  1, -12 }, // 0x4B 'K'
    { 403,  7, 12, 10,  1, -12 }, // 0x4C 'L'
    { 414, 11, 12, 14,  1, -12 }, // 0x4D 'M'
    { 431,  9, 12, 12,  1, -12 }, // 0x4E 'N'
    { 445, 10, 12, 13,  1, -12 }, // 0x4F 'O'
    { 460,  9, 12, 12,  1, -12 }, // 0x50 'P'
    { 474, 10, 12, 13,  1, -12 }, // 0x51 'Q'
    { 489,  9, 12, 12,  1, -12 }, // 0x52 'R'
    { 503,  9, 12, 12,  1, -12 }, // 0x53 'S'
    { 517,  9, 12, 10,  0, -12 }, // 0x54 'T'
    { 531,  9, 12, 12,  1, -12 }, // 0x55 'U'
    { 545,  9, 12, 12,  1, -12 }, // 0x56 'V'
    { 559, 15, 12, 16,  0, -12 }, // 0x57 'W'
    { 582, 11, 12, 12,  0, -12 }, // 0x58 'X'
    { 599,  9, 12, 10,  0, -12 }, // 0x59 'Y'
    { 613,  9, 12, 10,  0, -12 }, // 0x5A 'Z'
    { 627,  3, 15,  5,  1, -12 }, // 0x5B '['
    { 633,  4, 12,  5,  0, -12 }, // 0x5C '\'
    { 639,  3, 15,  5,  0, -12 }, // 0x5D ']'
    { 645,  7,  6,  8,  0, -12 }, // 0x5E '^'
    { 651,  9,  1, 10,  0,   2 }, // 0x5F '_'
    { 653,  2,  2,  6,  1, -12 }, // 0x60 '`'
    { 654,  7,  9, 10,  1,  -9 }, // 0x61 'a'
    { 662,  7, 12, 10,  1, -12 }, // 0x62 'b'
    { 673,  6,  9,  9,  1,  -9 }, // 0x63 'c'
    { 680,  7, 12, 10,  1, -12 }, // 0x64 'd'
    { 691,  7,  9, 10,  1,  -9 }, // 0x65 'e'
    { 699,  4, 12,  5,  0, -12 }, // 0x66 'f'
    { 705,  7, 12, 10,  1,  -9 }, // 0x67 'g'
    { 716,  6, 12,  9,  1, -12 }, // 0x68 'h'
    { 725,  1, 12,  5,  1, -12 }, // 0x69 'i'
    { 727,  3, 15,  4,  0, -12 }, // 0x6A 'j'
    { 733,  7, 12,  9,  1, -12 }, // 0x6B 'k'
    { 744,  1, 12,  4,  1, -12 }, // 0x6C 'l'
    { 746, 11,  9, 14,  1,  -9 }, // 0x6D 'm'
    { 759,  6,  9,  9,  1,  -9 }, // 0x6E 'n'
    { 766,  7,  9, 10,  1,  -9 }, // 0x6F 'o'
    { 774,  7, 12, 10,  1,  -9 }, // 0x70 'p'
    { 785,  7, 12, 10,  1,  -9 }, // 0x71 'q'
    { 796,  4,  9,  6,  1,  -9 }, // 0x72 'r'
    { 801,  6,  9,  9,  1,  -9 }, // 0x73 's'
    { 808,  4, 11,  5,  0, -11 }, // 0x74 't'
    { 814,  6,  9,  9,  1,  -9 }, // 0x75 'u'
    { 821,  7,  9,  8,  0,  -9 }, // 0x76 'v'
    { 829, 11,  9, 12,  0,  -9 }, // 0x77 'w'
    { 842,  7,  9,  8,  0,  -9 }, // 0x78 'x'
    { 850,  7, 12,  8,  0,  -9 }, // 0x79 'y'
    { 861,  7,  9,  8,  0,  -9 }, // 0x7A 'z'
    { 869,  5, 15,  6,  0, -12 }, // 0x7B '{'
    { 879,  1, 15,  4,  1, -12 }, // 0x7C '|'
    { 881,  5, 15,  6,  0, -12 }, // 0x7D '}'
    { 891,  8,  2, 10,  0,  -7 }, // 0x7E '~'
    { 893,  8, 11, 13,  2, -11 }, // 0x7F ''
    { 904,  8, 12, 10,  0, -12 }, // 0x80 '€'
    { 916,  8, 11, 13,  2, -11 }, // 0x81 '�'
    { 927,  1,  3,  5,  1,  -1 }, // 0x82 '‚'
    { 928,  9, 15, 10,  0, -12 }, // 0x83 'ƒ'
    { 945,  3,  3,  6,  0,  -1 }, // 0x84 '„'
    { 947, 11,  1, 17,  2,  -1 }, // 0x85 '…'
    { 949,  7, 15, 10,  1, -12 }, // 0x86 '†'
    { 963,  7, 15, 10,  1, -12 }, // 0x87 '‡'
    { 977,  4,  2,  7,  1, -12 }, // 0x88 'ˆ'
    { 978, 17, 12, 18,  0, -12 }, // 0x89 '‰'
    {1004,  9, 15, 12,  1, -15 }, // 0x8A 'Š'
    {1021,  3,  7,  6,  1,  -8 }, // 0x8B '‹'
    {1024, 15, 12, 18,  1, -12 }, // 0x8C 'Œ'
    {1047,  8, 11, 13,  2, -11 }, // 0x8D '�'
    {1058,  9, 15, 10,  0, -15 }, // 0x8E 'Ž'
    {1075,  8, 11, 13,  2, -11 }, // 0x8F '�'
    {1086,  8, 11, 13,  2, -11 }, // 0x90 '�'
    {1097,  1,  3,  5,  1, -12 }, // 0x91 '‘'
    {1098,  1,  3,  5,  1, -12 }, // 0x92 '’'
    {1099,  3,  3,  6,  0, -12 }, // 0x93 '“'
    {1101,  3,  3,  6,  1, -12 }, // 0x94 '”'
    {1103,  4,  4,  7,  1,  -8 }, // 0x95 '•'
    {1105,  9,  1, 10,  0,  -5 }, // 0x96 '–'
    {1107, 16,  1, 17,  0,  -5 }, // 0x97 '—'
    {1109,  4,  2,  5,  0, -12 }, // 0x98 '˜'
    {1110, 13,  6, 17,  2, -12 }, // 0x99 '™'
    {1120,  6, 12,  9,  1, -12 }, // 0x9A 'š'
    {1129,  3,  7,  6,  1,  -8 }, // 0x9B '›'
    {1132, 13,  9, 16,  1,  -9 }, // 0x9C 'œ'
    {1147,  8, 11, 13,  2, -11 }, // 0x9D '�'
    {1158,  7, 12,  8,  0, -12 }, // 0x9E 'ž'
    {1169,  9, 14, 10,  0, -14 }, // 0x9F 'Ÿ'
    {1185,  0,  0,  5,  4, -15 }, // 0xA0 ' '
    {1185,  1, 12,  6,  2,  -9 }, // 0xA1 '¡'
    {1187,  7, 15, 10,  1, -12 }, // 0xA2 '¢'
    {1201,  8, 12, 10,  0, -12 }, // 0xA3 '£'
    {1213,  6,  6, 10,  1,  -9 }, // 0xA4 '¤'
    {1218,  9, 12, 10,  0, -12 }, // 0xA5 '¥'
    {1232,  1, 15,  4,  1, -12 }, // 0xA6 '¦'
    {1234,  8, 15, 10,  0, -12 }, // 0xA7 '§'
    {1249,  3,  1,  6,  0, -12 }, // 0xA8 '¨'
    {1250, 12, 12, 13,  0, -12 }, // 0xA9 '©'
    {1268,  5,  6,  6,  0, -12 }, // 0xAA 'ª'
    {1272,  6,  7, 10,  1,  -8 }, // 0xAB '«'
    {1278,  7,  5, 10,  1,  -8 }, // 0xAC '¬'
    {1283,  4,  1,  6,  0,  -4 }, // 0xAD '­'
    {1284, 12, 12, 13,  0, -12 }, // 0xAE '®'
    {1302,  9,  1, 10,  0, -13 }, // 0xAF '¯'
    {1304,  4,  4,  7,  1, -12 }, // 0xB0 '°'
    {1306,  7, 10, 10,  1, -10 }, // 0xB1 '±'
    {1315,  5,  6,  6,  0, -12 }, // 0xB2 '²'
    {1319,  5,  6,  6,  0, -12 }, // 0xB3 '³'
    {1323,  2,  2,  6,  2, -12 }, // 0xB4 '´'
    {1324,  7, 12, 10,  1,  -9 }, // 0xB5 'µ'
    {1335,  9, 15, 10,  0, -12 }, // 0xB6 '¶'
    {1352,  1,  1,  6,  2,  -6 }, // 0xB7 '·'
    {1353,  3,  3,  6,  1,   0 }, // 0xB8 '¸'
    {1355,  3,  6,  6,  1, -12 }, // 0xB9 '¹'
    {1358,  5,  6,  6,  0, -12 }, // 0xBA 'º'
    {1362,  6,  7, 10,  2,  -8 }, // 0xBB '»'
    {1368, 12, 12, 14,  1, -12 }, // 0xBC '¼'
    {1386, 12, 12, 14,  1, -12 }, // 0xBD '½'
    {1404, 13, 12, 14,  0, -12 }, // 0xBE '¾'
    {1424,  8, 12, 11,  1,  -9 }, // 0xBF '¿'
    {1436,  9, 15, 12,  1, -15 }, // 0xC0 'À'
    {1453,  9, 15, 12,  1, -15 }, // 0xC1 'Á'
    {1470,  9, 15, 12,  1, -15 }, // 0xC2 'Â'
    {1487,  9, 15, 12,  1, -15 }, // 0xC3 'Ã'
    {1504,  9, 14, 12,  1, -14 }, // 0xC4 'Ä'
    {1520,  9, 14, 12,  1, -14 }, // 0xC5 'Å'
    {1536, 15, 12, 17,  1, -12 }, // 0xC6 'Æ'
    {1559, 10, 15, 13,  1, -12 }, // 0xC7 'Ç'
    {1578,  9, 15, 12,  1, -15 }, // 0xC8 'È'
    {1595,  9, 15, 12,  1, -15 }, // 0xC9 'É'
    {1612,  9, 15, 12,  1, -15 }, // 0xCA 'Ê'
    {1629,  9, 14, 12,  1, -14 }, // 0xCB 'Ë'
    {1645,  2, 15,  4,  0, -15 }, // 0xCC 'Ì'
    {1649,  2, 15,  4,  1, -15 }, // 0xCD 'Í'
    {1653,  4, 15,  7,  1, -15 }, // 0xCE 'Î'
    {1661,  3, 14,  4,  0, -14 }, // 0xCF 'Ï'
    {1667, 11, 12, 13,  0, -12 }, // 0xD0 'Ð'
    {1684,  9, 15, 12,  1, -15 }, // 0xD1 'Ñ'
    {1701, 10, 15, 13,  1, -15 }, // 0xD2 'Ò'
    {1720, 10, 15, 13,  1, -15 }, // 0xD3 'Ó'
    {1739, 10, 15, 13,  1, -15 }, // 0xD4 'Ô'
    {1758, 10, 15, 13,  1, -15 }, // 0xD5 'Õ'
    {1777, 10, 14, 13,  1, -14 }, // 0xD6 'Ö'
    {1795,  7,  7, 10,  1,  -9 }, // 0xD7 '×'
    {1802, 10, 12, 13,  1, -12 }, // 0xD8 'Ø'
    {1817,  9, 15, 12,  1, -15 }, // 0xD9 'Ù'
    {1834,  9, 15, 12,  1, -15 }, // 0xDA 'Ú'
    {1851,  9, 15, 12,  1, -15 }, // 0xDB 'Û'
    {1868,  9, 14, 12,  1, -14 }, // 0xDC 'Ü'
    {1884,  9, 15, 10,  0, -15 }, // 0xDD 'Ý'
    {1901,  9, 12, 12,  1, -12 }, // 0xDE 'Þ'
    {1915,  7, 12, 10,  1, -12 }, // 0xDF 'ß'
    {1926,  7, 12, 10,  1, -12 }, // 0xE0 'à'
    {1937,  7, 12, 10,  1, -12 }, // 0xE1 'á'
    {1948,  7, 12, 10,  1, -12 }, // 0xE2 'â'
    {1959,  7, 12, 10,  1, -12 }, // 0xE3 'ã'
    {1970,  7, 11, 10,  1, -11 }, // 0xE4 'ä'
    {1980,  7, 13, 10,  1, -13 }, // 0xE5 'å'
    {1992, 13,  9, 15,  1,  -9 }, // 0xE6 'æ'
    {2007,  6, 12,  9,  1,  -9 }, // 0xE7 'ç'
    {2016,  7, 12, 10,  1, -12 }, // 0xE8 'è'
    {2027,  7, 12, 10,  1, -12 }, // 0xE9 'é'
    {2038,  7, 12, 10,  1, -12 }, // 0xEA 'ê'
    {2049,  7, 11, 10,  1, -11 }, // 0xEB 'ë'
    {2059,  2, 12,  4,  0, -12 }, // 0xEC 'ì'
    {2062,  2, 12,  4,  1, -12 }, // 0xED 'í'
    {2065,  4, 12,  7,  1, -12 }, // 0xEE 'î'
    {2071,  3, 11,  4,  0, -11 }, // 0xEF 'ï'
    {2076,  7, 12, 10,  1, -12 }, // 0xF0 'ð'
    {2087,  6, 12,  9,  1, -12 }, // 0xF1 'ñ'
    {2096,  7, 12, 10,  1, -12 }, // 0xF2 'ò'
    {2107,  7, 12, 10,  1, -12 }, // 0xF3 'ó'
    {2118,  7, 12, 10,  1, -12 }, // 0xF4 'ô'
    {2129,  7, 12, 10,  1, -12 }, // 0xF5 'õ'
    {2140,  7, 11, 10,  1, -11 }, // 0xF6 'ö'
    {2150,  7,  5, 10,  1,  -8 }, // 0xF7 '÷'
    {2155,  7,  9, 10,  1,  -9 }, // 0xF8 'ø'
    {2163,  6, 12,  9,  1, -12 }, // 0xF9 'ù'
    {2172,  6, 12,  9,  1, -12 }, // 0xFA 'ú'
    {2181,  6, 12,  9,  1, -12 }, // 0xFB 'û'
    {2190,  6, 11,  9,  1, -11 }, // 0xFC 'ü'
    {2199,  7, 15,  8,  0, -12 }, // 0xFD 'ý'
    {2213,  7, 15, 10,  1, -12 }, // 0xFE 'þ'
    {2227,  7, 14,  8,  0, -11 }, // 0xFF 'ÿ'
};
const GFXfont FreeArial12full PROGMEM = {
    (uint8_t  *)FreeArial12fullBitmaps,
    (GFXglyph *)FreeArial12fullGlyphs,
    32, 255, 18
};
// FreeArial12full bitmap size = 2240 [4256] [6628]