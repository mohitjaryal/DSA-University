// dividing two values by using pointers
#include <stdio.h>
int main() {
  int a = 20;
  int b = 4;
  int *ptr1 = &a;
  int *ptr2 = &b;
  printf("%d / %d = %d\n", *ptr1, *ptr2, *ptr1 / *ptr2);
  return 0;
}