#include<stdio.h>

int main()
{
    int l, b, peri;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);
    peri = 2 * (l + b);
    printf("The perimeter of the rectangle is: %d\n", peri);
    return 0;
}