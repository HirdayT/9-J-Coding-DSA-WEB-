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

// bubble sort implementation
void bubble_sort() {
    if (n == 0) {
        printf("\nplease enter elements first!\n");
        return;
    }
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\narray sorted using bubble sort successfully!\n");
    display();
}

// insertion sort implementation
void insertion_sort() {
    if (n == 0) {
        printf("\nplease enter elements first!\n");
        return;
    }
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\narray sorted using insertion sort successfully!\n");
    display();
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- sorting algorithms ---\n");
        printf("1. input array\n");
        printf("2. bubble sort\n");
        printf("3. insertion sort\n");
        printf("4. display array\n");
        printf("5. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: input_array(); break;
            case 2: bubble_sort(); break;
            case 3: insertion_sort(); break;
            case 4: display(); break;
            case 5: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}