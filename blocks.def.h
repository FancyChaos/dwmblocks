//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/     /*Update Interval*/     /*Update Signal*/
        {"",            "sb-cpu",               3,              2},
        {"",            "sb-memory",            10,             3},
        {"",            "sb-disk",              60,             4},
        {"",            "sb-battery",           10,             5},
        {"",            "sb-internet",          5,              6},
        {"",            "sb-clock",             15,             1},
};


//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
