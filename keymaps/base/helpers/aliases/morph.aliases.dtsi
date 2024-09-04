#define MORPH_SINGLE(NAME, MOD, UNMODDED, MODDED) \
    ZMK_MOD_MORPH(NAME, \
        mods = <(MOD_ ## MOD)>; \
        bindings = <UNMODDED>, <MODDED>; \
    )

#define MORPH_BOTH(NAME, MOD, MODDED, UNMODDED) \
    ZMK_MOD_MORPH(NAME, \
        mods = <(MOD_L ## MOD|MOD_R ## MOD)>; \
        bindings = <MODDED>, <UNMODDED>; \
    )