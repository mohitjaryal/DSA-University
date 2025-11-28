#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;

void insertNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(int val) {
    struct Node *temp = head, *prev = NULL;
    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }
    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;
    free(temp);
}

void searchNode(int val) {
    struct Node* temp = head;
    int pos = 0;
    while (temp != NULL) {
        if (temp->data == val) {
            printf("Found at position %d\n", pos);
            return;
        }
        pos++;
        temp = temp->next;
    }
    printf("Not found\n");
}

void displayList() {
    struct Node* temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, val;
    do {
        printf("\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insertNode(val);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                deleteNode(val);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &val);
                searchNode(val);
                break;
            case 4:
                displayList();
                break;
        }
    } while (choice != 5);
    return 0;
}
