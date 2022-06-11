#include QMK_KEYBOARD_H
#define LAYOUT LAYOUT_ortho_3x10


enum layers {
    _QWERTY,
    _SYMBOLS, 
    _NUMBERS,
    _NAVIGATION,
    LAYER_LENGTH
};

enum combos {
    COMBO_SPACE,
    COMBO_SHIFT,
    COMBO_BACKS,
    // COMBO_ENTER,
    COMBO_LENGTH
};

enum tapdances {
    TD_QESC, 
    TD_ATAB,
    TD_QENT,
    TAPDANCE_LENGTH
};

#define QESC TD(TD_QESC)
#define ATAB TD(TD_ATAB)
#define QENT TD(TD_QENT)


uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM combo_space[] = { KC_J, KC_F, COMBO_END };
const uint16_t PROGMEM combo_shift[] = { KC_S, KC_D, COMBO_END };
// const uint16_t PROGMEM combo_enter[] = { KC_L, KC_QUOT, COMBO_END };
const uint16_t PROGMEM combo_backspace[] = { KC_K, KC_L, COMBO_END };


combo_t key_combos[] = { 
    [COMBO_SPACE] = COMBO(combo_space, KC_SPC),
    [COMBO_SHIFT] = COMBO(combo_shift, OSM(MOD_LSFT)), 
    [COMBO_BACKS] = COMBO(combo_backspace, KC_BSPC)
    // [COMBO_ENTER] = COMBO(combo_enter, KC_ENT)
};


qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_QESC]   = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
    [TD_ATAB]   = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_TAB),
    [TD_QENT]    = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_ENT)
};

const key_override_t **key_overrides = (const key_override_t *[]) {
    NULL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        QESC,       KC_W,       KC_E,       KC_R,       KC_T,            KC_Y,      KC_U,       KC_I,       KC_O,       KC_P,       \
        ATAB,       KC_S,       KC_D,       KC_F,       KC_G,            KC_H,      KC_J,       KC_K,       KC_L,       QENT,    \
        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,            KC_N,      KC_M,       KC_COMM,    KC_DOT,     KC_SLSH
  ),
};
