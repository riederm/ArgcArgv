#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("Program name %s\n", argv[0]);

  if (argc == 1) {
    printf("Give me some arguments\n");
  }

  printf("there are %d additional arguments\n", argc - 1);
 
  return 0;
}