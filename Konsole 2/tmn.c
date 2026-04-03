#include <stdio.h>
#include <time.h>
#include "tmn.h"

void time_n() {
    time_t now;
    time(&now);
    printf(ctime(&now));
}