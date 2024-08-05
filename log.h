#pragma once

/*
* \033[{FORMAT_ATTRIBUTE};{FORGROUND_COLOR};{BACKGROUND_COLOR}m{TEXT}\033[{RESET_FORMATE_ATTRIBUTE}m
*
* FORMAT ATTRIBUTE
*   { "Default", "0" },
*   { "Bold", "1" },
*   { "Dim", "2" },
*   { "Italics", "3"},
*   { "Underlined", "4" },
*   { "Blink", "5" },
*   { "Reverse", "7" },
*   { "Hidden", "8" }

* FORGROUND COLOR
*   { "Default", "39" },
*   { "Black", "30" },
*   { "Red", "31" },
*   { "Green", "32" },
*   { "Yellow", "33" },
*   { "Blue", "34" },
*   { "Magenta", "35" },
*   { "Cyan", "36" },
*   { "Light Gray", "37" },
*   { "Dark Gray", "90" },
*   { "Light Red", "91" },
*   { "Light Green", "92" },
*   { "Light Yellow", "93" },
*   { "Light Blue", "94" },
*   { "Light Magenta", "95" },
*   { "Light Cyan", "96" },
*   { "White", "97" }

* BACKGROUND COLOR
*   { "Default", "49" },
*   { "Black", "40" },
*   { "Red", "41" },
*   { "Green", "42" },
*   { "Yellow", "43" },
*   { "Blue", "44" },
*   { "Megenta", "45" },
*   { "Cyan", "46" },
*   { "Light Gray", "47" },
*   { "Dark Gray", "100" },
*   { "Light Red", "101" },
*   { "Light Green", "102" },
*   { "Light Yellow", "103" },
*   { "Light Blue", "104" },
*   { "Light Magenta", "105" },
*   { "Light Cyan", "106" },
*   { "White", "107" }
* RESET FORMAT ATTRIBUTE
*   { "All", "0" },
*   { "Bold", "21" },
*   { "Dim", "22" },
*   { "Underlined", "24" },
*   { "Blink", "25" },
*   { "Reverse", "27" },
*   { "Hidden", "28" }
*/

#define LOG_ERROR(msg)  fprintf(stderr, "\033[1;31;49m[ERROR]\033[0m\t: %s:%d in %s: %s\n", __FILE__, __LINE__, __func__, msg);
#define LOG(msg)        fprintf(stdout, "\033[1;97;49m[INFO]\033[0m\t: %s:%d in %s: %s\n", __FILE__, __LINE__, __func__, msg);

#ifdef DEBUG
    #define LOG_DEBUG(msg)  fprintf(stdout, "\033[1;34;49m[DEBUG]\033[0m\t: %s:%d in %s: %s\n", __FILE__, __LINE__, __func__, msg);
#else
    #define LOG_DEBUG(msg)
#endif /* !_DEBUG! */
