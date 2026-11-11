#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// function to display circular linked list
void display() {
    if (head == NULL) {
        printf("\nlist is empty!\n");
        return;
    }
    struct node *temp = head;
    printf("\ncircular linked list: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

// function to create initial circular linked list
void create() {
    int n, val;
    printf("enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("enter data for node %d: ", i + 1);
        scanf("%d", &val);

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;

        if (head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            struct node *temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;
        }
    }
    printf("list created successfully!\n");
    display();
}

// function to insert at any position (1 for beginning, middle, or end)
void insert() {
    int pos, val;
    printf("enter position to insert: ");
    scanf("%d", &pos);
    printf("enter value to insert: ");
    scanf("%d", &val);

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;

    // insert at beginning
    if (pos == 1) {
        if (head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            struct node *temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newnode->next = head;
            head = newnode;
            temp->next = head;
        }
        printf("inserted successfully!\n");
        display();
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    printf("inserted successfully!\n");
    display();
}

// function to delete by position
void delete_node() {
    if (head == NULL) {
        printf("\nlist underflow (empty)!\n");
        return;
    }

    int pos;
    printf("enter position to delete: ");
    scanf("%d", &pos);

    struct node *temp = head;

    // delete first node
    if (pos == 1) {
        if (head->next == head) {
            free(head);
            head = NULL;
        } else {
            struct node *last = head;
            while (last->next != head) {
                last = last->next;
            }
            head = head->next;
            last->next = head;
            free(temp);
        }
        printf("deleted successfully!\n");
        display();
        return;
    }

    struct node *prev = NULL;
    for (int i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
    printf("deleted successfully!\n");
    display();
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- circular linked list operations ---\n");
        printf("1. create\n");
        printf("2. insert by position\n");
        printf("3. delete by position\n");
        printf("4. display\n");
        printf("5. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: insert(); break;
            case 3: delete_node(); break;
            case 4: display(); break;
            case 5: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}