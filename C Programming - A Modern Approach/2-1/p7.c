#include <stdio.h>

int main(void)
{
    int dollar, n_20, n_10, n_5, n_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    n_20 = dollar / 20;
    n_10 = (dollar - 20*n_20) / 10;
    n_5 = (dollar - 20*n_20 - 10*n_10) / 5;
    n_1 = dollar - 20*n_20 - 10*n_10 - 5*n_5;

    printf("$20 bills: %d\n", n_20);
    printf("$10 bills: %d\n", n_10);
    printf(" $5 bills: %d\n", n_5);
    printf(" $1 bills: %d\n", n_1);
    
    return 0;
}