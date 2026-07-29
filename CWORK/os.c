#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include"os.h"

struct OS {
    void MKDIR(char name_dir_create[100]) { mkdir(name_dir_create); }
    void RMDIR(char name_dir_remove[100]) { rmdir(name_dir_remove); }
    void MKFIL(char name_file_create[100]) { FILE *file = fopen(name_file_create, "w"); }
    void RMFIL(char name_file_remove[100]) { remove(name_file_remove) }
    void EXEC(char name_command[100]) { system(name_command); }
};
