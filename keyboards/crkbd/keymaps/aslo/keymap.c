#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk-compile-json. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_SCLN, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_LSFT, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_RSFT, KC_LCTL, KC_MINS, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, TG(5), KC_LALT, MO(3), KC_ENT, KC_SPC, MO(2), KC_LGUI),
	[1] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TG(5), KC_LALT, MO(3), KC_ENT, KC_SPC, MO(2), KC_LGUI),
	[2] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_PSCR, KC_NO, KC_NO, KC_BSPC, KC_LSFT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, MO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_GRV, KC_LBRC, KC_COMM, KC_DOT, RALT(KC_GRV), KC_NUBS, RSFT(KC_NUBS), KC_SLSH, RALT(KC_LBRC), RALT(KC_RBRC), KC_QUOT, KC_BSPC, KC_LSFT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_RSFT, KC_LCTL, KC_MINS, RALT(KC_2), RALT(KC_3), RALT(KC_4), KC_NO, RALT(KC_1), KC_RBRC, RALT(KC_QUOT), RALT(KC_NUHS), RSFT(KC_LBRC), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS),
	[4] = LAYOUT(RESET, BL_TOGG, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, TO(6), KC_NO, KC_NO, KC_NO, KC_PWR, KC_NO, BL_STEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), DF(1), KC_NO, KC_NO, KC_WAKE, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_APP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS),
	[6] = LAYOUT(TG(6), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_ACL2, KC_ACL1, KC_ACL0, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3)
};
