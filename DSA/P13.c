#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// function to display circular queue elements
void display() {
    if (front == -1) {
        printf("\nqueue is empty!\n");
        return;
    }
    printf("\nqueue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) {
            break;
        }
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// function to insert an element into the circular queue
void enqueue() {
    int val;
    // check for overflow
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("\nqueue overflow!\n");
        return;
    }
    printf("enter value to insert: ");
    scanf("%d", &val);

    if (front == -1) { // first element insertion
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    queue[rear] = val;
    printf("enqueued successfully!\n");
    display();
}

// function to remove an element from the circular queue
void dequeue() {
    if (front == -1) {
        printf("\nqueue underflow!\n");
        return;
    }

    printf("deleted element: %d\n", queue[front]);

    if (front == rear) { // single element remaining
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    display();
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- circular queue operations ---\n");
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. display\n");
        printf("4. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}