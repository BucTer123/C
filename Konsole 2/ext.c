#include <stdio.h>
#include <stdlib.h>

void ext_n() {
    printf("SHUTDOWN\n");
    free(cmd);
    exit(0);
}