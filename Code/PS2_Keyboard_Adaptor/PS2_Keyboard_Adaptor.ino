#include "PS2KeyAdvanced.h"

#include "hp_key_defines.h"
#include "ps2_to_hp_map.h"

// All HP keyboard signals are +12V max, so the Arduino needs some supporting circuitry for level shifting! (See schematic)
// HP_SYNC and HP_DATA_OUT are inverted (see schematic)

#define PS2_IRQ 3
#define PS2_DATA 4

#define HP_IRQ 2
#define HP_CLK 5
#define HP_SYNC 6
#define HP_DATA_OUT 7

#define HP_CLK_BIT (1 << HP_CLK)
#define HP_SYNC_BIT (1 << HP_SYNC)
#define HP_DATA_OUT_BIT (1 << HP_DATA_OUT)

// Used particularly by HP_KEY_RESET to auto-break after a set number of keyboard frames
#define HP_KEY_BREAK_FRAMES 5


PS2KeyAdvanced ps2Keyboard;

// This is the HP keyboard state.
// Every entry in this array is one bit of keyboard data.
// The first 8 entries need to always be zero (these do not correspond to any HP keys).
// The last 8 entries need to mostly be zero, with the exception of 0x7c, which must always be 1.
volatile uint8_t keyboardState[128];
volatile uint8_t hpClockCount;


void setup() {
  // Initial keyboard state
  for (int i = 0; i < 128; ++i) {
    keyboardState[i] = 0;
  }
  keyboardState[0x7c] = 1;
  hpClockCount = 0;

  pinMode(HP_IRQ, INPUT);
  pinMode(HP_CLK, INPUT);
  pinMode(HP_SYNC, INPUT);
  pinMode(HP_DATA_OUT, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(HP_IRQ), handleHPInterrupt, FALLING);
  ps2Keyboard.begin(PS2_DATA, PS2_IRQ);
}

void loop() {
  if (ps2Keyboard.available()) {
    uint16_t data = ps2Keyboard.read();
    uint8_t code = static_cast<uint8_t>(data & 0xff);
    uint8_t hpKey = pgm_read_byte(PS2_TO_HP_MAP + code);
    if (hpKey > 0) {
      keyboardState[hpKey] = (data & PS2_BREAK) > 0 ? 0 : HP_KEY_BREAK_FRAMES;
    }
  }
}

void handleHPInterrupt() {
  if ((PIND & HP_SYNC_BIT) == 0) {
    hpClockCount = 0;

    // This key code has no break, so we have to break it ourselves. Why not at a keyboard frame?
    if (keyboardState[HP_KEY_RESET] > 0) {
      --keyboardState[HP_KEY_RESET];
    }
  } else {
    hpClockCount = (hpClockCount + 1) & 0x7f;
    if (keyboardState[hpClockCount] > 0) {
      PORTD = PORTD & ~HP_DATA_OUT_BIT;
    } else {
      PORTD = PORTD | HP_DATA_OUT_BIT;
    }
  }
}
