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

// function to merge two sorted sub-arrays
void merge(int low, int mid, int high) {
    int temp[MAX];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= high) {
        temp[k++] = arr[j++];
    }

    for (i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

// recursive merge sort function
void merge_sort(int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- merge sort program ---\n");
        printf("1. input array\n");
        printf("2. merge sort\n");
        printf("3. display array\n");
        printf("4. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: input_array(); break;
            case 2:
                if (n == 0) {
                    printf("\nplease enter elements first!\n");
                } else {
                    merge_sort(0, n - 1);
                    printf("\narray sorted using merge sort successfully!\n");
                    display();
                }
                break;
            case 3: display(); break;
            case 4: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}