/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // colemak
  [0] = LAYOUT_right_ball(
    KC_ESC   , KC_Q     , KC_W     , LT(3,KC_F)   , KC_P     , KC_B     ,                                      KC_J     , KC_L     , KC_U     , KC_Y     , KC_SCLN  , KC_BSLS  ,
    KC_TAB   , LSFT_T(KC_A) , LT(8,KC_R)   , LT(1,KC_S)   , LT(6,KC_T)   , KC_G     ,                       KC_M     , LT(6,KC_N)   , LT(1,KC_E)   , LT(8,KC_I)   , RSFT_T(KC_O) , KC_QUOT  ,
    KC_LSFT  , LGUI_T(KC_Z) , LALT_T(KC_X) , LCTL_T(KC_C) , KC_D     , KC_V     ,                       KC_K     , KC_H     , RCTL_T(KC_COMM) , RALT_T(KC_DOT) , RGUI_T(KC_SLSH) , KC_DEL   ,
              KC_LCTL , KC_LALT , LT(5,KC_LGUI) , KC_BSPC , LT(2,KC_TAB) ,                      KC_SPC  , KC_ENT  , MS_BTN1
  ),

  // num-media
  [1] = LAYOUT_right_ball(
    KC_TRNS  , KC_TRNS  , KC_VOLD  , KC_TRNS  , KC_VOLU  , KC_TRNS  ,                                      KC_TRNS  , KC_7    , KC_8      , KC_9    , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_4    , KC_5      , KC_6    , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_BRID  , KC_TRNS  , KC_BRIU  , KC_TRNS  ,                                      KC_TRNS  , KC_1    , KC_2      , KC_3    , KC_TRNS  , KC_TRNS  ,
              KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_0   , KC_TRNS
  ),

  // settings (BT/KB replaced: BT keys removed for wired QMK)
  [2] = LAYOUT_right_ball(
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
              TO(0)    , TO(7)    , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_TRNS  , QK_BOOT
  ),

  // func
  [3] = LAYOUT_right_ball(
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_F4    , KC_F5    , KC_F6    , KC_F11   , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_F1    , KC_F2    , KC_F3    , KC_F12   , KC_TRNS  ,
              KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_TRNS  , KC_TRNS
  ),

  // mouse (automouse layer)
  [4] = LAYOUT_right_ball(
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
              KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_TRNS  , KC_TRNS
  ),

  // scroll (trackball scroll mode)
  [5] = LAYOUT_right_ball(
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
              KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_TRNS  , KC_TRNS
  ),

  // sym/nav
  [6] = LAYOUT_right_ball(
    KC_TILD  , KC_TRNS  , KC_EQL   , KC_LCBR  , KC_RCBR  , KC_TRNS  ,                                      KC_PGUP  , KC_HOME  , KC_UP    , KC_END   , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_MINS  , KC_LPRN  , KC_RPRN  , KC_TRNS  ,                                      KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_LBRC  , KC_RBRC  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_PSCR  ,
              KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_TRNS  , KC_TRNS
  ),

  // qwerty
  [7] = LAYOUT_right_ball(
    KC_ESC   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                      KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_BSPC  ,
    KC_LSFT  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                      KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LCTL  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                      KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
              TO(0)    , KC_LALT  , KC_BSPC  , KC_SPC   , LT(2,KC_TAB) ,                            KC_RGUI  , KC_ENT   , MS_BTN1
  ),

  // keymouse
  [8] = LAYOUT_right_ball(
    KC_TRNS  , KC_TRNS  , KC_TRNS  , MS_BTN3  , KC_TRNS  , KC_TRNS  ,                                      MS_WHLU  , MS_BTN4  , MS_UP    , MS_BTN5  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , MS_BTN2  , MS_BTN1  , KC_TRNS  ,                                      MS_WHLD  , MS_LEFT  , MS_DOWN  , MS_RGHT  , KC_TRNS  , KC_TRNS  ,
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                                      KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,
              KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,                            KC_TRNS  , KC_TRNS  , KC_TRNS
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 5
    keyball_set_scroll_mode(get_highest_layer(state) == 5);
    return state;
}

void keyboard_post_init_user(void) {
    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_FREE);
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
