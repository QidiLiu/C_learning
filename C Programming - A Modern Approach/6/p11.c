#include <stdio.h>

int main(void)
{
    int n, i, j;
    float sum, fac;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1, sum = 1.0f; i <= n; i++)
    {
        for (j = 1, fac = 1.0f; j <= i; j++)
        {
            fac *= j;
        }
        sum += 1/fac;
    }
    printf("e = %f\n", sum);
    return 0;
}
