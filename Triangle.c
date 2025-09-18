#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 sidess of triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c)
    printf("Equilateral trianlge");
    else if(a==b||b==c||c==a)
    printf("Isosaceles triangle");
    else 
    printf("Scalene");
    return 0;
}