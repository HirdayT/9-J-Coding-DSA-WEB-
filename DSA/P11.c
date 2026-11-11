#include <stdio.h>
#define MAX 100
int arr[MAX];
int n = 0;

// function to display array elements
void display() {
    if (n == 0) {
        printf("\narray is empty!\n");
        return;
    }
    printf("\narray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// function to input array elements
void input_array() {
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    display();
}

// linear search implementation
void linear_search() {
    if (n == 0) {
        printf("\nplease enter elements first!\n");
        return;
    }
    int target, found = 0;
    printf("enter element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("element found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("element not found in the array!\n");
    }
}

// binary search implementation (requires sorted array)
void binary_search() {
    if (n == 0) {
        printf("\nplease enter elements first!\n");
        return;
    }
    int target;
    printf("enter element to search (note: array must be sorted): ");
    scanf("%d", &target);

    int low = 0, high = n - 1, found = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            printf("element found at position %d (index %d)\n", mid + 1, mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("element not found in the array!\n");
    }
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- search algorithms ---\n");
        printf("1. input array\n");
        printf("2. linear search\n");
        printf("3. binary search\n");
        printf("4. display array\n");
        printf("5. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: input_array(); break;
            case 2: linear_search(); break;
            case 3: binary_search(); break;
            case 4: display(); break;
            case 5: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}