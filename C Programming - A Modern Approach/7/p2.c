// Prints a table of squares using an odd method

#include <stdio.h>

int main(void)
{
    int i, n, odd, square, move_on;
    char continue_char;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    continue_char = 0;
    for (square = 1; i <= n; odd += 2)
    {
        if (i % 24 == 0)
        {
            printf("Please enter to continue...\n");
            
            while (1)
            {
                continue_char = getchar();
                if (continue_char == '\n')
                {
                    break;
                }
            }
        }
        printf("%10d\t\t\t%10d\n", i, square);
        ++i;
        square += odd;
    }

    return 0;
}