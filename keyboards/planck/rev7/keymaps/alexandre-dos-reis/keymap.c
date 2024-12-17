#include QMK_KEYBOARD_H
#include "accents.c"

enum planck_layers { _QWERTY, _SYMBOLS, _NUMBERS_AND_ARROWS, _ACCENTS  };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid(
    KC_TAB,   /**/  KC_Q,       KC_W,       KC_E,         KC_R,         KC_T,       /**/  KC_Y,       KC_U,                    KC_I,         KC_O,                KC_P,                 /**/ KC_BSPC,
    KC_LCTL,  /**/  KC_A,       KC_S,       KC_D,         KC_F,         KC_G,       /**/  KC_H,       KC_J,                    KC_K,         KC_L,                KC_SCLN,              /**/ KC_QUOT,
    KC_LSFT,  /**/  KC_Z,       KC_X,       KC_C,         KC_V,         KC_B,       /**/  KC_N,       KC_M,                    KC_COMM,      KC_DOT,              KC_SLSH,              /**/ KC_RSFT ,
    XXXXXXX,  /**/  XXXXXXX,    XXXXXXX,    KC_LEFT_GUI,  MO(_SYMBOLS), KC_SPACE,   /**/  KC_ENTER,   MO(_NUMBERS_AND_ARROWS), MO(_ACCENTS), XXXXXXX,             XXXXXXX,              /**/ XXXXXXX
),

[_SYMBOLS] = LAYOUT_planck_grid(
    _______, /**/   KC_EXLM,    KC_AT,      KC_HASH,      KC_DLR,       KC_PERC,    /**/  KC_CIRC,    KC_AMPR,                 KC_ASTR,      KC_LEFT_PAREN,       KC_RIGHT_PAREN,       /**/ _______,
    _______, /**/   _______,    _______,    KC_GRAVE,     KC_BACKSLASH, _______,    /**/  _______,    KC_MINUS,                KC_PLUS,      KC_LEFT_BRACKET,     KC_RIGHT_BRACKET,     /**/ _______,
    _______, /**/   _______,    _______,    KC_TILDE,     KC_PIPE,      _______,    /**/  _______,    KC_UNDERSCORE,           KC_EQUAL,     KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, /**/ _______,
    XXXXXXX, /**/   XXXXXXX,    XXXXXXX,    _______,      _______,      _______,    /**/  _______,    _______,                 KC_RIGHT_ALT, XXXXXXX,             XXXXXXX,              /**/ XXXXXXX
),

[_NUMBERS_AND_ARROWS] = LAYOUT_planck_grid(
    _______, /**/   KC_1,       KC_2,       KC_3,         KC_4,         KC_5,       /**/  KC_6,       KC_7,                    KC_8,         KC_9,                KC_0,                 /**/ _______,
    _______, /**/   _______,    G(KC_1),    G(KC_2),      G(KC_3),      G(KC_4),    /**/  KC_LEFT,    KC_DOWN,                 KC_UP,        KC_RIGHT,            XXXXXXX,              /**/ _______,
    _______, /**/   _______,    _______,    _______,      _______,      _______,    /**/  _______,    _______,                 _______,      _______,             XXXXXXX,              /**/ _______,
    XXXXXXX, /**/   XXXXXXX,    XXXXXXX,    _______,      KC_LEFT_ALT,  _______,    /**/  _______,    _______,                 KC_RIGHT_ALT, XXXXXXX,             XXXXXXX,              /**/ XXXXXXX
),


[_ACCENTS] = LAYOUT_planck_grid(
    _______, /**/   _______,    ACC_E_GRAV, ACC_E_CIRC,   ACC_E_AIGU,   _______,    /**/  ACC_Y_TREM, ACC_U_GRAV,              ACC_I_CIRC,   _______,             _______,              /**/ _______,
    _______, /**/   ACC_A_GRAV, SYMB_EURO,  ACC_E_TREM,   ACC_AE,       ACC_A_CIRC, /**/  ACC_U_TREM, ACC_U_CIRC,              ACC_U_TREM,   ACC_I_TREM,          ACC_OE,               /**/ _______,
    _______, /**/   _______,    _______,    ACC_C_CED,    _______,      _______,    /**/  _______,    _______,                 _______,      _______,             XXXXXXX,              /**/ _______,
    XXXXXXX, /**/   XXXXXXX,    XXXXXXX,    _______,      _______,      _______,    /**/  _______,    _______,                 _______,      XXXXXXX,             XXXXXXX,              /**/ XXXXXXX
)
};


/* Combos */
/* LEFT_CONTROL + SINGLE_QUOTE = ESCAPE */
const uint16_t PROGMEM esc_combo[] = {KC_LCTL, KC_QUOT, COMBO_END};

combo_t key_combos[] = {
  COMBO(esc_combo, KC_ESC),
};
