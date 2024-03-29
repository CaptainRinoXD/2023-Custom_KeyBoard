#include QMK_KEYBOARD_H
// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
#define _______ KC_TRNS
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.

enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT(
        KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,   KC_F11,  KC_F12,  KC_DEL,
        KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,  KC_MINS,  KC_EQL,  KC_BSPC,     KC_PSCR,
        KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,  KC_LBRC,  KC_RBRC, KC_BSLS,     KC_HOME,
        KC_CAPS, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,  KC_SCLN,  KC_QUOT,  KC_ENT,              KC_PGUP,
        KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,             KC_UP,    KC_PGDN,
        KC_LCTL, KC_RWIN, KC_LALT,             KC_SPC,                   KC_RALT, LT(_FN,XXXXXXX), KC_RCTL,      KC_LEFT,KC_DOWN,KC_RGHT
    ),
    [_FN] = LAYOUT(
        _______,_______,KC_BRID,KC_BRIU,KC_CALC,KC_MUTE, KC_VOLD, KC_VOLU,KC_MPRV,KC_MNXT,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,           _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,           _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                   _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                 _______,  _______,
        _______,_______,_______,                _______,                 _______,_______,       _______,         _______,_______,_______
    ),
};

