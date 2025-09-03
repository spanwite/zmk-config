#define MACRO(NAME, BINDINGS, WAIT_MS, TAP_MS) \
    ZMK_MACRO(NAME, \
        wait-ms = <WAIT_MS>; \
        tap-ms = <TAP_MS>; \
        bindings = <&macro_tap BINDINGS>; \
    )

#define MACRO_0_MS(NAME, BINDINGS) \
	MACRO(NAME, BINDINGS, 0, 0)

#define MACRO_10_MS(NAME, BINDINGS) \
	MACRO(NAME, BINDINGS, 10, 10)
	
#define MACRO_100_MS(NAME, BINDINGS) \
	MACRO(NAME, BINDINGS, 100, 100)

#define ALT_SYMBOL(NAME, KP_KEYS) \
    ZMK_MACRO(NAME, \
        wait-ms = <0>; \
        tap-ms = <5>; \
        bindings \
        = <&macro_press   &kp LALT> \
        , <&macro_tap     KP_KEYS> \
        , <&macro_release &kp LALT> \
        ; \
    )
