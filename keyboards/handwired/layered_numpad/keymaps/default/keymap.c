#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_numpad_4x5(
    KC_NUM, KC_PSLS,  KC_PAST, KC_PMNS,
    KC_P7,   KC_P8,   KC_P9,   
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,   KC_P2,   KC_P3,   
        KC_P0,        KC_DOT,  KC_PENT
  )
};
