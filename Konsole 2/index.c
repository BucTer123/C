#include <stdio.h>
#include "mkd.h"
#include "rmd.h"
#include "mth.h"
#include "tmn.h"
#include "ext.h"
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Welcome!\n");
    while (1) {
        printf("> ");
        char *cmd = malloc(50);
        scanf("%s". cmd);

        if (strcmp(cmd, "help") == 0) {
            printf("List of commands :\n");
            printf("1 => mkdir\n");
            printf("2 => rmdir\n");
            printf("3 => math\n");
            printf("4 => time_now\n");
            printf("5 => exit_now\n");
        }
        if (strcmp(cmd, "mkdir") == 0) {
            mk();
        }
        if (strcmp(cmd, "rmdir") == 0) {
            rm();
        }
        if (strcmp(cmd, "math") == 0) {
            mt();
        }
        if (strcmp(cmd, "time_now") == 0) {
            time_n();
        }
        if (strcmp(cmd, "exit_now") == 0) {
            ext_n();
        }
    }
}