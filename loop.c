#include <stdio.h>
#include "loopLib.h"

int main(void) {
  printf(" factorial of 5 should be 120 and it is %d \n", factorial(5));
  printf(" fibonacci of 1 should be  0 and it is %d \n", fibonacci(1));
  printf(" fibonacci of 2 should be  1 and it is %d \n", fibonacci(2));
  printf(" fibonacci of 3 should be  1 and it is %d \n", fibonacci(3));
  printf(" fibonacci of 5 should be  3 and it is %d \n", fibonacci(5));
  printf(" fibonacci of 8 should be 13 and it is %d \n", fibonacci(8));
  return 0;
}
