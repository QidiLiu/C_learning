#include <stdio.h>

int main(void)
{
    float speed;
    printf("Enter the wind speed: ");
    scanf("%f", &speed);
    if(speed < 1)
        printf("Calm");
    else if(speed < 4)
        printf("Light air");
    else if(speed < 28)
        printf("Breeze");
    else if(speed < 48)
        printf("Gale");
    else if(speed < 63)
        printf("Storm");
    else
        printf("Hurricane");
        
    return 0;
}