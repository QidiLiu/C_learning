#include <stdio.h>

int main(void)
{
    float money, tax_added;

    printf("Enter an amount:");
    scanf("%f", &money);
    
    tax_added = money * 1.05;
    printf("With tax added $%.2f\n", tax_added);
    
    return 0;
}
