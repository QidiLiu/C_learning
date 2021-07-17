/* Calculate the value of a word by summing the values of the letters in the word*/
#include <stdio.h>

int main(void)
{
    char word[80];
    int value, strLen = 0;

    printf("Enter a word: ");
    scanf("%s", &word);
    while(word[strLen] != '\0')
    {
        switch (word[strLen])
        {
        case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u':
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            value += 1; break;
        case 'd': case 'g': 
        case 'D': case 'G':
            value += 2; break;
        case 'b': case 'c': case 'm': case 'p': 
        case 'B': case 'C': case 'M': case 'P':
            value += 3; break;
        case 'f': case 'h': case 'v': case 'w':
        case 'F': case 'H': case 'V': case 'W':
            value += 4; break;
        case 'k':
        case 'K':
            value += 5; break;
        case 'j': case 'x':
        case 'J': case 'X':
            value += 8; break;
        case 'q': case 'z':
        case 'Q': case 'Z':
            value += 10; break;
        default:
            value += 0; break;
        }
        strLen++;
    }
    printf("Scrabble value: %d\n", value);

    return 0;
}