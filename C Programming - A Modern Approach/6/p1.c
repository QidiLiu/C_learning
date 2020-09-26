#include <stdio.h>

int main(void)
{
    float input_n, max_n;

    printf("Enter a number: ");
    scanf("%f", &input_n);
    max_n = input_n;

    while(input_n > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &input_n);
        if(input_n > max_n)
            max_n = input_n;
    }

    printf("\nThe largest number entered was %.2f\n", max_n);

    return 0;
}