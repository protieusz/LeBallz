/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum combo_events {
  COMBO_DEL,
  COMBO_ESC,
  COMBO_CTRL,
  COMBO_ALT,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_del[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM combo_ctrl[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_alt[] = {KC_O, KC_P, COMBO_END};

combo_t key_combos[] = {
  [COMBO_DEL] = COMBO(combo_del, KC_DEL),
  [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
  [COMBO_CTRL] = COMBO(combo_ctrl, KC_LCTL),
  [COMBO_ALT] = COMBO(combo_alt, KC_RALT),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, 1, 2, 3);
} 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
        KC_Q,         KC_W, KC_E,    KC_R,    KC_T,              SCRL_MO,    KC_Y,          KC_U,          KC_I,     KC_O,   KC_P,
        KC_A,         KC_S, KC_D,    KC_F,    KC_G,                          KC_H,          KC_J,          KC_K,     KC_L,   KC_SCLN,
        LSFT_T(KC_Z), KC_X, KC_C,    KC_V,    KC_B,                          KC_N,          KC_M,          KC_COMMA, KC_DOT, RSFT_T(KC_SLSH),
                            KC_LGUI,          LT(1,KC_BSPC),                 LT(2,KC_SPC),                 (KC_ENT)                         
    ),
    [1] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_ESC,                   KC_6,     KC_7,    KC_8,    KC_9,    KC_0,
        KC_TAB,  _______, KC_MUTE, KC_VOLD, KC_VOLU,                                          KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,
        _______, SCRL_MO, KC_MS_BTN2, KC_MS_BTN1, _______,                                    KC_TILD,  KC_GRV,  _______, _______, KC_BSLS,
                          _______,          _______,                                          _______,           _______                  
    ),
    [2] = LAYOUT(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,          _______,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        _______,  _______,  _______,  _______, _______,                                  _______,  _______,  _______, _______, _______, 
        _______,  _______,  _______,  _______, _______,                                  _______,  _______, _______, _______, _______,
                            _______,           _______,                                  _______,           _______
    ), 
    [3] = LAYOUT(
        _______, KC_UP, _______, _______, _______,               KC_CAPS,                    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_PSCR,
        KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,                                        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,
        _______, _______, ROT_L15, ROT_R15, CPI_SW,                                          KC_F10,  KC_F11,  KC_F12,  _______, _______,
                         _______,            _______,                                        _______,          _______
    )
};
