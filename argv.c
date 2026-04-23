#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("Number of command-line arguments: %d\n", argc);
  printf("\n");
  printf("Command-line arguments:\n");
  for (int i = 0; i < argc; i++) {
    printf("\t%d. %s\n", i, argv[i]);
  }
  
  return 0;
}