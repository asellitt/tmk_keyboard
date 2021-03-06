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
     *   |  ~L1 | TRIP | LEFT | RGHT | LCTL |                                       | RCTL |  UP  | DOWN |      | ~L1  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | PGUP | PGDN |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BSPC | DEL  |------|       |------| ENT  | SPC  |
     *                                 |      |      | LGUI |       | RGUI |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap: Layer 1, Arrows, Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Vol+  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           | devCC|  F6  |  F7  |  F8  |  F9  |  F10 | Teensy |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Vol-  | qVim |  Up  |      |      |      | Next |           | Prev | MWUP | MUP  | MWDN |      |      |  pls1  |
     * |--------+------+------+------+------+------| Trck |           | Trck |------+------+------+------+------+--------|
     * |  ESC   | Left | Down | Rght |      |      |------|           |------| MLFT | MDWN | MRGT |      |      |  ~L2   |
     * |--------+------+------+------+------+------| Mute |           | Play |------+------+------+------+------+--------|
     * |  LSFT  |      | xVim |      |      |      |      |           | Paus | LCLK |      | RCLK |      |      |  RSFT  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  ~L1 | emoji| LEFT | RGHT | LCTL |                                       | RCTL |  UP  | DOWN | emoji| ~L1  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | PGUP | PGDN |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BSPC | DEL  |------|       |------| ENT  | SPC  |
     *                                 |      |      | LGUI |       | RGUI |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap: Layer 2, *taps nose*
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        | chee | peng | opos |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  ESC   |      |      |      |      |      |------|           |------|      |      |      |      |      |  ~L2   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  LSFT  |      |      |      |      |      |      |           |      |      |      |      |      |      |  RSFT  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  ~L1 |      | LEFT | RGHT | LCTL |                                       | RCTL |  UP  | DOWN |      | ~L1  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | PGUP | PGDN |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 | BSPC | DEL  |------|       |------| ENT  | SPC  |
     *                                 |      |      | LGUI |       | RGUI |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // layer 0 : default, QWERTY
        // left hand
        GRV ,1   ,2   ,3   ,4   ,5   ,FN4 ,
        TAB ,Q   ,W   ,E   ,R   ,T   ,LBRC,
        ESC ,A   ,S   ,D   ,F   ,G   ,
        LSFT,Z   ,X   ,C   ,V   ,B   ,FN6 ,
        FN1 ,FN3 ,LEFT,RGHT,LCTL,
                                      HOME,END ,
                                           LALT,
                                 BSPC,DEL ,RGUI,
        // right hand
             MINS,6   ,7   ,8   ,9   ,0   ,EQL ,
             RBRC,Y   ,U   ,I   ,O   ,P   ,QUOT,
                  H   ,J   ,K   ,L   ,SCLN,BSLS,
             FN5 ,N   ,M   ,COMM,DOT, SLSH,RSFT,
                       RCTL,UP  ,DOWN,FN16,FN1 ,
        PGUP,PGDN,
        RALT,
        RGUI,ENT ,SPC
    ),

    KEYMAP(  // Layer1 : Arrows, Media Keys, Teensy
        // left hand
        VOLU,F1  ,F2  ,F3  ,F4  ,F5  ,NO  ,
        VOLD,FN12,UP  ,NO  ,NO  ,NO  ,MPRV,
        TRNS,LEFT,DOWN,RGHT,NO  ,NO  ,
        TRNS,NO  ,FN13,NO  ,NO  ,NO  ,MUTE,
        TRNS,FN7  ,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN11,F6  ,F7  ,F8  ,F9  ,F10 ,FN0 ,
             MNXT,WH_U,MS_U,WH_D,NO  ,NO  ,FN14,
                  MS_L,MS_D,MS_R,NO  ,NO  ,FN2 ,
             MPLY,BTN1,NO  ,BTN2,NO  ,NO  ,TRNS,
                       TRNS,TRNS,TRNS,FN7 ,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2 : *taps nose*
        // left hand
        NO  ,FN8 ,FN9 ,FN10,NO  ,NO  ,NO  ,
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

/* ids for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
};

enum macro_id {
    ROCKET,
    EMOJI,
    CHEETAH,
    LITTLE_PENGUIN,
    OPOSSUM,
    DEV_CREDIT_CARD,
    QUIT_VIM,
    SAVE_VIM,
    PLUS_ONE,
    JSX_FUNCTION,
    JSX_FRAGMENT,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_FUNCTION(TEENSY_KEY),
    [1]  = ACTION_LAYER_MOMENTARY(1),
    [2]  = ACTION_LAYER_MOMENTARY(2),

    [3] = ACTION_MODS(MOD_LCTL | MOD_LALT | MOD_LGUI | MOD_LSFT),

    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
    [6]  = ACTION_MACRO(ROCKET),
    [7]  = ACTION_MACRO(EMOJI),

    [8]  = ACTION_MACRO(CHEETAH),
    [9]  = ACTION_MACRO(LITTLE_PENGUIN),
    [10]  = ACTION_MACRO(OPOSSUM),

    [11] = ACTION_MACRO(DEV_CREDIT_CARD),
    [12] = ACTION_MACRO(QUIT_VIM),
    [13] = ACTION_MACRO(SAVE_VIM),
    [14] = ACTION_MACRO(PLUS_ONE),
    [15] = ACTION_MACRO(JSX_FUNCTION),
    [16] = ACTION_MACRO(JSX_FRAGMENT)
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
#include "keymap_macros.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case EMOJI:             return MACRO_EMOJI;
            case ROCKET:            return MACRO_ROCKET;
            case CHEETAH:           return MACRO_CHEETAH;
            case LITTLE_PENGUIN:    return MACRO_LITTLE_PENGUIN;
            case OPOSSUM:           return MACRO_OPOSSUM;
            case DEV_CREDIT_CARD:   return MACRO_DEV_CREDIT_CARD;
            case QUIT_VIM:          return MACRO_QUIT_VIM;
            case SAVE_VIM:          return MACRO_SAVE_VIM;
            case PLUS_ONE:          return MACRO_PLUS_ONE;
            case JSX_FUNCTION:      return MACRO_JSX_FUNCTION;
            case JSX_FRAGMENT:      return MACRO_JSX_FRAGMENT;
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

