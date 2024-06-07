#include <stdio.h>
#include <stdarg.h>

float average(int num, ...);

int main(void) {
  
  float average_age = average(3, 10, 20, 15);
  printf("Average age of 3 people is %.2f\n", average_age);
  return 0;
}

float average(int num, ...) {
  va_list ap;

  float sum = 0.0;

  int i;

  va_start(ap, num);

  for (i = 0; i < num; i++) {
      sum += va_arg(ap, int);
  }

  return (float) sum / num;
}