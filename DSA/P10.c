#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// function to create a binary tree node dynamically
struct node *create_tree() {
    int val;
    printf("enter data (-1 for no node): ");
    scanf("%d", &val);

    if (val == -1) {
        return NULL;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;

    printf("enter left child of %d:\n", val);
    newnode->left = create_tree();

    printf("enter right child of %d:\n", val);
    newnode->right = create_tree();

    return newnode;
}

// function for inorder traversal (left, root, right)
void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct node *root = NULL;
    int choice;

    // menu loop
    do {
        printf("\n--- binary tree operations ---\n");
        printf("1. create tree\n");
        printf("2. display tree (inorder)\n");
        printf("3. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nenter root node:\n");
                root = create_tree();
                printf("tree created successfully!\n");
                break;
            case 2:
                if (root == NULL) {
                    printf("\ntree is empty!\n");
                } else {
                    printf("\ninorder traversal: ");
                    inorder(root);
                    printf("\n");
                }
                break;
            case 3:
                printf("exiting...\n");
                break;
            default:
                printf("invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}