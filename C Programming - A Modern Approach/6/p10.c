#include <stdio.h>

int main(void)
{
    int mon, day, year, mon_e, day_e, year_e;

    mon_e = 13;
    day_e = 32;
    year_e = 9999;

    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mon, &day, &year);

        if(mon == 0)
            break;

        if(year < year_e)
        {
            year_e = year;
            mon_e = mon;
            day_e = day;
        }
        else if (year == year_e && mon < mon_e)
        {
            year_e = year;
            mon_e = mon;
            day_e = day;
        }
        else if (mon == mon_e && day < day_e)
        {
            year_e = year;
            mon_e = mon;
            day_e = day;
        }
    }
    
    printf("%d/%d/%.2d is the earliest date", mon_e, day_e, year_e);
    
    return 0;
}