#include<stdio.h>
#include"out.h"
#include<boolean.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

struct CMD {
    void PRINTLN(char text_println[100]) { printf("%s\n", text_println.c_str()); }
    void CPRINTLN(char text_println[100], char color_println[100]) {
      if (color_println == "RED" || color_println == "red") { printf(ANSI_COLOR_RED + text_println.c_str() + ANSI_COLOR_RESET) }
      else if (color_println == "GREEN" || color_println == "green") { printf(ANSI_COLOR_GREEN + text_println.c_str() + ANSI_COLOR_RESET) }
      else if (color_println == "YELLOW" || color_println == "yellow") { printf(ANSI_COLOR_YELLOW + text_println.c_str() + ANSI_COLOR_RESET) }
      else if (color_println == "BLUE" || color_println == "blue") { printf(ANSI_COLOR_BLUE + text_println.c_str() + ANSI_COLOR_RESET) }
      else if (color_println == "MAGENTA" || color_println == "magenta") { printf(ANSI_COLOR_MAGENTA + text_println.c_str() + ANSI_COLOR_RESET) }
      else if (color_println == "CYAN" || color_println == "cyan") { printf(ANSI_COLOR_CYAN + text_println.c_str() + ANSI_COLOR_RESET) }
    }
    void PRINT(char text_print[100]) { printf("%s\n", text_print.c_str()); }
    void RET(bool status_return) { return status_return; }
    void EXT(int status) { exit(status); }
}
