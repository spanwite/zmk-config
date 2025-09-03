#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS) \
	ZMK_HOLD_TAP(NAME, \
        flavor = "balanced"; \
        tapping-term-ms = <TAPPING_TERM_MEDIUM>; \
        quick-tap-ms = <QUICK_TAP_TERM_SLOW>; \
        require-prior-idle-ms = <PRIOR_IDLE_TERM>; \
        bindings = <HOLD>, <TAP>; \
        hold-trigger-key-positions = <TRIGGER_POS>; \
        hold-trigger-on-release; \
    )

#define MAKE_HML(NAME, HOLD, TAP) MAKE_HRM(NAME, HOLD, TAP, KEYS_R KEYS_T)

#define MAKE_HMR(NAME, HOLD, TAP) MAKE_HRM(NAME, HOLD, TAP, KEYS_L KEYS_T)
