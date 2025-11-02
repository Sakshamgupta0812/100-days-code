#include <stdio.h>

int main() {
    int n, i, pos, num, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
