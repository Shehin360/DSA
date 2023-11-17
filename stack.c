#include <stdio.h>

int stack[100], i, choice = 0, n, top = -1;

void push();
void display();
void pop();

int main() {
    int choice;

    printf("Enter the number of elements in the stack: ");
    scanf("%d", &n);

    while (1) {
        printf("Select the operation:\n");
        printf("1. Push\n");
        printf("2. Display\n");
        printf("3. Pop\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                return 0; // Exiting the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void push() {
    int val;

    if (top == n - 1) {
        printf("Overflow: Stack is full\n");
    } else {
        printf("Enter the value: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow: Stack is empty\n");
    } else {
        top = top - 1;
        printf("Element popped from stack\n");
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
