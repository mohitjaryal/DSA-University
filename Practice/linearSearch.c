#include "stdio.h"
int main(){
    int arr[10] = {2,4,6,8,10,12,89,68,45,37};
    int i, loc = -1, target;

    // input 
    printf("Enter target value :");
    scanf("%d",&target);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
           loc = i;
           break;
        }
        if (loc!= -1)
        {
           printf("Element found at %d",loc);
        }
        else
        printf("Element not found");
              
    }
    
}