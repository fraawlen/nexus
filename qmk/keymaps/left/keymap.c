// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬  ───┐
     * │ A │ B │ C │ D │ E │ F │ G │   H │
     * ├───┼───┼───┼───┼───┼───┼───┼  ───┤
     * │ A │   │ C │ D │ E │ F │ G │   H │
     * ├───┼───┼───┼───┼───┼───┼───┼  ───┤
     * │ A │   │ C │ D │ E │ F │ G │   H │
     * ├───┼───┼───┼───┼───┼───┼───┼  ───┤
     * │ A │ B │ C │ D │ E │ F │ G │   H │
     * ├───┼───┼───┼───┼───┼───┼───┼  ───┤
     * │ A │ B │ C │   │   │   │   │   H │
     * └───┴───┴───┴───┴───┴───┴───┴  ───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5 ,   KC_INS,
        KC_TAB,  KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LCTL,
        KC_CAPS, KC_NO,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LSFT,
        KC_LALT, KC_UP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(1)
    ),

    [1] = LAYOUT(
        KC_VOLD, KC_VOLU, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   QK_BOOT,
        KC_MUTE, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_PGUP, _______, _______, _______, _______, _______, _______,
        KC_HOME, KC_PGDN, KC_END,  _______, _______, _______, _______, _______
    )
};
