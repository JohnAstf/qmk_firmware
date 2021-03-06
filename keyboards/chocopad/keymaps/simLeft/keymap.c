#include "chocopad.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = KC_KEYMAP(
  //,----+----+----+----.
     KC_1,KC_2,KC_3,KC_4,
  //|----+----+----+----|
     KC_Q,KC_W,KC_E,KC_R,
  //|----+----+----+----|
     KC_A,KC_S,KC_D,KC_F, 
  //|----+----+----+----|
     KC_Z,KC_X,KC_C,KC_V,
  //`----+----+----+----'
  ),
};
