#include QMK_KEYBOARD_H
#define LAYOUT LAYOUT_ortho_3x10


enum layers {
    _QWERTY,
    _SYMBOLS, 
    _NUMBERS,
    _NAVIGATION,
    LAYER_LENGTH
};

#define QESC KC_Q
#define ATAB KC_A
#define QENT KC_QUOT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        QESC,       KC_W,       KC_E,       KC_R,       KC_T,            KC_Y,      KC_U,       KC_I,       KC_O,       KC_P,       \
        ATAB,       KC_S,       KC_D,       KC_F,       KC_G,            KC_H,      KC_J,       KC_K,       KC_L,       QENT,    \
        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,            KC_N,      KC_M,       KC_COMM,    KC_DOT,     KC_SLSH
  ),
};
