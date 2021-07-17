// Compute the average length of a word in the input.
// The example the book was given is wrong. The result should be "3.6".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    float average_length;
    int i = 0;
    int space_count = 0;
    printf("Enter a sentence: ");
    gets(sentence);
    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            space_count++;
        }
        i++;
    }
    printf("i: %d\n", i);
    printf("space_count: %d\n", space_count);
    printf("Average word length: %.1f\n", ((float)i - (float)space_count) / ((float)space_count + 1));
}
    