#include <iostream>
using namespace std;

void insertElement(int a[], int &n, int e, int p) {
    for (int i = n; i > p; i--) a[i] = a[i - 1];
    a[p] = e; n++;
}

void deleteElement(int a[], int &n, int p) {
    for (int i = p; i < n - 1; i++) a[i] = a[i + 1];
    n--;
}

int searchElement(int a[], int n, int e) {
    for (int i = 0; i < n; i++) if (a[i] == e) return i;
    return -1;
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int a[100], n, c, e, p;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    while (true) {
        cout << "\n1.Insert  2.Delete  3.Search  4.Display  5.Exit\nChoice: ";
        cin >> c;
        if (c == 5) break;
        switch (c) {
            case 1: cout << "Enter element & position: "; cin >> e >> p; insertElement(a, n, e, p); break;
            case 2: cout << "Enter position to delete: "; cin >> p; deleteElement(a, n, p); break;
            case 3: cout << "Enter element to search: "; cin >> e;
                    p = searchElement(a, n, e);
                    cout << (p != -1 ? "Found at index " + to_string(p) : "Not found") << "\n"; break;
            case 4: display(a, n); break;
            default: cout << "Invalid choice\n";
        }
    }
}
