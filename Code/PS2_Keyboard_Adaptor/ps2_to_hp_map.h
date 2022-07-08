#ifndef PS2_TO_HP_MAP_H
#define PS2_TO_HP_MAP_H

#include "hp_key_defines.h"

/*
 * This is a mapping of PS/2 keycodes to HP key indices.
 * The index into this array is the PS/2 keycode.
 * The value at each position in the array is the index into the keyboardState array (i.e. the index of the HP keyboard key).
 */
static PROGMEM const uint8_t PS2_TO_HP_MAP[256] = {
/*0x00*/  0x00, HP_KEY_SELECT, HP_KEY_STOP, HP_KEY_CAPS_LOCK, HP_KEY_ENTER, HP_KEY_RESET, HP_KEY_LEFT_SHIFT, HP_KEY_RIGHT_SHIFT,
/*0x08*/  HP_KEY_CTRL, HP_KEY_CLEAR_DIPLAY, HP_KEY_LEFT_EXTEND_CHAR, HP_KEY_CLEAR_LINE, HP_KEY_SYSTEM, HP_KEY_ARROW, HP_KEY_MENU, HP_KEY_RESET,
/*0x10*/  0x00, HP_KEY_INS_LINE, HP_KEY_DEL_LINE, HP_KEY_PREV, HP_KEY_NEXT, HP_KEY_LEFT_ARROW, HP_KEY_RIGHT_ARROW, HP_KEY_UP_ARROW,
/*0x18*/  HP_KEY_DOWN_ARROW, HP_KEY_INS_CHAR, HP_KEY_DEL_CHAR, HP_KEY_ESC_DEL, HP_KEY_BACKSPACE, HP_KEY_TAB, HP_KEY_RETURN, HP_KEY_SPACE,
/*0x20*/  HP_KEY_NUMPAD_0, HP_KEY_NUMPAD_1, HP_KEY_NUMPAD_2, HP_KEY_NUMPAD_3, HP_KEY_NUMPAD_4, HP_KEY_NUMPAD_5, HP_KEY_NUMPAD_6, HP_KEY_NUMPAD_7,
/*0x28*/  HP_KEY_NUMPAD_8, HP_KEY_NUMPAD_9, HP_KEY_NUMPAD_PERIOD, HP_KEY_NUMPAD_ENTER, HP_KEY_NUMPAD_PLUS, HP_KEY_NUMPAD_MINUS, HP_KEY_NUMPAD_MULTIPLY, HP_KEY_NUMPAD_DIVIDE,
/*0x30*/  HP_KEY_0, HP_KEY_1, HP_KEY_2, HP_KEY_3, HP_KEY_4, HP_KEY_5, HP_KEY_6, HP_KEY_7,
/*0x38*/  HP_KEY_8, HP_KEY_9, HP_KEY_QUOTE, HP_KEY_COMMA, HP_KEY_MINUS, HP_KEY_PERIOD, HP_KEY_FORWARD_SLASH, 0x00,
/*0x40*/  HP_KEY_TILDE, HP_KEY_A, HP_KEY_B, HP_KEY_C, HP_KEY_D, HP_KEY_E, HP_KEY_F, HP_KEY_G,
/*0x48*/  HP_KEY_H, HP_KEY_I, HP_KEY_J, HP_KEY_K, HP_KEY_L, HP_KEY_M, HP_KEY_N, HP_KEY_O,
/*0x50*/  HP_KEY_P, HP_KEY_Q, HP_KEY_R, HP_KEY_S, HP_KEY_T, HP_KEY_U, HP_KEY_V, HP_KEY_W,
/*0x58*/  HP_KEY_X, HP_KEY_Y, HP_KEY_Z, HP_KEY_COLON, HP_KEY_BACKSLASH, HP_KEY_LEFT_BRACE, HP_KEY_RIGHT_BRACE, HP_KEY_PLUS,
/*0x60*/  HP_KEY_NUMPAD_COMMA, HP_KEY_F1, HP_KEY_F2, HP_KEY_F3, HP_KEY_F4, HP_KEY_F5, HP_KEY_F6, HP_KEY_F7,
/*0x68*/  HP_KEY_F8, HP_KEY_NUMPAD_F9, HP_KEY_NUMPAD_F10, HP_KEY_NUMPAD_F11, HP_KEY_NUMPAD_F12, 0x00, 0x00, 0x00,
/*0x70*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0x78*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0x80*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0x88*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0x90*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0x98*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xa0*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xa8*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xb0*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xb8*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xc0*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xc8*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xd0*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xd8*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xe0*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xe8*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xf0*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/*0xf8*/  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/*
 * List of nonstandard keyboard mappings:
 * 
 *   ESC -> HP ESC / DEL
 *   Print Screen -> HP Enter / Print
 *   Pause/Break -> HP Reset / Break
 *   Menu -> HP Menu
 *   Left Windows -> HP System
 *   Insert -> HP Insert Char
 *   Delete -> HP Delete Char
 *   Page Up -> HP Prev
 *   Page Down -> HP Next
 *   Left Alt -> HP Left Extend Char
 *   Right Alt -> HP Clear Line
 *   Right Windows -> HP Arrow
 *   Scroll Lock -> HP Stop
 *   Num Lock -> HP Select
 *   Home -> HP Insert Line
 *   End -> HP Delete Line
 *   Right Control -> HP Clear Screen
 */

/*
 * List of unmapped HP keys:
 * 
 *   Right Extend Char
 *   Spare 1
 *   Spare 2
 *   Numpad Tab
 */

/**
 * Slightly nonstandard mappings:
 * 
 *   PS/2 Numpad Comma -> HP Numpad Comma
 */

#endif
