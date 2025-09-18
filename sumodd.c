#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1, num = 0; num < n; i += 2, num++)
    {
        sum += i;
    }

    printf("Sum of the first %d odd numbers = %d\n", n, sum);
    return 0;
}