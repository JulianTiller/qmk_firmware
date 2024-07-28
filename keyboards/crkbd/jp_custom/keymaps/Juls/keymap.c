/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

//qmk compile -kb crkbd/jp_custom -km Juls -c -e CONVERT_TO=elite_pi
*/
#include <keymap_german.h>
#include QMK_KEYBOARD_H

bool mouse_jiggle_mode = false;

enum custom_keycodes {
  MOUSEJIGGLERMACRO
};

enum corne_layers {
    _QWERTZ,//L0
    _QWERTY,//L1
    _COL,   //L2
    _SYM,   //L3
    //_NUM,   //L4
    _SYS,   //L4,5
    _QMK,   //L5,6
    __EMPTY
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

        [0] = LAYOUT_split_3x6_3(   KC_TAB,  DE_Q, DE_W, DE_E, DE_R, DE_T,      DE_Z, DE_U, DE_I,    DE_O,    DE_P,    KC_BSPC,
                                    KC_LSFT, DE_A, DE_S, DE_D, DE_F, DE_G,      DE_H, DE_J, DE_K,    DE_L,    DE_HASH, KC_RSFT,
                                    KC_LCTL, DE_Y, DE_X, DE_C, DE_V, DE_B,      DE_N, DE_M, DE_COMM, DE_DOT,  DE_MINS, KC_ESC,
                                                   KC_LALT, MO(3), KC_SPC,      KC_ENT, MO(3), KC_RALT
                                ),
        [1] = LAYOUT_split_3x6_3(   KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,      KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_BSPC,
                                    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,      KC_H, KC_J, KC_K,    KC_L,    KC_HASH, KC_LGUI,
                                    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT,  KC_MINS, KC_ESC,
                                                   KC_LALT, MO(3), KC_SPC,      KC_ENT, MO(3), KC_RALT
                                ),
        [2] = LAYOUT_split_3x6_3(   KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,      KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_BSPC,
                                    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,      KC_H, KC_J, KC_K,    KC_L,    KC_HASH, KC_LGUI,
                                    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT,  KC_MINS, KC_ESC,
                                                   KC_LALT, MO(3), KC_SPC,      KC_ENT, MO(3), KC_RALT
                                ),

        [3] = LAYOUT_split_3x6_3(   DE_CIRC,  DE_1,    DE_2,    DE_3,    DE_4,    DE_5,        DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS,
                                    KC_LSFT,  DE_SLSH, DE_LCBR, DE_LBRC, DE_LPRN, DE_LABK,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, DE_PLUS, KC_RSFT,
                                    KC_LCTL,  DE_BSLS, DE_RCBR, DE_RBRC, DE_RPRN, DE_RABK,     KC_PGDN, KC_PGUP, TO(4),   TO(5),   DE_PIPE, KC_NO,
                                    KC_CAPS,  KC_TRNS, KC_LGUI,                                KC_LGUI, KC_TRNS, MOUSEJIGGLERMACRO
                                ),

        //[4] = LAYOUT_split_3x6_3(   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NUM, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS,
        //                            KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO,  KC_P4, KC_P5, KC_P6, KC_PAST, KC_PSLS,
        //                            KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_P0,  KC_P1, KC_P2, KC_P3, KC_NO,   KC_EQL,
        //                            KC_NO,   KC_NO, TG(4),                                TG(4),  KC_NO , KC_NO
        //                        ),

        [4] = LAYOUT_split_3x6_3(   KC_F1,   KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                                    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,
                                    QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  QK_BOOT,
                                    KC_NO,   KC_NO, TG(4),                                TG(4), KC_NO, KC_NO
                                ),

        [5] = LAYOUT_split_3x6_3(   QK_BOOT,    KC_NO,   KC_NO,   KC_NO,   RGB_TOG, BL_BRTG,          KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   DF(0),
                                    RGB_MOD,    RGB_SPI, RGB_VAI, RGB_HUI, RGB_SAI, BL_UP,            KC_PGUP, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, DF(1),
                                    RGB_RMOD,   RGB_SPD, RGB_VAD, RGB_HUD, RGB_SAD, BL_DOWN,          KC_PGDN, KC_NO,   KC_NO,   KC_NO, KC_NO,   DF(2),
                                    KC_NO,      KC_NO, TG(5),                                         TG(5),   KC_NO,   KC_NO
                                )

/*

         [3] = LAYOUT_split_3x6_3(   DE_CIRC,  DE_1,    DE_2,    DE_3,    DE_4,    DE_5,        DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    KC_BSPC,
                                    KC_LSFT,  DE_SLSH, DE_LCBR, DE_LBRC, DE_LPRN, DE_LABK,     DE_RABK, DE_RPRN, DE_RBRC, DE_RCBR, DE_BSLS, KC_NO,
                                    KC_CAPS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                    KC_NO,    KC_TRNS, KC_NO,                                  KC_NO,   KC_NO,   KC_RALT
                                ),

        [1] = LAYOUT_split_3x6_3(   KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,       KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                                    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,      KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_LGUI,
                                    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC,
                                    TT(8), TT(7), KC_SPC,                       KC_ENT, TT(15), KC_RALT),

        [2] = LAYOUT_split_3x6_3(   KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B,       KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,
                                    KC_LSFT, KC_A, KC_R, KC_S, KC_T, KC_G,      KC_M, KC_N, KC_E, KC_I, KC_O,
                                    KC_LGUI, KC_LCTL, KC_Z, KC_X, KC_C,         KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_MINS, KC_ESC,
                                    TT(8), TT(7), KC_SPC,                       KC_ENT, TT(15), KC_RALT),
*/
};

#ifdef OLED_ENABLE

// 32 * 14 os logos
//static const char PROGMEM windows_logo[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbe, 0xbe, 0x00, 0xbe, 0xbe, 0xbf, 0xbf, 0xbf, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//static const char PROGMEM mac_logo[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf0, 0xf6, 0xfb, 0xfb, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x0f, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//static const char PROGMEM tux_logo[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x7E,0x5B,0x4F,0x5B,0xFE,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x7B,0x7F,0x78,0x30,0x20,0x20,0x30,0x78,0x7F,0x3B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

// Smart Backspace Delete

//bool            shift_held = false;
//static uint16_t held_shift = 0;

// KEYBOARD PET START

// settings
#    define MIN_WALK_SPEED      10
#    define MIN_RUN_SPEED       40

// advanced settings
#    define ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#    define ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

// timers
uint32_t anim_timer = 0;

// current frame
uint8_t current_frame = 0;

// status variables
int   current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;

// logic
static void render_luna(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {/* 'sit1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'sit2', 32x22px */
                                                   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {/* 'walk1', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90, 0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90, 0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'walk2', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20, 0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {/* 'run1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'run2', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10, 0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   }};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {/* 'bark1', 32x22px */
                                                    {
                                                        0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'bark2', 32x22px */
                                                    {
                                                        0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {/* 'sneak1', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09, 0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
                                                     },

                                                     /* 'sneak2', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40, 0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                     }};

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (led_usb_state.caps_lock) {
            oled_write_raw_P(bark[current_frame], ANIM_SIZE);

        } else if (isSneaking) {
            oled_write_raw_P(sneak[current_frame], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[current_frame], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[current_frame], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[current_frame], ANIM_SIZE);
        }
    }

#    if OLED_TIMEOUT > 0
    /* the animation prevents the normal timeout from occuring */
    if (last_input_activity_elapsed() > OLED_TIMEOUT && last_led_activity_elapsed() > OLED_TIMEOUT) {
        oled_off();
        return;
    } else {
        oled_on();
    }
#    endif

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_luna();
    }
}

// KEYBOARD PET END

static void print_status_narrow(void) {
    // Print current Layout
    oled_set_cursor(0, 0);

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTZ:
            oled_write("ISO  ", false);
            break;
        case _QWERTY:
            oled_write("ANSI ", false);
            break;
        case _COL:
            oled_write("COLEM", false);
            break;
        default:
            oled_write("UNDEF", false);
    }
    // Print current Layer
    oled_set_cursor(0, 2);

    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
            //oled_write("QWERTZ", false);
            oled_write("HOME ", false);
            break;
        case _QWERTY:
            //oled_write("ANSI", false);
            oled_write("HOME ", false);
            break;
        case _COL:
            //oled_write("COLEM", false);
            oled_write("HOME ", false);
            break;
        case _SYM:
            oled_write("SYM  ", false);
            break;
        //case _NUM:
        //    oled_write("NUM  ", false);
        //    break;
        case _SYS:
            oled_write("SYS  ", false);
            break;
        case _QMK:
            oled_write("QMK  ", false);
            break;
        default:
            oled_write("Undef", false);
    }

    // NUM lock
    oled_set_cursor(0, 3);
    if(led_usb_state.num_lock){
        oled_write("NUM  ", 1);
    }else{
        oled_write("     ", false);
    }

    // caps lock
    oled_set_cursor(0, 4);
    //oled_write("CPSLK", led_usb_state.caps_lock);
    if(led_usb_state.caps_lock){
        oled_write("CPSLK", 1);
    }else{
        oled_write("     ", false);
    }

    // mousejiggle
    oled_set_cursor(0, 5);
    //oled_write("CPSLK", led_usb_state.caps_lock);
    if(mouse_jiggle_mode){
        oled_write("JIGGL", 1);
    }else{
        oled_write("     ", false);
    }

    // KEYBOARD PET RENDER START

    render_luna(0, 13);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }
bool oled_task_user(void) {
    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    if (is_keyboard_master()) {

    } else {
        print_status_narrow();
    }
    return false;
}

#endif

uint8_t mod_state;

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
  if (mouse_jiggle_mode) {
    tap_code(KC_MS_UP);
    tap_code(KC_MS_DOWN);
    tap_code(KC_MS_LEFT);
    tap_code(KC_MS_RIGHT);
    tap_code(KC_MS_WH_UP);
    tap_code(KC_MS_WH_DOWN);
  } else {

  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();
    static bool altkey_registered;
    switch (keycode) {
        case MOUSEJIGGLERMACRO:
            if (record->event.pressed) {
                if (mouse_jiggle_mode) {
                    mouse_jiggle_mode = false;
                } else {
                    mouse_jiggle_mode = true;
                }
                // SEND_STRING(SS_DELAY(100)); //uncomment if it switches too fast before the button debounces
            } //else {}
            return true;
        case KC_BSPC:
            // Initialize a boolean variable that keeps track
            // of the delete key status: registered or not?
            static bool delkey_registered;
            if (record->event.pressed) {
                // Detect the activation of either shift keys
                if (mod_state & MOD_MASK_SHIFT) {
                    // First temporarily canceling both shifts so that
                    // shift isn't applied to the KC_DEL keycode
                    del_mods(MOD_MASK_SHIFT);
                    register_code(KC_DEL);
                    // Update the boolean variable to reflect the status of KC_DEL
                    delkey_registered = true;
                    // Reapplying modifier state so that the held shift key(s)
                    // still work even after having tapped the Backspace/Delete key.
                    set_mods(mod_state);
                    return false;
                }
            } else { // on release of KC_BSPC
                // In case KC_DEL is still being sent even after the release of KC_BSPC
                if (delkey_registered) {
                    unregister_code(KC_DEL);
                    delkey_registered = false;
                    return false;
                }
            }
            return true;
        case DE_O:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_ALT) {
                    del_mods(MOD_MASK_ALT);
                    register_code(DE_ODIA);
                    // Update the boolean variable to reflect the status of KC_DEL
                    altkey_registered = true;
                    // Reapplying modifier state so that the held shift key(s)
                    // still work even after having tapped the Backspace/Delete key.
                    set_mods(mod_state);
                    return false;
                }
            } else { // on release of KC_BSPC
                // In case KC_DEL is still being sent even after the release of KC_BSPC
                if (altkey_registered) {
                    unregister_code(DE_ODIA);
                    altkey_registered = false;
                    return false;
                }
            }
            return true;
        case DE_A:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_ALT) {
                    del_mods(MOD_MASK_ALT);
                    register_code(DE_ADIA);
                    // Update the boolean variable to reflect the status of KC_DEL
                    altkey_registered = true;
                    // Reapplying modifier state so that the held shift key(s)
                    // still work even after having tapped the Backspace/Delete key.
                    set_mods(mod_state);
                    return false;
                }
            } else { // on release of KC_BSPC
                // In case KC_DEL is still being sent even after the release of KC_BSPC
                if (altkey_registered) {
                    unregister_code(DE_ADIA);
                    altkey_registered = false;
                    return false;
                }
            }
            return true;
        case DE_U:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_ALT) {
                    del_mods(MOD_MASK_ALT);
                    register_code(DE_UDIA);
                    // Update the boolean variable to reflect the status of KC_DEL
                    altkey_registered = true;
                    // Reapplying modifier state so that the held shift key(s)
                    // still work even after having tapped the Backspace/Delete key.
                    set_mods(mod_state);
                    return false;
                }
            } else { // on release of KC_BSPC
                // In case KC_DEL is still being sent even after the release of KC_BSPC
                if (altkey_registered) {
                    unregister_code(DE_UDIA);
                    altkey_registered = false;
                    return false;
                }
            }
            return true;
        case DE_S:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_ALT) {
                    del_mods(MOD_MASK_ALT);
                    register_code(DE_SS);
                    // Update the boolean variable to reflect the status of KC_DEL
                    altkey_registered = true;
                    // Reapplying modifier state so that the held shift key(s)
                    // still work even after having tapped the Backspace/Delete key.
                    set_mods(mod_state);
                    return false;
                }
            } else { // on release of KC_BSPC
                // In case KC_DEL is still being sent even after the release of KC_BSPC
                if (altkey_registered) {
                    unregister_code(DE_SS);
                    altkey_registered = false;
                    return false;
                }
            }
            return true;
        //KEYBOARD PET STATUS START
        case KC_LCTL:
        case KC_RCTL:
            if (record->event.pressed) {
                isSneaking = true;
            } else {
                isSneaking = false;
            }
            break;
        case KC_SPC:
            if (record->event.pressed) {
                isJumping  = true;
                showedJump = false;
            } else {
                isJumping = false;
            }
            break;

        // KEYBOARD PET STATUS END
    }
    return true;
}

bool should_process_keypress(void) {
    return true;
}
