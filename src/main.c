#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char command_buffer[100];

  // TODO: Uncomment the code below to pass the first stage
  while(1) {
    printf("$ ");
    fgets(command_buffer, 100, stdin);
    printf("%s: command not found\n", command_buffer);
  }

  return 0;
}
