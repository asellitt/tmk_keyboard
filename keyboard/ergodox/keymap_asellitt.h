static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layers:
     *  0: QWERTY
     *  1: Function
     *  2: *taps nose*
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
     * |  Vol+  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 | Teensy |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Vol-  | qVim |  Up  |      |      |      | Next |           | Prev | MWUP | MUP  | MWDN |      |      |        |
     * |--------+------+------+------+------+------| Trck |           | Trck |------+------+------+------+------+--------|
     * |  ESC   | Left | Down | Rght |      |      |------|           |------| MLFT | MDWN | MRGT |      |      |  ~L2   |
     * |--------+------+------+------+------+------| Mute |           | Play |------+------+------+------+------+--------|
     * |  LSFT  |      | xVim |      |      |      |      |           | Paus | LCLK |      | RCLK |      |      |  RSFT  |
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
     * Keymap: Layer 2, *taps nose*
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        | chta | peng | pand |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  ESC   |      |      |      |      |      |------|           |------|      |      |      |      |      |  ~L2   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  LSFT  |      |      |      |      |      |      |           |      |      |      |      |      |      |  RSFT  |
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
        LSFT,Z   ,X   ,C   ,V   ,B   ,FN8 ,
        FN1 ,NO  ,LEFT,RGHT,LGUI,
                                      HOME,END ,
                                           LALT,
                                 BSPC,DEL ,RCTL,
        // right hand
             MINS,6   ,7   ,8   ,9   ,0   ,EQL ,
             RBRC,Y   ,U   ,I   ,O   ,P   ,QUOT,
                  H   ,J   ,K   ,L   ,SCLN,BSLS,
             FN7 ,N   ,M   ,COMM,DOT, SLSH,RSFT,
                       RGUI,UP  ,DOWN,NO  ,FN1 ,
        PGUP,PGDN,
        RALT,
        RCTL,ENT ,SPC
    ),

    KEYMAP(  // Layer1 : Arrows, Media Keys, Teensy
        // left hand
        VOLU,F1  ,F2  ,F3  ,F4  ,F5  ,NO  ,
        VOLD,FN9 ,UP  ,NO  ,NO  ,NO  ,MPRV,
        TRNS,LEFT,DOWN,RGHT,NO  ,NO  ,
        TRNS,NO  ,FN10,NO  ,NO  ,NO  ,MUTE,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO  ,F6  ,F7  ,F8  ,F9  ,F10 ,FN0 ,
             MNXT,WH_U,MS_U,WH_D,NO  ,NO  ,NO  ,
                  MS_L,MS_D,MS_R,NO  ,NO  ,FN2 ,
             MPLY,BTN1,NO  ,BTN2,NO  ,NO  ,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2 : *taps nose*
        // left hand
        NO  ,FN3 ,FN4 ,FN5 ,NO  ,NO  ,NO  ,
        NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,
             NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,
                  NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
             NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
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
    CHEETAH,
    LITTLE_PENGUIN,
    GIANT_PANDA,
    ROCKET,
    QUIT_VIM,
    SAVE_VIM,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_FUNCTION(TEENSY_KEY),
    [1]  = ACTION_LAYER_MOMENTARY(1),
    [2]  = ACTION_LAYER_MOMENTARY(2),

    [3]  = ACTION_MACRO(CHEETAH),
    [4]  = ACTION_MACRO(LITTLE_PENGUIN),
    [5]  = ACTION_MACRO(GIANT_PANDA),

    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
    [8]  = ACTION_MACRO(ROCKET),

    [9]  = ACTION_MACRO(QUIT_VIM),
    [10] = ACTION_MACRO(SAVE_VIM),
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
            case CHEETAH:           return MACRO_CHEETAH;
            case LITTLE_PENGUIN:    return MACRO_LITTLE_PENGUIN;
            case GIANT_PANDA:       return MACRO_GIANT_PANDA;
            case ROCKET:            return MACRO_ROCKET;
            case QUIT_VIM:          return MACRO_QUIT_VIM;
            case SAVE_VIM:          return MACRO_SAVE_VIM;
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

