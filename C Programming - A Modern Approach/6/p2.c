#include <stdio.h>

int main(void)
{   
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    while(1)
    {
        if(a == 0)
        {
            printf("Greatest common divisor: %d", b);
            break; 
        }
        else
        {
            c = b % a;
            b = a;
            a = c;
        }
    }

    return 0;
}