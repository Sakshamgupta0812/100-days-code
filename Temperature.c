#include<stdio.h>

int main()
{
    int tempC;
    float tempF;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &tempC);
    tempF = (tempC * 9.0 / 5.0) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", tempF);
    return 0;
}