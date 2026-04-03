#include <float.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

int main() {
    puts("Welcome!\n");
    printf(">");
    char *cmd = malloc(50);
    if (!cmd) return 1;
    scanf("%s", cmd);

    if (strcmp(cmd, "help") == 0) {
        puts("TIme \n");
        puts("mk/rm - dir\n");
    }
    if (strcmp(cmd, "TIme") == 0) {
        time_t now;
        time(&now);
        printf("%s", ctime(&now));
    }
    if (strcmp(cmd, "mkdir") == 0) {
        puts("> ");
        char mk[26];
        scanf("%s", mk);
        mkdir(mk, 0777);
    }
    if (strcmp(cmd, "rmdir") == 0) {
        puts("> ");
        char rm[26];
        scanf("%s", rm);
        rmdir(rm);
    }
    if (strcmp(cmd, "exit") == 0) {
        free(cmd);
        exit(0);
    }
}