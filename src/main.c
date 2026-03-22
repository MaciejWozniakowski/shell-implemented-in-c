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
    printf("%s: command not found \n", command_buffer);
  }

  return 0;
}
