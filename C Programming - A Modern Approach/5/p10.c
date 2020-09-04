#include <stdio.h>

int main(void)
{
    int num, tens;
    printf("Enter numerical grade: ");
    scanf("%d", &num);

    if(num > 100 || num <0)
        printf("Input Error!");
    else
    {
        tens = num/10;
        switch (tens)
        {
        case 10:
        case 9:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        
        default:
            printf("Letter grade: F");
            break;
        }
    }

    return 0;
}