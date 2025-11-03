#include <stdio.h>

int main() {
    int n, x, i, leftSum, rightSum, pivot = -1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        for(i = 1; i <= x; i++)
            leftSum += i;

        for(i = x; i <= n; i++)
            rightSum += i;

        if(leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);
    return 0;
}
