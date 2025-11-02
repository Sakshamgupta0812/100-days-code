#include <stdio.h>

int main() {
    int a[10][10], n, i, j, k, flag = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (a[i][i] == a[k][k]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
