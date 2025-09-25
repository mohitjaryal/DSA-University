#include "stdio.h"
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int *a;
    a = &arr;
    printf("%d\n", a);
    printf("%d\n", &arr);
    printf("%d\n", *a);
    printf("%d\n", arr[0]);
    printf("%d\n", a+1);
    printf("%d\n", &arr[1]);
    printf("%d\n", *(a+1));
    printf("%d\n", arr[1]);

    return 0;
}