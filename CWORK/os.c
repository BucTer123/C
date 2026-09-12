#include<stdio.h>
#include<stdlib.h>
#include<bool.h>
#include<sys/stat.h>
#include"os.h"

struct cwork_os {
    void CREATE_DIR(char name_dir_create[100]) { mkdir(name_dir_create); }
    void REMOVE_DIR(char name_dir_remove[100]) { rmdir(name_dir_remove); }
    void CREATE_FILE(char name_file_create[100]) { FILE *file = fopen(name_file_create, "w"); }
    void REMOVE_FILE(char name_file_remove[100]) { remove(name_file_remove) }
    void EXECUTE(char name_command[100]) { system(name_command); }
    void RETURN(bool return_status) { return return_status; }
};
