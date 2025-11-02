#include <stdio.h>

int main() {
    int n, i, a[100], first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    first = second = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] < first) {
            second = a[i];
        }
    }

    if (first == second)
        printf("All elements are equal.\n");
    else
        printf("Second largest element = %d\n", second);
    return 0;
}
