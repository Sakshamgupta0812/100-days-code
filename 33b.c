#include <stdio.h>

int main() {
    int n, i, a[100], num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for (i = n - 1; i >= 0 && a[i] > num; i--) {
        a[i + 1] = a[i];
    }

    a[i + 1] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
