// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ 7 │ 8 │ 9 │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_foot_pedal_3(
        KC_P7,   KC_P8,   KC_P9
    )
};
