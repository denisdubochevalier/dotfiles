static const char norm_fg[] = "#a0a0a0";
static const char norm_bg[] = "#030303";
static const char norm_border[] = "#414141";

static const char sel_fg[] = "#a0a0a0";
static const char sel_bg[] = "#5c5c5c";
static const char sel_border[] = "#a0a0a0";

static const char urg_fg[] = "#a0a0a0";
static const char urg_bg[] = "#4c4c4c";
static const char urg_border[] = "#4c4c4c";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
