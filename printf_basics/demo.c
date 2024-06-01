#include <stdio.h>

//printf - [flags][width][.precision]specifier
int main(void) {

  // printf("Line 1 \n");
  // printf("\tline 2 \n");
  // printf("line 3: \\ \" \n");

  //printing variables
  int x = 5;
  char c = 'M';
  double d = 3.14159;
  char str[] = "A string to output!! \n";

  printf("int    x = %d\n", x);
  printf("char   c = %c\n", c); 
  printf("double d = %f\n", d);  //or lf - can also be used for floats
  printf("str    str = %s\n", str);

  //width[width] - 5 characters - you can use + or -
  printf("int x = %-5d |||\n", x);

  //precision - 2 decimal places
  printf("double d = %.2f\n", d);
  return 0;
}