// assigning one pointer to another
#include <stdio.h>
int main() {
  int a = 20;
  int *ptr1 = &a;
  int *ptr2 = ptr1;
  printf("%d\n", *ptr2);
  return 0;
}