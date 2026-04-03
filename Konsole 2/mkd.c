#include "mkd.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void mk() {
    prtinf("> ");
    char mk[26];
    scanf("%s", mk);

    mkdir(mk, 0777);
}