/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------.
   * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | BSP |
   * |-----------------------------------------------------------------------+
   * | Caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Enter  |
   * |-----------------------------------------------------------------------+
   * |  Shift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  Alt  |Shift|
   * |-----------------------------------------------------------------------+
   * | Ctrl  | GUI | Alt |               Space               |  L1  |  Ctrl  |
   * `-----------------------------------------------------------------------'
   */
  [0] = LAYOUT_40_ansi(
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_RCTL
  ),

  /* Function
   * ,-----------------------------------------------------------------------.
   * | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | Del |
   * |-----------------------------------------------------------------------+
   * |       |Left |Down |Right|     |     |     |     |     | Ins |  Home   |
   * |-----------------------------------------------------------------------+
   * |         |VolUp|VolDn|VolMu|     |     |     |     |     |  End  |PgDn |
   * |-----------------------------------------------------------------------+
   * |       |     |     |                                   |      |        |
   * `-----------------------------------------------------------------------'
   */
  [1] = LAYOUT_40_ansi(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_DEL,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_HOME,
    KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_PGDN,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
};
