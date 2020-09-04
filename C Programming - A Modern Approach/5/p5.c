#include <stdio.h>

int main(void)
{
    float income;
    printf("Enter the income: ");
    scanf("%f", &income);

    if(income < 750)
        printf("Tax: $%.2f", income*0.01);
    else if(income < 2250)
        printf("Tax: $%.2f", 7.5f + (income - 750)*0.02);
    else if(income < 3750)
        printf("Tax: $%.2f", 37.5f + (income - 2250)*0.03);
    else if(income < 5250)
        printf("Tax: $%.2f", 82.5f + (income - 3750)*0.04);
    else if(income < 7000)
        printf("Tax: $%.2f", 142.5f + (income - 5250)*0.05);
    else
        printf("Tax: $%.2f", 230.0f + (income - 7000)*0.06);

    return 0;
}