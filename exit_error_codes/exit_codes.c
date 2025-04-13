#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc <2) {
    fprintf(stderr, "usage:%s <filename>\n", argv[0]);
    return 1;
 }
 FILE *file = fopen(argv[1], "r");
 if (!file) {
  perror("Error opening file");
  return 2;
  }
  printf("FILE %s opened successfully\n", argv[1]);
  fclose(file);
  return 0;
 }

