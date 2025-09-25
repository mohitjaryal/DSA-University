#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: "); // asking for number of elements
    scanf("%d", &n);

    int arr[n]; // array

    printf("Enter %d elements:\n", n); // taking element input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Created array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask for position to delete
    int position;
    printf("Enter the position (0 to %d) of element to delete: ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements left using while loop
        int i = position;
        while (i < n - 1) {
            arr[i] = arr[i + 1];
            i++;
        }
        n--; // reducing size

        printf("Array after deletion:\n");
        int j = 0;
        while (j < n) {
            printf("%d ", arr[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}