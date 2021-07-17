// Counting the number of vowel letters in a sentence.

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    int count = 0, i = 0;
    printf("Enter a sentence: ");
    gets(s);

    while (s[i] != '\0')
    {
        switch (s[i])
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            count++;
        }
        i++;
    }
    printf("Your sentence contains %d vowels", count);
}