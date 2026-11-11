#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

// function to display doubly linked list
void display() {
    if (head == NULL) {
        printf("\nlist is empty!\n");
        return;
    }
    struct node *temp = head;
    printf("\ndoubly linked list: NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// function to create initial doubly linked list
void create() {
    int n, val;
    printf("enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("enter data for node %d: ", i + 1);
        scanf("%d", &val);

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            struct node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
    printf("list created successfully!\n");
    display();
}

// function to insert at any position
void insert() {
    int pos, val;
    printf("enter position to insert: ");
    scanf("%d", &pos);
    printf("enter value to insert: ");
    scanf("%d", &val);

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;

    // insert at beginning
    if (pos == 1) {
        newnode->next = head;
        if (head != NULL) {
            head->prev = newnode;
        }
        head = newnode;
        printf("inserted successfully!\n");
        display();
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("invalid position!\n");
        free(newnode);
    } else {
        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
        printf("inserted successfully!\n");
        display();
    }
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
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        printf("deleted successfully!\n");
        display();
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("position not found!\n");
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        free(temp);
        printf("deleted successfully!\n");
        display();
    }
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- doubly linked list operations ---\n");
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