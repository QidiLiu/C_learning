#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, times_payment, balance;
    //b1, b2, b3: Balance remaining after first/second/third payment.

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter times of payment: ");
    scanf("%f", &times_payment);

    balance = loan - monthly_payment + loan*interest_rate/100/12;
    printf("Balance remaining after first payment: $%.2f\n", balance);
    times_payment -= 1;

    while (times_payment >= 1)
    {
        balance = balance - monthly_payment + balance*interest_rate/100/12;
        printf("Balance remaining after next payment: $%.2f\n", balance);
        times_payment -= 1;
    }
    
    return 0;
}