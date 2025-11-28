// comparing two pointer variables

#include "stdio.h"
int main()
{
    int a = 2;
    int b = 4;
    int *ptr1 = &a;
    int *ptr2 = &b; 
    if (*ptr1 < *ptr2)
    {
        printf("%d is less then %d",*ptr1 ,*ptr2);
    } else if (*ptr2 > *ptr1)
    {
        printf("%d is greater then %d",*ptr2 ,*ptr1);
    }
    
    return 0;
}