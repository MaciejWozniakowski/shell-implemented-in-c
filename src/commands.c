#include "commands.h"
#include <string.h>
#include <stdio.h>
// perpare check for commands: echo, exit, type

unsigned int check_if_builtin(char *argument){
    if (strcmp(argument, "echo") == 0) {
        // printf("%s is a shell builtin\n", argument);
        return 0;
    } else if (strcmp(argument, "exit") == 0) {
        //printf("%s is a shell builtin\n", argument);
        return 0;
    } else if (strcmp(argument, "type") == 0) {
        // printf("%s is a shell builtin\n", argument);
        return 0;
    } else {
        //printf("%s: not found\n", argument);
        return 1;

    }
}