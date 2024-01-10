/*
Copyright 2022 sporewoh

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

enum layers{
  BASE,
  SYM,
  NUM,
  META
};

// enum unicode_names {
//     AE,
//     AA,
//     OE,
// };

// const uint32_t unicode_map[] PROGMEM = {
//     [AE]  = 0x00E6, // 
//     [AES] = 0x00C6, // 
//     [AA]  = 0x00E5, // 
//     [AAS] = 0x00C5, // 
//     [OE]  = 0x00F8, // 
//     [OES] = 0x00D8, // 
// };

// // Norwegian letters
// #define NO_AE XP(AE, AES)
// #define NO_AA XP(AA, AAS)
// #define NO_OE XP(OE, OES)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ortho_4x10(
    NO_Q,    NO_W,    NO_E,    NO_R,    NO_T,    NO_Y,    NO_U,    NO_I,    NO_O,    NO_P,
    NO_A,    NO_S,    NO_D,    NO_F,    NO_G,    NO_H,    NO_J,    NO_K,    NO_L,    NO_SCLN,
    NO_Z,    NO_X,    NO_C,    NO_V,    NO_B,    NO_N,    NO_M,    NO_COMM, NO_DOT,  NO_SLSH,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_SPC,  MO(SYM), MO(NUM), NO_DQUO, KC_TAB,  KC_ENT
  ),
  [SYM] = LAYOUT_ortho_4x10(
    KC_ESC,  NO_AT,   NO_DLR,  NO_EURO, _______, _______, KC_UP,   _______, _______, NO_ARNG,
    _______, NO_PLUS, NO_SLSH, NO_QUES, _______, KC_LEFT, KC_DOWN, KC_RGHT, NO_OSTR, NO_AE,
    _______, NO_PIPE, NO_LABK, NO_BSLS, _______, _______, _______, _______, _______, KC_PGUP,
    _______, _______, _______, _______, KC_BSPC, _______, _______, _______, _______, KC_PGDN
  ),
  [NUM] = LAYOUT_ortho_4x10(
    KC_MUTE, KC_VOLD, KC_VOLU, NO_LBRC, NO_RBRC, KC_0,    KC_1,    KC_2,    KC_3,    KC_TAB,
    _______, KC_BRID, KC_BRIU, NO_LPRN, NO_RPRN, NO_MINS, KC_4,    KC_5,    KC_6,    KC_BSPC,
    KC_MRWD, KC_MPLY, KC_MFFD, NO_LCBR, NO_RCBR, NO_EQL,  KC_7,    KC_8,    KC_9,    KC_ENT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [META] = LAYOUT_ortho_4x10(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, _______, _______, _______, QK_BOOT,
    KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, _______, _______, _______, _______, _______,
    KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, _______, EE_CLR,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
};
