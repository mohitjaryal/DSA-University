// Bubble sort
#include"stdio.h"
int main(){
    int arr[10] ={2,6,4,8,10,12,89,68,45,37};

    int pass,hold,i;

    // input
    printf("Data items in original order :\n");
   for (int i = 0; i < 10; i++)
   {
    printf("%4d",arr[i]);
   }
   // for spacing
   printf("\n");
   for (int pass = 0; pass < 10; pass++)
   {
    for (int i = 0; i < 10; i++)
    {
       if (arr[i]>arr[i+1])
       {
       hold = arr[i];
       arr[i] = arr[i +1];
       arr[i+1] = hold;
       }
       
    }
   }
   printf("Items in assending order \n");
   for (int i = 0; i < 10; ++i)
   {
    printf("%4d", arr[i]);
   }
   }