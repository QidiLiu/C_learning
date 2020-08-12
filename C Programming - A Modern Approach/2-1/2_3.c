/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

#define HEIGHT 8
#define LENGTH 12
#define WIDTH 10

int main(void)
{
    int volume;

    volume = HEIGHT * LENGTH * WIDTH;

    printf("Dimensions: %dx%dx%d\n", LENGTH, WIDTH, HEIGHT);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
