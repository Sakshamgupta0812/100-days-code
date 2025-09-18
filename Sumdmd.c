#include<stdio.h>

int main()
{
    int a, b, sum, sub, mul;
    float div;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %.2f\n", div);
    return 0;
}
