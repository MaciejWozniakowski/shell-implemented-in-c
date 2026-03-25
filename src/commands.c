#include "type_command.h"
#include <string.h>
#include <stdio.h>
// perpare check for commands: echo, exit, type

void check_if_builtin(char *argument){
    if (strcmp(argument, "echo") == 0) {
        printf("%s is a shell builtin\n", argument);
    } else if (strcmp(argument, "exit") == 0) {
        printf("%s is a shell builtin\n", argument);
    } else if (strcmp(argument, "type") == 0) {
        printf("%s is a shell builtin\n", argument);
    } else {
        printf("%s: not found\n", argument);
    }
}