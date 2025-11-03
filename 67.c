#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d sorted elements: ", m);
    for(i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int merged[m + n];
    i = j = k = 0;

    while(i < m && j < n) {
        if(arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while(i < m)
        merged[k++] = arr1[i++];

    while(j < n)
        merged[k++] = arr2[j++];

    for(i = 0; i < m + n; i++) {
        printf("%d", merged[i]);
        if(i != m + n - 1)
            printf(" ");
    }

    return 0;
}
