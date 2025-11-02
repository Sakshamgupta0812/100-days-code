#include <stdio.h>

int main() {
    int n, digit, count[10] = {0}, max = 0, most_digit, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            most_digit = i;
        }
    }

    printf("Digit that occurs the most times: %d\n", most_digit);
    printf("It occurs %d times\n", max);

    return 0;
}
