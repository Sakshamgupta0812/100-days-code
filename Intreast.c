#include<stdio.h>

int main()
{
    float principal, rate, time, simpleInt, compoundInt;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    simpleInt = (principal * rate * time) / 100;
    compoundInt = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInt);
    printf("Compound Interest = %.2f\n", compoundInt);

    return 0;
}