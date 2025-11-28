// increment

#include "stdio.h"
int main()
{
    int a[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *ptr1;
    ptr1 = &a[2];
    printf(" Before %d\n", *ptr1);
    ptr1++;
    printf(" After %d\n", *ptr1);
    getchar();
    return 0;
}