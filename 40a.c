#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }

    printf("\n");

    return 0;
}
