//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/         /*Update Interval*/    /*Update Signal*/
    {"", "music",                2,                    2},

    {"", "cat /tmp/recordingicon 2>/dev/null",     2,    9},

    {"", "weather",              300,                  2},

    {" ", "torrents",            5,                    7},

    /* {" ", "mailbox",             4,                  7}, */

/*    {"", "upt",               60,                    2}, */

   // {" 📦 ", "pacupdate",        36000,                 1},

//    {"🐝", "bumblebee",         5,                    2},

/*    {"🗄 ", "disk /",           60,                    1}, */

/*    {"  ", "disk /home",      60,                    1}, */

    {"🧠 ", "/home/ankit/.local/bin/memory",            1,                    1},

    //{"🖥 ", "cpu2",               2,                    1},

    {"🌡", "/home/ankit/.local/bin/cpu",                10,                   1},

    //{" 🌐 ", "bandwidth wlo1",   2,                    1},

    {" ", "/home/ankit/.local/bin/volume2",             1,                    10},

   // {" 🔆 ", "brightness",       6,                    1},

    {"", "/home/ankit/.local/bin/battery",              5,                    12},

    {"🗓 ", "/home/ankit/.local/bin/clock",              10,                   0},

    {"", "/home/ankit/.local/bin/nettraf",             2,                    0},

    {"", "vpn",                  10,                   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
