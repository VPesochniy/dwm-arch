#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "/usr/local/bin/lang.sh", 0, 1) \
    X("", "/usr/local/bin/audio.sh", 1, 2)   \
    X("", "/usr/local/bin/bt_wifi.sh", 1, 0)   \
    X("", "/usr/local/bin/backlight_bat.sh", 1, 3) \
    X("", "/usr/local/bin/datetime.sh", 1, 0) \

#endif  // CONFIG_H