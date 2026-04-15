#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t now;
    time(&now);
    printf(time(&now));
    puts("Welcome!\n");
    while (0) {  
        printf("> ");
        char *cmd = malloc(67);
        scanf("%s", cmd);

        if (strcmp(cmd, "artz") == 0) {
            printf("Do you want to start? (y/n) :");
            char *line1 = malloc(42);
            scanf("%s", line1);

            if (strcmp(line1, "y") == 0) {
                system("python artz.py");
            } else {
                printf("Bye!\n");
                free(line1);
                free(line2);
                free(cmd);
                return 0;
            }
        }
        if (strcmp(cmd, "exit") == 0) {
            free(cmd);
            return 0;
        }
        if (strcmp(cmd, "web") == 0) {
            printf("Do you want to start? (y/n) :")
            char *line3 = malloc(42);
            scanf("%s", line3);

            if (strcmp(line3, "y") == 0) {
                system("python web_serv.py")
            } else {
                printf("Bye!\n");
                free(line1);
                free(line2);
                free(line3);
                free(cmd);
                return 0;
            }
        }
    }
}