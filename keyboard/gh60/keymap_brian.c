#include "keymap_common.h"

// Poker fix with set(state transition)
// Fn + Esc = `
// Fn + {left, down, up, right}  = {home, pgdown, pgup, end}
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     RALT,FN0, MENU,RCTL),
    /* 1: Poker with Arrow */
    KEYMAP_ANSI(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,UP  ,PGDN,TRNS,TRNS,TRNS,TRNS, \
        TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,HOME,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,END, TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          MINS,                    TRNS,TRNS,TRNS,TRNS)
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    /* Custom Layout */
    [0] = ACTION_LAYER_MOMENTARY(1)
};
