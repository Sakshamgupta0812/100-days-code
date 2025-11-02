#include <stdio.h>

int main() {
    int num, rem, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 10;
        if (rem % 2 != 0) {
            product = product * rem;
            hasOdd = 1;
        }
        num = num / 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits\n");

    return 0;
}
