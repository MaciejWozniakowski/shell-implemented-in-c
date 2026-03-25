#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "commands.h"

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char command_buffer[100];

  while(1) {
    printf("$ ");
    ssize_t bytes_read = read(STDIN_FILENO, command_buffer, 199);

    char command[100] = {0};
    char arguments[100] = {0};

    int i = 0;
    while(command_buffer[i] != ' ' && command_buffer[i] != '\n' && i < bytes_read) {
      command[i] = command_buffer[i];
      i++;
    }
    command[i] = '\0';
    strncpy(arguments, &command_buffer[i + 1], sizeof(arguments) - 1);
    arguments[strcspn(arguments, "\n")] = '\0';

    if(strcmp(command, "exit") == 0) {
      break;

    } else if (strcmp(command, "echo" ) == 0) {
      printf("%s\n", arguments);

    } else if (strcmp(command, "type" ) == 0) {
      if( check_if_builtin(arguments) == 0) {
        printf("%s is a shell builtin\n", arguments);
      } else if(check_if_command_exists(arguments) == 0 &&check_if_command_privileges(arguments) == 0) {
        printf("%s is %s\n", arguments, arguments);
      }
      
    }else{
      printf("%s: command not found\n", command);
    }
  }

  return 0;
}
