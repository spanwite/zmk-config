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
