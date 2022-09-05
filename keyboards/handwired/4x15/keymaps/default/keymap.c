#include QMK_KEYBOARD_H

enum layer_names {
    _40ANDNUMPAD,
};

enum custom_keycodes {
    40ANDNUMPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_40ANDNUMPAD] = LAYOUT_ortho_4x15(
    KC_ESC   , KC_Q   , KC_W   , KC_E    , KC_R   , KC_T    , KC_Y   , KC_U   , KC_I    , KC_O   , KC_P     , KC_BSPACE, KC_7   , KC_8   , KC_9   , KC_NUM ,
    KC_CAPS  , KC_A   , KC_S   , KC_D    , KC_F   , KC_G    , KC_H   , KC_J   , KC_K    , KC_L   , KC_ENTER , KC_4     , KC_5   , KC_6   , KC_+   ,
    KC_LSHIFT, KC_Z   , KC_X   , KC_C    , KC_V   , KC_B    , KC_N   , KC_M   , _______ , FN     , KC_RSHIFT, KC_UP    , KC_1   , KC_2   , KC_3   , KC_ENTER,
    KC_LCTRL , KC_WIN , KC_LALT, KC_SPACE, KC_RALT, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_0   , KC_DOT   , KC_ENTER , _______, _______, _______, _______	
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state);
}
