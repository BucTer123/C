#include <stdio.h>
#include "mkd.h"
#include "rmd.h"
#include "mth.h"
#include "tmn.h"
#include "ext.h"
#include <stdlib.h>

int main() {
    printf("Welcome!\n");
    while (1) {
        printf("> ");
        char *cmd = malloc(50);
        scanf("%s". cmd);

        if (cmd == "help") {
            printf("List of commands :\n");
            printf("1 => mkdir\n");
            printf("2 => rmdir\n");
            printf("3 => math\n");
            printf("4 => time_now\n");
            printf("5 => exit_now\n");
        }
        else if (cmd == "mkdir") {
            mk();
        }
        else if (cmd == "rmdir") {
            rm();
        }
        else if (cmd == "math") {
            mt();
        }
        else if (cmd == "time_now")  {
            time_n();
        }
        else if (cmd == "exit_now") {
            ext_n();
        }
    }
}
