#include<stdio.h>

int main()
{
    float CP, SP, profitLoss, percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    printf("Enter Selling Price: ");
    scanf("%f", &SP);

    profitLoss = SP - CP;

    if(profitLoss > 0)
    {
        percentage = (profitLoss / CP) * 100;
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if(profitLoss < 0)
    {
        percentage = (profitLoss / CP) * 100; 
        printf("Loss Percentage = %.2f%%\n", percentage);
    }

    return 0;
}