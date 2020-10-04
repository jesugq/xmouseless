
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 60;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 400;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key              speed */  
    { XK_KP_Add,        4000 },
    { XK_KP_Subtract,   100  },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_KP_Left,  -1, 	    0 },
    { XK_KP_Right,	1,     	0 },
    { XK_KP_Up, 	0,     -1 },
    { XK_KP_Begin,	0,     	1 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_KP_Home,	    1 },
    { XK_KP_End,  	    2 },
    { XK_KP_Page_Up,    3 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_KP_Multiply,  	0,    	25 },
    { XK_KP_Divide,	    0,     -25 },
    { XK_KP_Page_Down,  25,   	0  },
    { XK_KP_Down,      -25,    	0  },
};

/* executes shell commands */
static ShellBinding shell_bindings[] = {
    /* key         command */  
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape
};
