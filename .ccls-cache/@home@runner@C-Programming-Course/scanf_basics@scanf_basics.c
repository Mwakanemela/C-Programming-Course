#include <stdio.h>

int main(void) {

  char c = 'm';
  printf("Enter a character(char): ");
  // If scanf fails to read an integer, print an error message and exit
  if (scanf("%c", &c) != 1) {

    fprintf(stderr, "Error: Input is not an integer\n");
    return 1;
  }
  // scanf("%d", &n);

  printf("You entered %c\n", c);
  return 0;
}