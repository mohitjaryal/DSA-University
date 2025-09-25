// Binary Search
#include "stdio.h"
int main(){
    int loc = -1, target, beg = 0, last = 9, mid;
    int arr[10] = {2,3,4,12,24,30,36,40,50,60};
    
    // input 
    printf("Enter the value to search :");
    scanf("%d",&target);

    while (beg<=last)
    {
       mid = (beg + last ) / 2; // finding mid
       if (arr[mid] == target)
       {
        loc = mid;
        break;
       }
       else if (arr[mid] > target)
       {
       last = mid - 1;
       }
       else if (arr[mid]<target)
       {
        beg = mid + 1;
       }
    }
    if (loc!= -1)
    {
       printf("Element found at %d\n",loc);
    }
    else{
        printf("Element not found\n");
    }
    getchar();
    
}