// Calculating the factorial of a number

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n, i, fact = 1;
    while (fact > 0)
    {
        fact = 1;
        for (i = n; i > 1; i--)
            fact *= i;
        n++;
        //printf("The fact is now up to: %d\n", fact);
    }
    printf("The possible maximal n is: %d", n);
    return 0;
}

/******************************************************************************
 * results
 * short: 9
 * int: 18
 * long: 18
 * long long: 22
 * float:???
******************************************************************************/