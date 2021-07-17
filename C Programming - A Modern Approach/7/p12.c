// Evaluate the expression

#include <stdio.h>

int main(void)
{
    char ch_1, ch_2;
    float a, b, c;
    float fun(float, float, char);
    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &a, &ch_1, &b, &ch_2, &c);

    fun(a, b, ch_1);
    printf("Value of expression: %f\n", fun(fun(a, b, ch_1), c, ch_2));
    return 0;
}

float fun(float x, float y, char ch)
{
    switch (ch)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0;
    }
}