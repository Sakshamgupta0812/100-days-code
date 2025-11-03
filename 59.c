#include <stdio.h>

int main() {
    int n, k, i, j, sum, maxSum = -1000000;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i <= n - k; i++) {
        sum = 0;
        for(j = i; j < i + k; j++)
            sum += arr[j];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}
