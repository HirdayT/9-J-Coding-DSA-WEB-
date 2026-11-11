#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// function to create a new node
struct node *create_node(int val) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// function to insert a node into bst
struct node *insert(struct node *root, int val) {
    if (root == NULL) {
        return create_node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

// inorder traversal (left, root, right)
void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// preorder traversal (root, left, right)
void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// postorder traversal (left, right, root)
void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node *root = NULL;
    int choice, val;

    // menu loop
    do {
        printf("\n--- binary search tree operations ---\n");
        printf("1. insert node\n");
        printf("2. inorder traversal\n");
        printf("3. preorder traversal\n");
        printf("4. postorder traversal\n");
        printf("5. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("enter value to insert: ");
                scanf("%d", &val);
                root = insert(root, val);
                printf("inserted successfully!\n");
                break;
            case 2:
                printf("\ninorder: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("\npreorder: ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("\npostorder: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("exiting...\n");
                break;
            default:
                printf("invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}