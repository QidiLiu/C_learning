/* User can add, sub, mul or div a and b. */
#include <stdio.h>

int main(void)
{
    float a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter \"+\" or \"-\" or \"*\" or \"/\": ");
    do{scanf("%c", &c);}while(c != '+' && c != '-' && c != '*' && c != '/');
    if (c == '+')
        printf("%f + %f = %f\n", a, b, a + b);
    else if (c == '-')
        printf("%f - %f = %f\n", a, b, a - b);
    else if (c == '*')
        printf("%f * %f = %f\n", a, b, a * b);
    else if (c == '/')
        printf("%f / %f = %f\n", a, b, a / b);
    else
        printf("Invalid input\n");
    return 0;
}