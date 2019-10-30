#include "chocopad.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = KC_KEYMAP(
  //,----+----+----+----.
     KC_5,KC_6,KC_7,KC_8,
  //|----+----+----+----|
     KC_T,KC_Y,KC_U,KC_I,
  //|----+----+----+----|
     KC_G,KC_H,KC_J,KC_K, 
  //|----+----+----+----|
     KC_B,KC_N,KC_M,KC_COMMA,
  //`----+----+----+----'
  ),
};
