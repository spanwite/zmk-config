#define MACRO_TAP(NAME, BINDINGS, WAIT_MS, TAP_MS) \
    ZMK_MACRO(NAME, \
        wait-ms = <WAIT_MS>; \
        tap-ms = <TAP_MS>; \
        bindings = <&macro_tap BINDINGS>; \
    )

#define MACRO_FLAT(NAME, BINDINGS) \
	MACRO_TAP(NAME, BINDINGS, 0, 0)

#define MACRO_FAST(NAME, BINDINGS) \
	MACRO_TAP(NAME, BINDINGS, 10, 10)
	
#define MACRO_SLOW(NAME, BINDINGS) \
	MACRO_TAP(NAME, BINDINGS, 100, 100)

#define MACRO_ALT_SYMBOL(NAME, KP_KEYS) \
    ZMK_MACRO(NAME, \
        wait-ms = <0>; \
        tap-ms = <5>; \
        bindings \
        = <&macro_press   &kp LALT> \
        , <&macro_tap     KP_KEYS> \
        , <&macro_release &kp LALT> \
        ; \
    )
