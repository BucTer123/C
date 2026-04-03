#include <stdio.h>
#include <string.h>
#include <math.h>
#include <float.h>
#include "mth.h"

void mt() {
    float a;
    float b;
    char c[16];
    printf("> ");
    scanf("%d", a);
    printf("> ");
    scanf("%d", b);
    printf("> ");
    scanf("%s", c);

    if (c == "+") {
        float plus = a + b;
        printf(plus);
    }
    if (c == "-") {
        float minus = a - b;
        printf(minus);
    }
    if (c == "*") {
        float multi = a * b;
        printf(multi);
    }
    if (c == "/") {
        if (b == 0) {
            printf("ERROR!: Divide by zero!");
        } else {
            float divide = a / b;
            printf(divide);
        }
    }
    if (c == "sn") {
        float sina = sin(a);
        float sinb = sin(b);

        printf(sina + "%d\n");
        printf(sinb + "%d\n");
    }
    if (c == "cs") {
        float cosa = cos(a);
        float cosb = cos(b);

        printf(cosa + "%d\n");
        printf(cosb + "%d\n");
    }
}