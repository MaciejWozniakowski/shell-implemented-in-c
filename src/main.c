#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char command_buffer[100];

  // TODO: Uncomment the code below to pass the first stage
  while(1) {
    printf("$ ");
    ssize_t bytes_read = read(STDIN_FILENO, command_buffer, 99);
    //add two arrays, one for command and the other for arguments
    char command[10];
    char arguments[100];
    //go through bytes_read until you find a space and add everything that you parsed to command
    int i = 0;
    while(command_buffer[i] != ' ' && i < bytes_read) {
      command[i] = command_buffer[i];
      i++;
    }
    command[i] = '\0';
    printf("Command: %s\n", command);
    command_buffer[strcspn(command_buffer, "\n")] = '\0';
    if(strncmp(command, "exit", 4) == 0) {
      break;
    } else if (strncmp(command, "echo", 4) == 0) {
      printf("%s, \n", command );
    }else{
      printf("%s: command not found \n", command_buffer);
    }
    //parse the command
    // int i = 0;
    // while(command_buffer[i] != '\0') {
    //   if (command_buffer[i] != ' ') {
    //     char *args[10];

    //     args[0] = command_buffer;
    //     args[1] = &command_buffer[i + 1];
    //   }
    //   i++;
    // }
  }

  return 0;
}
