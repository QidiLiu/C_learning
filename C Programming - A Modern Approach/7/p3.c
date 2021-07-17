/* Sums a series of numbers (using long int variables) */

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is: %ld\n", sum);
    
    return 0;
}