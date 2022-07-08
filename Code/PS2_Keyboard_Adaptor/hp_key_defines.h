#ifndef HP_KEY_DEFINES_H
#define HP_KEY_DEFINES_H

/*
 * HP Keyboard key list, as per the schematic:
 * 
 * 0x00-0x07: (Nothing)
 * 
 * 0x08-0x0f:
 *   MENU
 *   CLEAR --v
 *   CLEAR -->
 *   F8
 *   F7
 *   F6
 *   F5
 *   SYSTEM
 * 
 * 0x10-0x17:
 *   8
 *   DEL LINE
 *   INS LINE
 *   BACK SP
 *   +=
 *   _-
 *   0
 *   9
 * 
 * 0x18-0x1f:
 *   I
 *   DEL CHAR
 *   INS CHAR
 *   |\
 *   }]
 *   {[
 *   P
 *   O
 * 
 * 0x20-0x27:
 *   J
 *   PREV
 *   (Upper left arrow thing)
 *   RET
 *   "'
 *   :;
 *   L
 *   K
 * 
 * 0x28-0x2f:
 *   M
 *   NEXT
 *   (Up arrow)
 *   SELECT
 *   1
 *   ?/
 *   >.
 *   <,
 * 
 * 0x30-0x37:
 *   (Nothing)
 *   (Right arrow)
 *   (Down arrow)
 *   (Left arrow)
 *   SPARE 2
 *   R.E. CHAR
 *   L.E. CHAR
 *   SPACE
 *   
 * 0x38-0x3f:
 *   F4
 *   G
 *   STOP
 *   CTRL
 *   ~`
 *   F1
 *   F2
 *   F3
 *   
 * 0x40-0x47:
 *   7
 *   L. SHIFT
 *   R. SHIFT
 *   CAP
 *   3
 *   4
 *   5
 *   6
 * 
 * 0x48-0x4f:
 *   U
 *   TAB
 *   Q
 *   W
 *   E
 *   R
 *   T
 *   Y
 * 
 * 0x50-0x57:
 *   H
 *   2
 *   SPARE 1
 *   A
 *   S
 *   D
 *   F
 *   RESET
 * 
 * 0x58-0x5f:
 *   P,
 *   PENTER
 *   P6
 *   P9
 *   P5
 *   P8
 *   P4
 *   P7
 * 
 * 0x60-0x67:
 *   PTAB
 *   P-
 *   P3
 *   P+
 *   P2
 *   P/
 *   P1
 *   P*
 * 
 * 0x68-0x6f:
 *   (Nothing)
 *   PF12
 *   P.
 *   PF11
 *   (Nothing)
 *   PF10
 *   P0
 *   PF9
 * 
 * 0x70-0x77:
 *   N
 *   ESC DEL
 *   ENTER
 *   Z
 *   X
 *   C
 *   V
 *   B
 * 
 * 0x78-0x7f: (Nothing)
 */

// HP Keyboard key definitions
#define HP_KEY_MENU              0x08
#define HP_KEY_CLEAR_DIPLAY      0x09
#define HP_KEY_CLEAR_LINE        0x0a
#define HP_KEY_F8                0x0b
#define HP_KEY_F7                0x0c
#define HP_KEY_F6                0x0d
#define HP_KEY_F5                0x0e
#define HP_KEY_SYSTEM            0x0f

#define HP_KEY_8                 0x10
#define HP_KEY_DEL_LINE          0x11
#define HP_KEY_INS_LINE          0x12
#define HP_KEY_BACKSPACE         0x13
#define HP_KEY_PLUS              0x14
#define HP_KEY_MINUS             0x15
#define HP_KEY_0                 0x16
#define HP_KEY_9                 0x17

#define HP_KEY_I                 0x18
#define HP_KEY_DEL_CHAR          0x19
#define HP_KEY_INS_CHAR          0x1a
#define HP_KEY_BACKSLASH         0x1b
#define HP_KEY_RIGHT_BRACE       0x1c
#define HP_KEY_LEFT_BRACE        0x1d
#define HP_KEY_P                 0x1e
#define HP_KEY_O                 0x1f

#define HP_KEY_J                 0x20
#define HP_KEY_PREV              0x21
#define HP_KEY_ARROW             0x22 // Upper-left arrow thing
#define HP_KEY_RETURN            0x23
#define HP_KEY_QUOTE             0x24
#define HP_KEY_COLON             0x25
#define HP_KEY_L                 0x26
#define HP_KEY_K                 0x27

#define HP_KEY_M                 0x28
#define HP_KEY_NEXT              0x29
#define HP_KEY_UP_ARROW          0x2a
#define HP_KEY_SELECT            0x2b
#define HP_KEY_1                 0x2c
#define HP_KEY_FORWARD_SLASH     0x2d
#define HP_KEY_PERIOD            0x2e
#define HP_KEY_COMMA             0x2f

#define HP_KEY_RIGHT_ARROW       0x31
#define HP_KEY_DOWN_ARROW        0x32
#define HP_KEY_LEFT_ARROW        0x33
#define HP_KEY_SPARE_2           0x34
#define HP_KEY_RIGHT_EXTEND_CHAR 0x35
#define HP_KEY_LEFT_EXTEND_CHAR  0x36
#define HP_KEY_SPACE             0x37

#define HP_KEY_F4                0x38
#define HP_KEY_G                 0x39
#define HP_KEY_STOP              0x3a
#define HP_KEY_CTRL              0x3b
#define HP_KEY_TILDE             0x3c
#define HP_KEY_F1                0x3d
#define HP_KEY_F2                0x3e
#define HP_KEY_F3                0x3f

#define HP_KEY_7                 0x40
#define HP_KEY_LEFT_SHIFT        0x41
#define HP_KEY_RIGHT_SHIFT       0x42
#define HP_KEY_CAPS_LOCK         0x43
#define HP_KEY_3                 0x44
#define HP_KEY_4                 0x45
#define HP_KEY_5                 0x46
#define HP_KEY_6                 0x47

#define HP_KEY_U                 0x48
#define HP_KEY_TAB               0x49
#define HP_KEY_Q                 0x4a
#define HP_KEY_W                 0x4b
#define HP_KEY_E                 0x4c
#define HP_KEY_R                 0x4d
#define HP_KEY_T                 0x4e
#define HP_KEY_Y                 0x4f

#define HP_KEY_H                 0x50
#define HP_KEY_2                 0x51
#define HP_KEY_SPARE_1           0x52
#define HP_KEY_A                 0x53
#define HP_KEY_S                 0x54
#define HP_KEY_D                 0x55
#define HP_KEY_F                 0x56
#define HP_KEY_RESET             0x57

#define HP_KEY_NUMPAD_COMMA      0x58
#define HP_KEY_NUMPAD_ENTER      0x59
#define HP_KEY_NUMPAD_6          0x5a
#define HP_KEY_NUMPAD_9          0x5b
#define HP_KEY_NUMPAD_5          0x5c
#define HP_KEY_NUMPAD_8          0x5d
#define HP_KEY_NUMPAD_4          0x5e
#define HP_KEY_NUMPAD_7          0x5f

#define HP_KEY_NUMPAD_TAB        0x60
#define HP_KEY_NUMPAD_MINUS      0x61
#define HP_KEY_NUMPAD_3          0x62
#define HP_KEY_NUMPAD_PLUS       0x63
#define HP_KEY_NUMPAD_2          0x64
#define HP_KEY_NUMPAD_DIVIDE     0x65
#define HP_KEY_NUMPAD_1          0x66
#define HP_KEY_NUMPAD_MULTIPLY   0x67

#define HP_KEY_NUMPAD_F12        0x69
#define HP_KEY_NUMPAD_PERIOD     0x6a
#define HP_KEY_NUMPAD_F11        0x6b
#define HP_KEY_NUMPAD_F10        0x6d
#define HP_KEY_NUMPAD_0          0x6e
#define HP_KEY_NUMPAD_F9         0x6f

#define HP_KEY_N                 0x70
#define HP_KEY_ESC_DEL           0x71
#define HP_KEY_ENTER             0x72
#define HP_KEY_Z                 0x73
#define HP_KEY_X                 0x74
#define HP_KEY_C                 0x75
#define HP_KEY_V                 0x76
#define HP_KEY_B                 0x77

#endif
