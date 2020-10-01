#include <stdio.h>

int main(void)
{
    int i, j;
    float sum, fac, sigma;
    
    printf("Enter the error: ");
    scanf("%f", &sigma);
    for (i = 1, sum = 1.0f;1/fac > sigma; i++)
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
