// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──  ─┬───┬───┬───┬───┬───┬───┬───┐
     * │ A   │ B │ C │ D │ E │ F │ G │ H │
     * ├───  ┼───┼───┼───┼───┼───┼───┼───┤
     * │ A   │ B │ C │ D │ E │ F │ G │ H │
     * ├───  ┼───┼───┼───┼───┼───┼───┼───┤
     * │ A   │ B │ C │ D │ E │ F │ G │   │
     * ├───  ┼───┼───┼───┼───┼───┼───┼───┤
     * │ A   │ B │ C │ D │ E │ F │ G │   │
     * ├───  ┼───┼───┼───┼───┼───┼───┼───┤
     * │     │   │   │   │   │ F │ G │   │
     * └───  ┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_RGUI, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_BSPC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_SPC,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NO,  
        KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_NO,  
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RCTL, MO(1),   KC_NO
    ),

    [1] = LAYOUT(
        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   
        KC_DEL,  _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        QK_BOOT, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______
    )
};
