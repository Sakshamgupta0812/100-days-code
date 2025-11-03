#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (between 0 and %d, one missing): ", n, n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        sum += arr[i];

    total = n * (n + 1) / 2;

    printf("Missing number: %d", total - sum);

    return 0;
}
