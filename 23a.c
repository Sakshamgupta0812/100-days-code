#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    float numerator = 2, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);
        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}
