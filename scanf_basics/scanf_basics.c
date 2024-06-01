#include <stdio.h>

int main(void) {

  int n = 0; // get an int

  printf("Enter a number: ");
// If scanf fails to read an integer, print an error message and exit
  if (scanf("%d", &n) != 1) {
    
    fprintf(stderr, "Error: Input is not an integer\n");
    return 1;
  }
  // scanf("%d", &n);

  printf("You entered %d\n", n);
  return 0;
}