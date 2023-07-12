#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                    KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_ESC ,
        KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                    KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                    KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                          _______, _______,                                                        _______, _______,
                                            LOWER  ,ALT_T(KC_ENT),               ALL_T(KC_SPC), KC_BSPC,
                                            KC_LCMD, _______,                    _______,  RAISE ,
                                            _______, _______,                    _______, _______
    ),

    [_LOWER] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
        _______, KC_P1  , KC_P2  , KC_P3  , KC_P4  , KC_P5  ,                    KC_MINS, KC_EQL , KC_GRV , KC_LBRC, KC_RBRC, KC_PIPE,
        KC_LSFT, KC_P6  , KC_P7  , KC_P8  , KC_P9  , KC_P0  ,                    KC_UNDS, KC_PLUS, KC_TILD, KC_LCBR, KC_RCBR, KC_RSFT,
                          _______, _______,                                                        _______, _______,
                                            _______,ALT_T(KC_ENT),               ALL_T(KC_SPC), KC_BSPC,
                                            KC_LCMD, _______,                    _______, _______,
                                            _______, _______,                    _______, _______
    ),

    [_RAISE] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
        _______, KC_P1  , KC_P2  , KC_P3  , KC_P4  , KC_P5  ,                    KC_MINS, KC_EQL , KC_GRV , KC_LBRC, KC_RBRC, KC_PIPE,
        KC_LSFT, KC_P6  , KC_P7  , KC_P8  , KC_P9  , KC_P0  ,                    KC_UNDS, KC_PLUS, KC_TILD, KC_LCBR, KC_RCBR, KC_RSFT,
                          _______, _______,                                                        _______, _______,
                                            _______,ALT_T(KC_ENT),               ALL_T(KC_SPC), KC_BSPC,
                                            KC_LCMD, _______,                    _______, _______,
                                            _______, _______,                    _______, _______
    )
};
