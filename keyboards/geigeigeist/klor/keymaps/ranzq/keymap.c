#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#include "keymap_finnish.h"
#include "sendstring_finnish.h"


/* The keymaps are generated from keymap.config.json by qmk json2c */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, FI_ODIA, XXXXXXX, XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, FI_COMM, FI_DOT, FI_ADIA, XXXXXXX, KC_LCTL, MO(2), KC_SPC, XXXXXXX, XXXXXXX, KC_LSFT, MO(3), KC_RCTL),
    [1] = LAYOUT(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, FI_ODIA, _______, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, FI_O, _______, _______, KC_Z, KC_X, KC_C, KC_D, KC_V, _______, _______, KC_K, KC_H, FI_COMM, FI_DOT, FI_ADIA, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [2] = LAYOUT(KC_ESC, FI_PERC, FI_DLR, FI_EURO, XXXXXXX, FI_CIRC, FI_TILD, FI_QUOT, FI_DQUO, FI_GRV, _______, FI_LABK, FI_LCBR, FI_LBRC, FI_LPRN, FI_BSLS, FI_SLSH, FI_RPRN, FI_RBRC, FI_RCBR, FI_RABK, _______, _______, FI_EXLM, FI_AT, FI_HASH, FI_AMPR, FI_PIPE, _______, _______, FI_ASTR, FI_MINS, FI_EQL, FI_PLUS, FI_QUES, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [3] = LAYOUT(KC_ESC, FI_7, FI_8, FI_9, OSM(MOD_LGUI), OSM(MOD_LGUI), KC_HOME, KC_UP, KC_END, KC_PGUP, _______, KC_TAB, FI_4, FI_5, FI_6, OSM(MOD_LALT), OSM(MOD_LALT), KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, FI_0, FI_1, FI_2, FI_3, OSM(MOD_LCTL), _______, _______, OSM(MOD_LCTL), KC_BSPC, KC_ENT, KC_DEL, OSM(MOD_RGUI), _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [4] = LAYOUT(KC_F10, KC_F7, KC_F8, KC_F9, OSM(MOD_LGUI), OSM(MOD_LGUI), KC_INS, KC_PSCR, XXXXXXX, XXXXXXX, _______, KC_F11, KC_F4, KC_F5, KC_F6, OSM(MOD_LALT), OSM(MOD_LALT), KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, _______, _______, KC_F12, KC_F1, KC_F2, KC_F3, OSM(MOD_LCTL), TG(1), RGB_TOG, OSM(MOD_LCTL), KC_VOLD, KC_MUTE, KC_VOLU, OSM(MOD_RGUI), _______, _______, _______, _______, _______, _______, _______, _______, _______)
};

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, 2, 3, 4);
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU),       ENCODER_CCW_CW(KC_PGUP,  KC_PGDN) },
    [1] = { ENCODER_CCW_CW(_______,  _______),       ENCODER_CCW_CW(_______,  _______) },
    [2] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),       ENCODER_CCW_CW(S(KC_TAB), KC_TAB) },
    [3] = { ENCODER_CCW_CW(LCTL(KC_Z), LCTL(KC_Y)),  ENCODER_CCW_CW(RGB_SPD,  RGB_SPI) },
    [4] = { ENCODER_CCW_CW(RGB_HUD,  RGB_HUI),       ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
