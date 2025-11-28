#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int val) {
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

int searchElement(int arr[], int n, int val) {
    for (int i = 0; i < n; i++)
        if (arr[i] == val)
            return i;
    return -1;
}

void display(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100], n, choice, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter position and value: ");
                scanf("%d%d", &pos, &val);
                insertElement(arr, &n, pos, val);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteElement(arr, &n, pos);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &val);
                pos = searchElement(arr, n, val);
                if (pos != -1) printf("Found at index %d\n", pos);
                else printf("Not found\n");
                break;
            case 4:
                display(arr, n);
                break;
        }
    } while (choice != 5);
    return 0;
}
