#include <stdio.h>

#define n 20

int pq[n];
int f = -1;
int r = -1;

void enqueue(int data) {
    if (r == n - 1) {
        printf("Queue overflow\n");
    } else if (f == -1 && r == -1) {
        f = 0;
        r = 0;
        pq[r] = data;
    } else {
        int i;
        for (i = r; i >= 0 && data > pq[i]; i--) {
            pq[i + 1] = pq[i];
        }
        pq[i + 1] = data;
        r++;
    }
}

int dequeue() {
    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
        return -1; // Assuming -1 represents an empty queue
    } else {
        int dequeuedElement = pq[f];
        f++;
        if (f > r) {
            f = -1;
            r = -1;
        }
        return dequeuedElement;
    }
}

void display() {
    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Elements in the priority queue are: ");
        for (int i = f; i <= r; i++) {
            printf("%d ", pq[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch = 1, x;
    while (ch < 4 && ch != 0) {
        printf("\nPress 1: Insert an element");
        printf("\nPress 2: Delete an element");
        printf("\nPress 3: Display the elements");
        printf("\nEnter your choice: ");

        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &x);
                enqueue(x);
                break;

            case 2:
                x = dequeue();
                if (x != -1) {
                    printf("Dequeued element is: %d\n", x);
                }
                break;

            case 3:
                display();
                break;
        }
    }
    return 0;
}
