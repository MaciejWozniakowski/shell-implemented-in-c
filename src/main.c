#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char command_buffer[100];

  // TODO: Uncomment the code below to pass the first stage
  while(1) {
    printf("$ ");
    read(STDIN_FILENO, command_buffer, 99);
    command_buffer[99] = '\0';
    // fgets(command_buffer, 100, stdin);
    // command_buffer[strcspn(command_buffer, "\n")] = '\0';
    printf("%s: command not found", command_buffer);
  }

  return 0;
}
