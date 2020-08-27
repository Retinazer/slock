/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1a2026",     /* after initialization */
	[INPUT] =  "#2d3741",   /* during input */
	[FAILED] = "#e7c547",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
