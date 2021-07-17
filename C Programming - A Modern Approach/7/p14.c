// Compute the square root of a float number with a Newton-Raphson method.

#include <stdio.h>

int main(void)
{
    float x, y;
    int i;
    printf("Enter a float number: ");
    scanf("%f", &x);
    y = x;
    for (i = 0; i < 10; i++) {
        y = (y + x / y) / 2;
    }
    printf("The square root of %.3f is %.3f\n", x, y);
    return 0;
}