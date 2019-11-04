#define MACRO_EMOJI MACRO( \
    D(LCTRL), D(LGUI), T(SPC), U(LGUI), U(LCTRL), \
END)

#define MACRO_ROCKET MACRO( \
    I(5), \
    T(EQL), D(LSFT), T(DOT), U(LSFT), \
END) \

#define MACRO_DEV_CREDIT_CARD MACRO( \
    I(5), \
    T(4), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(1), T(TAB), \
    W(45), T(1), T(TAB), \
    W(45), T(2), T(2), T(TAB), \
    W(45), T(3), T(3), T(3), \
END) \

#define MACRO_QUIT_VIM MACRO( \
    I(5), \
    T(ESC), D(LSFT), T(SCLN), U(LSFT), T(Q), D(LSFT), T(1), U(LSFT), T(ENT), \
END) \

#define MACRO_SAVE_VIM MACRO( \
    I(5), \
    T(ESC), D(LSFT), T(SCLN), U(LSFT), T(X), T(ENT), \
END) \

#define MACRO_PLUS_ONE MACRO( \
    I(5), \
    D(LSFT), T(SCLN), T(EQL), U(LSFT), T(1), D(LSFT), T(SCLN), U(LSFT), T(TAB), T(TAB), T(TAB), T(ENT), \
END)

#define MACRO_JSX_FUNCTION MACRO( \
    I(5), \
    T(C), T(O), T(N), T(S), T(T), T(SPC), T(EQL), T(SPC), D(LSFT), T(9), T(0), U(LSFT), T(SPC), \
    T(EQL), D(LSFT), T(DOT), U(LSFT), D(LSFT), T(SPC), T(LBRC), T(RBRC), U(LSFT), T(LEFT), T(LEFT), \
    T(LEFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), T(SPC), \
END)

#define MACRO_JSX_FRAGMENT MACRO( \
    I(5), \
    D(LSFT), T(COMM), T(DOT), T(COMM), U(LSFT), T(SLSH), D(LSFT),T(DOT),U(LSFT),T(LEFT), T(LEFT), T(LEFT),\
END)<>const  = () => {}</>
