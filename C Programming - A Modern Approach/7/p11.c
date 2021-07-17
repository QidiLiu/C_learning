// convert name to a specific format

#include <stdio.h>

int main(void)
{
    char first[80];
    char last[80];
    printf("Enter a first and last name: ");
    scanf("%s %s", first, last);
    for (int i = 0; i < 80; i++)
    {
        if (i > 0)
            first[i] = '\0';
    }
    printf("%s, %s.\n", last, first);
    return 0;
}