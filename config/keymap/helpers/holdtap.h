#define HOLDTAP(NAME, HOLD, TAP) \
    ZMK_HOLD_TAP(NAME, \
        tapping-term-ms = <TAPPING_TERM_FAST>; \
        flavor = "tap-preferred"; \
        quick-tap-ms = <QUICK_TAP_TERM_FAST>; \
        bindings = <HOLD>, <TAP>; \
    )

#define LAYERTAP(NAME, TAP) \
    ZMK_HOLD_TAP(NAME, \
        tapping-term-ms = <TAPPING_TERM_FAST>; \
        flavor = "balanced"; \
        quick-tap-ms = <QUICK_TAP_TERM_SLOW>; \
        bindings = <&mo>, <TAP>; \
    )

#define HT_DOUBLE(NAME, BINDING) \
    HOLDTAP(ht_dbl_ ## NAME, &mc_dbl_ ## NAME, BINDING) \
    MACRO_0_MS(mc_dbl_ ## NAME, BINDING BINDING)

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
