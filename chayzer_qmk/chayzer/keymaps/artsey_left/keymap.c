//REPLACE THIS WITH YOUR KEYBOARD.h 
#include "chayzer.h"

//MAKE SURE THESE ARE INCLUDED
#include "artsey.h"
#include "keymap_combo.h"
#include "artsey.c"
#ifdef OLED_DRIVER_ENABLE
  #include "oled.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_A_BASE] = LAYOUT(A_BASE_S, A_BASE_T, A_BASE_R, A_BASE_A, KC_NO, KC_NO, KC_NO,
                   A_BASE_O, A_BASE_I, A_BASE_Y, A_BASE_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

[_A_NUM] = LAYOUT(A_NUM_S, A_NUM_T, A_NUM_R, A_NUM_A, KC_NO, KC_NO, KC_NO,
                  A_NUM_O, A_NUM_I, A_NUM_Y, A_NUM_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

[_A_NAV] = LAYOUT(A_NAV_S, A_NAV_T, A_NAV_R, A_NAV_A, KC_NO, KC_NO, KC_NO, 
                  A_NAV_O, A_NAV_I, A_NAV_Y, A_NAV_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

[_A_SYM] = LAYOUT(A_SYM_S, A_SYM_T, A_SYM_R, A_SYM_A, KC_NO, KC_NO, KC_NO, 
                  A_SYM_O, A_SYM_I, A_SYM_Y, A_SYM_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

[_A_BRAC] = LAYOUT(A_BRAC_S, A_BRAC_T, A_BRAC_R, A_BRAC_A, KC_NO, KC_NO, KC_NO, 
                   A_BRAC_O, A_BRAC_I, A_BRAC_Y, A_BRAC_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

[_A_MOU] = LAYOUT(A_MOU_S, A_MOU_T, A_MOU_R, A_MOU_A, KC_NO, KC_NO, KC_NO, 
                  A_MOU_O, A_MOU_I, A_MOU_Y, A_MOU_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

[_A_CUSTOM] = LAYOUT(A_CUSTOM_S, A_CUSTOM_T, A_CUSTOM_R, A_CUSTOM_A, KC_NO, KC_NO, KC_NO, 
                     A_CUSTOM_O, A_CUSTOM_I, A_CUSTOM_Y, A_CUSTOM_E, KC_LSHIFT, KC_MUTE, A_BASE_S),

};

// ROTARY ENCODER WORK
void encoder_update_user(int8_t index, bool clockwise) {
    
    switch (get_highest_layer(layer_state)) {
        case _A_BASE:
            if (clockwise) {
                tap_code(KC_AUDIO_VOL_DOWN);
            } else {
                tap_code(KC_AUDIO_VOL_UP);
            }
            break;
        case _A_NUM:
            if (clockwise) {
                // reserved for later
            } else {
                // reserved for later
            }
            break;
        case _A_SYM:
            if (clockwise) {
                // reserved for later
            } else {
                // reserved for later
            }
            break;
        case _A_BRAC:
            if (clockwise) {
                // reserved for later
            } else {
                // reserved for later
            }
            break;
        case _A_CUSTOM:
            if(clockwise) {
                // reserved for later
            } else {
                // reserved for later
            }
        default:
            if (clockwise) {
                tap_code(KC_AUDIO_VOL_UP);
            } else {
                tap_code(KC_AUDIO_VOL_DOWN);
            }
    } // END SWITCH
  }
