#include <stdio.h>

int main() {
    int n, i, a[100], even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Count of even numbers = %d\n", even);
    printf("Count of odd numbers = %d\n", odd);

    return 0;
}
