#include <stdio.h>

int main(void)
{
    int number, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%d\t$%-7.2f\t%.2d/%d/%d\n",number, price, month, day, year);

    return 0;
}
