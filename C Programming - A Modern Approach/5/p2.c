#include <stdio.h>

int main(void)
{
    int h, m, h_12;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    if(h > 12)
        h_12 = h - 12;
    else
        h_12 = h;

    printf("Equivalent 12-hour time: %d:%d ", h_12, m);
    if(h > 12)
        printf("PM");
    else
        printf("AM");
    return 0;
}