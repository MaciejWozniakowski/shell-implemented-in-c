#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char command_buffer[100];

  // TODO: Uncomment the code below to pass the first stage
  while(1) {
    printf("$ ");
    fgets(command_buffer, 100, stdin);
    command_buffer[strcspn(command_buffer, "\n")] = '\0';
    printf("%s: command not found", command_buffer);
  }

  return 0;
}
