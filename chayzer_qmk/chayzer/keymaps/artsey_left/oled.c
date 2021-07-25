void hLine(int x, int y, int width) {
    for(int i = 0; i < width; i++) {
        oled_write_pixel(x + i, y, 1);
    }
}

void vLine(int x, int y, int height) {
    for(int i = 0; i < height; i++) {
        oled_write_pixel(x, y + i, 1);
    }
}

void dBox (int x, int y) {
    hLine(x + 1, y, 11);
    hLine(x + 1, y + 16, 11);
    vLine(x, y + 1, 15);
    vLine(x + 12, y + 1, 15);
}

// OLED WORK


void oled_task_user(void) {
    // Host Keyboard Layer Status
    //oled_set_cursor(0,0);

    //oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _A_BASE:
            //oled_write_P(PSTR("Default\n"), false);
            oled_write_P(PSTR("\n       S T R A \n"), false);
            oled_write_P(PSTR("\n       O I Y E \n"), false);
            break;
        case _A_NUM:
            oled_write_P(PSTR("          8 7"), false);
            oled_write_P(PSTR("\n         3 2 1\n"), false);
            oled_write_P(PSTR("\n         6 5 4\n"), false);
            oled_write_P(PSTR("          0 9"), false);
            break;
        case _A_SYM:
            oled_write_P(PSTR("\n       ` \\ ; !\n"), false);
            oled_write_P(PSTR("\n       = - ?  \n"), false);
            break;
        case _A_BRAC:
            oled_write_P(PSTR("\n       } ( )\n"), false);
            oled_write_P(PSTR("\n       { [ ] | \n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    //oled_set_cursor(0,8);
    oled_write_P(PSTR("\n\n\n"), false);
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    //dBox(38, 3); dBox(38, 19); dBox(50, 3); dBox(50, 19); dBox(62, 3); dBox(62, 19); dBox(74, 3); dBox(74, 19);
}