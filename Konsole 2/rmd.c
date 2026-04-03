#include "rmd.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void rm() {
    printf("> ");
    char rm[26];
    scanf("%s", rm);

    rmdir(rm);
}