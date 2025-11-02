#include <stdio.h>

int main() {
    long int num, rem, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &num);

    while (num > 0) {
        rem = num % 10;
        if (rem == 0)
            result = result + (1 * place);
        else
            result = result + (0 * place);
        num = num / 10;
        place = place * 10;
    }

    printf("1's Complement = %ld\n", result);
    return 0;
}
