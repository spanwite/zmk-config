#define COMBO(NAME, KEYS, BINDING, LAYERS) \
    ZMK_COMBO(NAME, BINDING, KEYS, LAYERS, COMBO_TERM, COMBO_TERM)

#define COMBO_FAST(NAME, KEYS, BINDING, LAYERS) \
    ZMK_COMBO(NAME, BINDING, KEYS, LAYERS, COMBO_TERM_FAST, COMBO_TERM_FAST)

#define COMBO_SLOW(NAME, KEYS, BINDING, LAYERS) \
    ZMK_COMBO(NAME, BINDING, KEYS, LAYERS, COMBO_TERM_SLOW, COMBO_TERM_SLOW)
