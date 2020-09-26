#include <stdio.h>

int main(void)
{
    int s, m, gcd, c, old_gcd, orig_s, orig_m;
    printf("Enter a fraction: ");
    scanf("%d/%d", &s, &m);
    orig_m = m;
    orig_s = s;
    old_gcd = 0;
    
    while (1)
    {

        while(1)
        {
            if(s == 0)
            {
                gcd = m;
                break; 
            }
            else
            {
                c = m % s;
                m = s;
                s = c;
            }
        }

        if(old_gcd == gcd)
            break;
        else
        {
            old_gcd = gcd;
        }
    }
    printf("In lowest terms: %d/%d", orig_s/gcd, orig_m/gcd);
    return 0;
}