#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;
int cqueue[SIZE], cfront = -1, crear = -1;

void enqueue() {
    int val;
    if (rear == SIZE - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        printf("Enter value: ");
        scanf("%d", &val);
        queue[++rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        printf("Deleted: %d\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear)
        printf("Queue Empty\n");
    else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

void cenqueue() {
    int val;
    if ((cfront == 0 && crear == SIZE - 1) || (cfront == crear + 1))
        printf("Circular Queue Overflow\n");
    else {
        printf("Enter value: ");
        scanf("%d", &val);
        if (cfront == -1) cfront = 0;
        crear = (crear + 1) % SIZE;
        cqueue[crear] = val;
    }
}

void cdequeue() {
    if (cfront == -1)
        printf("Circular Queue Underflow\n");
    else {
        printf("Deleted: %d\n", cqueue[cfront]);
        if (cfront == crear)
            cfront = crear = -1;
        else
            cfront = (cfront + 1) % SIZE;
    }
}

void cdisplay() {
    if (cfront == -1)
        printf("Circular Queue Empty\n");
    else {
        int i = cfront;
        printf("Circular Queue: ");
        while (1) {
            printf("%d ", cqueue[i]);
            if (i == crear) break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    int ch;
    do {
        printf("\n1.Enqueue(Linear)\n2.Dequeue(Linear)\n3.Display(Linear)\n");
        printf("4.Enqueue(Circular)\n5.Dequeue(Circular)\n6.Display(Circular)\n7.Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: cenqueue(); break;
            case 5: cdequeue(); break;
            case 6: cdisplay(); break;
        }
    } while (ch != 7);
    return 0;
}
