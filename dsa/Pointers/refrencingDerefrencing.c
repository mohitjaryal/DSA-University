// refrencing and de refrencing
#include <stdio.h>
int main() {
    int a = 101;
    // int b = 201;
    int *ptr;
    ptr = &a;
      printf("a befor= %d\n", *ptr);
    *ptr = 102;
    printf("a after = %d\n", *ptr);

    return 0;
}