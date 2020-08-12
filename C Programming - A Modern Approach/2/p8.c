#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, b1, b2, b3;
    //b1, b2, b3: Balance remaining after first/second/third payment.

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    b1 = loan - monthly_payment + loan*interest_rate/100/12;
    printf("Balance remaining after first payment: $%.2f\n", b1);
    b2 = b1 - monthly_payment + b1*interest_rate/100/12;
    printf("Balance remaining after second payment: $%.2f\n", b2);
    b3 = b2 - monthly_payment + b2*interest_rate/100/12;
    printf("Balance remaining after third payment: $%.2f\n", b3);
    
    return 0;
}