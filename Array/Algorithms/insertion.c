// insertion array program

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: "); 
    scanf("%d", &n);

    int arr[n+1]; // space for one extra element

    // taking element input
    printf("Enter %d elements:\n", n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // displaying the created array
    printf("Created array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask for position to insert
    int position, element;
    printf("Enter the position (0 to %d) where you want to insert: ", n);
    scanf("%d", &position);

    // asking for the element to add 
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    if (position < 0 || position > n) {
        printf("Invalid position!\n");
    } else {
        // shift elements to the right
        int i = n;
        while (i > position) {
            arr[i] = arr[i - 1];
            i--;
        }
        arr[position] = element; //  insert the element

        printf("Array after insertion:\n");
        int j = 0;
        while (j <= n) { // ✅ print n+1 elements
            printf("%d ", arr[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}