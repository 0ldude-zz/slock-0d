/* user and group to drop privileges to */
static const char *user  = "yalo";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",	/* after initialization */
	[INPUT] =  "#282828",	/* during input */
	[FAILED] = "#282828",	/* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=3;
