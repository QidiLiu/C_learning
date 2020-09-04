/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    int number;
    float price, commission, value, commission_2;

    printf("Enter price of trade: ");
    scanf("%f", &price);
    printf("How much have you bought: ");
    scanf("%d", &number);
    value = price*number;

    if (value < 2500.00f)
        commission = 30.00f + .017f*value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f*value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f*value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f*value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f*value;
    else
        commission = 255.00f + .0009f*value;

    if (commission < 39.00f)
        commission = 39.00f;
    
    if (value < 2000.00f)
        commission_2 = 33.00f + .03f*value;
    else
        commission_2 = 33.00f + .02f*value;

    printf("Commission: $%.2f\n", commission);
    printf("Commission of competitor: $%.2f\n", commission_2);
    
    return 0;
}