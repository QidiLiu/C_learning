#include <stdio.h>

int main(void)
{
    float x, y;

    printf("Enter value of x:");
    scanf("%f", &x);

    y = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;    
    printf("3x^5 + 2x^4 + 5x^3 - x^2 + 7x - 6 = %.2f\n", y);
    
    return 0;
}