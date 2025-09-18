#include<stdio.h>

int main()
{
    float radius, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    printf("Circumference of the circle = %.2f\n", circumference);
    printf("Area of the circle = %.2f\n", area);

    return 0;
}