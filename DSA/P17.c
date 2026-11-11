#include <stdio.h>

#define MAX 50

int main() {
    int mat[MAX][MAX], triplet[MAX * MAX + 1][3];
    int m, n, non_zero = 0;

    printf("enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0) {
                non_zero++;
            }
        }
    }

    // populate triplet representation
    triplet[0][0] = m;
    triplet[0][1] = n;
    triplet[0][2] = non_zero;

    int k = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = mat[i][j];
                k++;
            }
        }
    }

    printf("\nsparse matrix in triplet form (row, col, value):\n");
    printf("------------------------------------\n");
    printf("Row\tCol\tValue\n");
    printf("------------------------------------\n");
    for (int i = 0; i <= non_zero; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }
    printf("------------------------------------\n");

    return 0;
}