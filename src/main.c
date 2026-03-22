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
    command_buffer[bytes_read] = '\0';
    command_buffer[strcspn(command_buffer, "\n")] = '\0';
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
    printf("%s: command not found \n", command_buffer);
  }

  return 0;
}
