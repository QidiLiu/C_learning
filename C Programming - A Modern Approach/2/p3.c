#include <stdio.h>

#define PI 3.1415926f
#define FACTOR (4.0f/3.0f)

int main(void)
{
    float volume, radius;

    printf("Enter the radius[m] of the ball:");
    scanf("%f", &radius);
    volume = FACTOR * PI * radius * radius * radius;

    printf("The volume of the ball is %.2f m^3", volume);
    
    return 0;
}