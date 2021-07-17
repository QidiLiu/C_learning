/* Translate phone numbers in alphabetic format to numeric format*/
#include <stdio.h>

int main(void)
{
    char phoneNumber[20];
    int i = 0;
    int strLen = 0;
    
    printf("Enter a phone number: ");
    scanf("%s", phoneNumber);
    while (1)
    {
        if (phoneNumber[i] == '\0')
            break;
        else
            i++;
            strLen++;
    }

    for (i = 0; i < strLen; i++)
    {
        if (phoneNumber[i] == 'A' || phoneNumber[i] == 'B' || phoneNumber[i] == 'C')
        {
            printf("2");
        }
        else if (phoneNumber[i] == 'D' || phoneNumber[i] == 'E' || phoneNumber[i] == 'F')
        {
            printf("3");
        }
        else if (phoneNumber[i] == 'G' || phoneNumber[i] == 'H' || phoneNumber[i] == 'I')
        {
            printf("4");
        }
        else if (phoneNumber[i] == 'J' || phoneNumber[i] == 'K' || phoneNumber[i] == 'L')
        {
            printf("5");
        }
        else if (phoneNumber[i] == 'M' || phoneNumber[i] == 'N' || phoneNumber[i] == 'O')
        {
            printf("6");
        }
        else if (phoneNumber[i] == 'P' || phoneNumber[i] == 'Q' || phoneNumber[i] == 'R' || phoneNumber[i] == 'S')
        {
            printf("7");
        }
        else if (phoneNumber[i] == 'T' || phoneNumber[i] == 'U' || phoneNumber[i] == 'V')
        {
            printf("8");
        }
        else if (phoneNumber[i] == 'W' || phoneNumber[i] == 'X' || phoneNumber[i] == 'Y' || phoneNumber[i] == 'Z')
        {
            printf("9");
        }
        else if (phoneNumber[i] == '\n' || phoneNumber[i] == '\0')
        {
            printf("\n");
        }
        else
        {
            printf("%c", phoneNumber[i]);
        }
    }
    return 0;
}