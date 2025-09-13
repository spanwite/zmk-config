/* Keys */
#define KP_CHANGE_LANG &kp LC(LSHFT)

#define ___ &trans
#define XXX &none

/* Layers */
#define ALPHA         0
#define SHIFTED       1
#define NUM_ROW       2
#define NUMPAD        3
#define SYM           4
#define NAV           5
#define MOUSE         6
#define MEHS          7
#define LOCK          8
#define UNLOCK        9

#define GAME_DEFAULT  10
#define GAME_DOTA2    11
#define GAME_EXTRA    12
#define GAME_NUMPAD   13

#define FN            14
#define MEDIA         15
#define SHORTCUTS     16

#define HOLD_LAYERS   NAV SHORTCUTS SYM FN MEDIA
#define TOGGLE_LAYERS ALPHA MOUSE NUMPAD NUM_ROW SHIFTED MEHS
#define GAME_LAYERS   GAME_DEFAULT GAME_DOTA2 GAME_EXTRA

#define ALL_LAYERS    HOLD_LAYERS TOGGLE_LAYERS
