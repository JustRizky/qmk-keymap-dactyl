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
                                            _______, KC_LGUI,                    RAISE  , _______,
                                            _______, _______,                    _______, _______
    ),

    [_LOWER] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                    KC_MINS, KC_EQL , KC_GRV , KC_LBRC, KC_RBRC, KC_PIPE,
        KC_LSFT, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,                    KC_UNDS, KC_PLUS, KC_TILD, KC_LCBR, KC_RCBR, KC_RSFT,
                          _______, _______,                                                        _______, _______,
                                            _______,ALT_T(KC_ENT),               ALL_T(KC_SPC), KC_BSPC,
                                            _______, KC_LGUI,                    _______, _______,
                                            _______, _______,                    _______, _______
    ),

    [_RAISE] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
        _______, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY,                    KC_LEFT, KC_DOWN, KC_UP  ,KC_RIGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                        _______, _______,
                                            _______, _______,                    _______, _______,
                                            _______, _______,                    _______, _______,
                                            _______, _______,                    _______, _______
    )
};
