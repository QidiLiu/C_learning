#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, min, n_time, n_flight;
    int d1, d2, d3, d4, d5, d6, d7, d8; // differences between 8 departure time and user's time
    int s1, s2, s3, s4, f1, f2; // semifinals and finals
    int c1, c2, c3, c4, sc1, sc2; // choices in semifinals and finals

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    n_time = hour*60 + min;

    d1 = abs(n_time - 480);
    d2 = abs(n_time - 583);
    d3 = abs(n_time - 679);
    d4 = abs(n_time - 767);
    d5 = abs(n_time - 840);
    d6 = abs(n_time - 945);
    d7 = abs(n_time - 1140);
    d8 = abs(n_time - 1305);

    // find smallest difference
    if(d1 <= d2)
    {s1 = d1; c1 = 1;}
    else
    {s1 = d2; c1 = 2;}

    if(d3 <= d4)
    {s2 = d3; c2 = 3;}
    else
    {s2 = d4; c2 = 4;}

    if(d5 <= d6)
    {s3 = d5; c3 = 5;}
    else
    {s3 = d6; c3 = 6;}

    if(d7 <= d8)
    {s4 = d7; c4 = 7;}
    else
    {s4 = d8; c4 = 8;}

    if(s1 <= s2)
    {f1 = s1; sc1 = c1;}
    else
    {f1 = s2; sc1 = c2;}

    if(s3 <= s4)
    {f2 = s3; sc2 = c3;}
    else
    {f2 = s4; sc2 = c4;}

    if (f1 <= f2)
        n_flight = sc1;
    else
        n_flight = sc2;
    
    if(n_flight == 1)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if(n_flight == 2)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if(n_flight == 3)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if(n_flight == 4)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    else if(n_flight == 5)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if(n_flight == 6)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if(n_flight == 7)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    
    return 0;
}