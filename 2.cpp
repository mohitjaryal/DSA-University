#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertNode(int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head)
        head = newNode;
    else {
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(int value) {
    Node *temp = head, *prev = nullptr;
    while (temp && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) {
        cout << "Element not found\n";
        return;
    }
    if (!prev)
        head = temp->next;
    else
        prev->next = temp->next;
    delete temp;
}

void searchNode(int value) {
    Node* temp = head;
    int pos = 0;
    while (temp) {
        if (temp->data == value) {
            cout << "Element found at position " << pos << endl;
            return;
        }
        pos++;
        temp = temp->next;
    }
    cout << "Element not found\n";
}

void displayList() {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, val;
    do {
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                insertNode(val);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> val;
                deleteNode(val);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> val;
                searchNode(val);
                break;
            case 4:
                displayList();
                break;
        }
    } while (choice != 5);
    return 0;
}
