/* Input a 12-hour time and convert to a 24-hour time.*/
#include <stdio.h>

int main(void)
{
    int hour, minute;
    char ch;
    
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);
    while (1)
    {
        ch = getchar();
        switch (ch)
        {
            case 'P': case 'p':
                hour += 12; break;
            case '\n':
                break;
        }
        if (ch == '\n')
            break;
    }
    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
    return 0;
}