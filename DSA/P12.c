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

// selection sort implementation
void selection_sort() {
    if (n == 0) {
        printf("\nplease enter elements first!\n");
        return;
    }
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    printf("\narray sorted using selection sort successfully!\n");
    display();
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- selection sort program ---\n");
        printf("1. input array\n");
        printf("2. selection sort\n");
        printf("3. display array\n");
        printf("4. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: input_array(); break;
            case 2: selection_sort(); break;
            case 3: display(); break;
            case 4: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}