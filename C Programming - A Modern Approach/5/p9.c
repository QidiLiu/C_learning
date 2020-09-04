#include <stdio.h>

int main(void)
{
    int mon_1, day_1, year_1, mon_2, day_2, year_2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mon_1, &day_1, &year_1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mon_2, &day_2, &year_2);
    
    if(year_1 < year_2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mon_1, day_1, year_1, mon_2, day_2, year_2);
    else if (year_1 > year_2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mon_2, day_2, year_2, mon_1, day_1, year_1);
    else if (mon_1 < mon_2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mon_1, day_1, year_1, mon_2, day_2, year_2);
    else if (mon_1 > mon_2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mon_2, day_2, year_2, mon_1, day_1, year_1);
    else if (day_1 < day_2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mon_1, day_1, year_1, mon_2, day_2, year_2);
    else if (day_1 > day_2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mon_2, day_2, year_2, mon_1, day_1, year_1);
    else
        printf("Wow that's so damn hard! I don't know. Maybe your Math teacher can help you. :)");
    
    return 0;
}