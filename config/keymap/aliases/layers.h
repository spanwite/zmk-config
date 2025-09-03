#define ALPHA         0
#define CAPS_WORD     1
#define NUM_ROW       2
#define NUMPAD        3
#define SYMBOLS       4
#define NAV           5
#define MOUSE         6
#define POT_PLAYER    7
#define LOCK          8
#define UNLOCK        9

#define GAME_DEFAULT  10
#define GAME_DOTA2    11
#define GAME_EXTRA    12
#define GAME_NUMPAD   13

#define FN            14
#define SHORTCUTS     15

#define HOLD_LAYERS   NAV SHORTCUTS SYMBOLS FN
#define TOGGLE_LAYERS ALPHA MOUSE NUMPAD NUM_ROW CAPS_WORD POT_PLAYER
#define GAME_LAYERS   GAME_DEFAULT GAME_DOTA2 GAME_EXTRA

#define ALL_LAYERS    HOLD_LAYERS TOGGLE_LAYERS
