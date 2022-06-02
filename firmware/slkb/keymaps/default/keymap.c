/* Copyright 2022 Vaibhav Srivastava
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

enum custom_keycodes {
    SCT = SAFE_RANGE,
    LBS,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SCT:
            if (record->event.pressed) {
                SEND_STRING("Scott ");
            }
            break;

        case LBS:
            if (record->event.pressed) {
                SEND_STRING("Lubbs");
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =
        {
            {SCT, LBS},
        },
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180; // flips the display 270 degrees
}

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0, 0, 0, 32, 224, 128, 0, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 208, 16, 176, 224, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 56, 240, 96, 224, 48, 16, 16, 176, 224, 0, 0, 0, 0, 240, 224, 192, 0, 0, 0, 0, 16, 240, 192, 0, 16, 48, 0, 0, 16, 240, 224, 192, 0, 0, 0, 0, 24, 240, 192, 0, 0, 0, 0, 192, 112, 224, 0, 32, 32, 48, 48, 48, 240, 16, 16, 16, 16, 16, 128, 96, 48, 16, 16, 24, 16, 48, 224, 128, 224, 48, 16, 16, 16, 240, 192, 0, 0, 0, 0, 0, 0, 0, 8, 8, 8, 127, 124, 9, 15, 120, 24, 12, 12, 248, 60, 102, 66, 75, 79, 70, 64, 0, 0, 0, 0, 0, 0, 0, 0, 193, 191, 179, 131, 131, 131, 194, 124, 56, 0, 0, 0, 0, 31, 56, 96, 192, 192, 192, 64, 127, 0, 7, 126, 224, 14, 27, 16, 16, 48, 32, 96, 0, 255, 252, 3, 6, 12, 24, 48, 96, 223, 252, 0, 0, 7, 124, 224, 0, 255, 120, 3, 6, 12, 24, 48, 96, 255, 252, 112, 28, 7, 5, 4, 7, 254, 192, 0, 0, 0, 0, 127, 192, 0, 0, 0, 14, 63, 96, 192, 192, 128, 128, 192, 64, 48, 31, 3, 63, 240, 12, 30, 17, 48, 48, 32, 96, 64, 0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

bool oled_task_user(void) {
    render_logo();
    return false;
}

#endif