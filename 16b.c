#include <stdio.h>

int main()
{
    int num, rev = 0, reminder, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 0) 
    {
        reminder = num % 10;
        rev = rev * 10 + reminder;
        num = num / 10; 
    }

    if (temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
