#define ALPHA         0
#define CAPS_WORD     1
#define NUM_ROW       2
#define NUMPAD        3
#define SYMBOLS       4
#define NAV           5
#define MOUSE         6
#define SHORTCUTS     7
#define POT_PLAYER    8

#define GAME_DEFAULT  9
#define GAME_DOTA2    10
#define GAME_EXTRA    11
#define GAME_NUMPAD   12

#define FN            13

#define LOCK          14
#define UNLOCK        15


#define HOLD_LAYERS   NAV SHORTCUTS SYMBOLS FN
#define TOGGLE_LAYERS ALPHA MOUSE NUMPAD NUM_ROW CAPS_WORD POT_PLAYER
#define GAME_LAYERS   GAME_DEFAULT GAME_DOTA2 GAME_EXTRA

#define ALL_LAYERS    HOLD_LAYERS TOGGLE_LAYERS
