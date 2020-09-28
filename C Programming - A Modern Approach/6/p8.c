#include <stdio.h>

int main(void)
{
    int days_n, n, i, j;
    printf("Enter number of days in month: ");
    scanf("%d", &days_n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &n);
    printf("\n"); //空一行

    j = n;
    while (j > 1)
    {
        printf("\t");
        j -= 1;
    }
    

    for(i = 1; i <= days_n; i++)
    {
        printf("%d", i);
        if(n < 7)
        {
            printf("\t");
            n += 1;
        }
        else
        {
            printf("\n");
            n = 1;
        }
        
    }

    return 0;
}