#include "s60-x.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: Default Layer (split right shift / fn)
   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   │ ESC │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │  `  │BKSPC│
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │  \  │█████│
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │CTLESC│ A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │▒▒▒▒▒│ENTER│█████│
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│RSHFT│ LY1 │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │LCTRL│L_GUI│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_GUI│ APP │RCTRL│█████│
   └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
  */

  LEGACY_KEYMAP(
    ESC,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0,  MINS,  EQL,  GRV,  BSPC,
    TAB,    Q,    W,   E,   R,   T,   Y,   U,   I,    O,    P,  LBRC,  RBRC, BSLS,
    LCTL,   A,    S,   D,   F,   G,   H,   J,   K,    L,  SCLN, QUOT,  NO,   ENT,
    LSFT,   NO,    Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,  NO,   RSFT, FN1,
    LCTL, LGUI, LALT,                SPC,                 RALT, RGUI,  APP,  RCTL
  ),

  /*
 [0] = {
   { KC_ESC,    KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,  KC_MINS,  KC_EQL,  KC_GRV,  KC_BSPC },
   { KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,  KC_LBRC,  KC_RBRC, KC_BSLS },
   { CTL_T(KC_ESC), KC_A, KC_S,  KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,  KC_SCLN, KC_QUOT,  KC_NO,   KC_ENT },
   { KC_LSFT,   KC_NO,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_NO,   KC_RSFT, F(1) },
   { KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                 KC_RALT, KC_RGUI,  KC_APP,  KC_RCTL },
  },
   */

 /* 1: FN Layer
   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   │  `  │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │     │ Del │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │PgUp │ Up  │PgDwn│     │     │     │     │     │     │PrtSc│     │     │     │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │Left │Down │Right│     │     │     │     │     │     │     │     │     │     │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │     │Home │     │ End │     │     │     │     │     │     │     │▒▒▒▒▒│ LY2 │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │
   └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
  */

  LEGACY_KEYMAP(
    GRV,  F1,   F2,   F3,     F4,   F5,   F6,   F7,   F8,   F9,   F10,     F11,  F12,  TRNS, TRNS,
    TRNS, PGUP, UP,   PGDOWN, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCREEN, TRNS, TRNS, TRNS,
    TRNS, LEFT, DOWN, RIGHT,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS,
    TRNS, TRNS, HOME, TRNS,   END,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, FN2,  TRNS,
    TRNS, TRNS, TRNS,                     TRNS,                   TRNS,    TRNS, TRNS, TRNS
  ),

 /* 2: Media Layer
   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   │  ~  │ br- │ br+ │     │     │     │     │prev │ ply │next │mute │vol- │vol+ │     │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │
   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   │     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │
   └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */

  LEGACY_KEYMAP(
    TILD, F14,  F15,  TRNS, TRNS, TRNS, TRNS, MPRV, MPLY, MNXT, MUTE, VOLD, VOLU, TRNS, TRNS,
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
    TRNS, TRNS, TRNS,                      TRNS,                TRNS, TRNS, TRNS, TRNS
  )
};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_MOMENTARY(1),
  [2] = ACTION_LAYER_MOMENTARY(2)
};

