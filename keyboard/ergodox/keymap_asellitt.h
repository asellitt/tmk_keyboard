static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layers:
     *  0: QWERTY
     *  1: Function
     *
     * Keymap: Default Layer 0, QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | `      |   1  |   2  |   3  |   4  |   5  |  {   |           |   -  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TAB    |   Q  |   W  |   E  |   R  |   T  |  [   |           |  ]   |   Y  |   U  |   I  |   O  |   P  |   '    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | ESC    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   \    |
     * |--------+------+------+------+------+------|  =>  |           |  :   |------+------+------+------+------+--------|
     * |  LSFT  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |  RSFT  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  ~L1 |      | LEFT | RGHT | LGUI |                                       | RGUI |  UP  | DOWN |      | ~L1  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | PGUP | PGDN |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BSPC | DEL  |------|       |------| ENT  | SPC  |
     *                                 |      |      | LCtl |       | RCtl |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap: Layer 1, Arrows, Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Vol+  |  F1  |  F2  |  F3  |  F4  |  F5  | xxxx |           | xxxx |  F6  |  F7  |  F8  |  F9  |  F10 | Teensy |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Vol-  |      |  Up  |      |      |      | Next |           | Prev | MWUP | MUP  | MWDN |      |      |        |
     * |--------+------+------+------+------+------| Trck |           | Trck |------+------+------+------+------+--------|
     * |  ESC   | Left | Down | Rght |      |      |------|           |------| MLFT | MDWN | MRGT |      |      |        |
     * |--------+------+------+------+------+------| Mute |           | Play |------+------+------+------+------+--------|
     * |  LSFT  |      |      |      |      |      |      |           | Paus | LCLK |      | RCLK |      |      |  RSFT  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  ~L1 |      | LEFT | RGHT | LGUI |                                       | RGUI |  UP  | DOWN |      | ~L1  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | PGUP | PGDN |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BSPC | DEL  |------|       |------| ENT  | SPC  |
     *                                 |      |      | LCtl |       | RCtl |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // layer 0 : default, QWERTY
        // left hand
        GRV ,1   ,2   ,3   ,4   ,5   ,FN6 ,
        TAB ,Q   ,W   ,E   ,R   ,T   ,LBRC,
        ESC ,A   ,S   ,D   ,F   ,G   ,
        LSFT,Z   ,X   ,C   ,V   ,B   ,FN4 ,
        FN1 ,NO  ,LEFT,RGHT,LGUI,
                                      HOME,END ,
                                           LALT,
                                 BSPC,DEL ,RCTL,
        // right hand
             MINS,6   ,7   ,8   ,9   ,0   ,EQL ,
             RBRC,Y   ,U   ,I   ,O   ,P   ,QUOT,
                  H   ,J   ,K   ,L   ,SCLN,BSLS,
             FN5 ,N   ,M   ,COMM,DOT, SLSH,RSFT,
                       RGUI,UP  ,DOWN,NO  ,FN1 ,
        PGUP,PGDN,
        RALT,
        RCTL,ENT ,SPC
    ),

    KEYMAP(  // Layer1 : Arrows, Media Keys, Teensy
        // left hand
        VOLU,F1  ,F2  ,F3  ,F4  ,F5  ,FN2 ,
        VOLD,NO  ,UP  ,NO  ,NO  ,NO  ,MPRV,
        TRNS,LEFT,DOWN,RGHT,NO  ,NO  ,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,MUTE,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN3 ,F6  ,F7  ,F8  ,F9  ,F10 ,FN0  ,
             MNXT,WH_U,MS_U,WH_D,NO  ,NO  ,NO  ,
                  MS_L,MS_D,MS_R,NO  ,NO  ,TRNS,
             MPLY,BTN1,NO  ,BTN2,NO  ,NO  ,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
};

/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
};

enum macro_id {
    DUCK,
    CAT,
    ROCKET,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_FUNCTION(TEENSY_KEY),
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_MACRO(DUCK),
    [3] = ACTION_MACRO(CAT),
    [4] = ACTION_MACRO(ROCKET),
    [5] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case DUCK:   return MACRO_DUCK;
            case CAT:    return MACRO_CAT;
            case ROCKET: return MACRO_ROCKET;
        }
    }
    return MACRO_NONE;
}

#define FN_ACTIONS_SIZE (sizeof(fn_actions) / sizeof(fn_actions[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode) {
    action_t action;
    action.code = ACTION_NO;

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}

