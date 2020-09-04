#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, s;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if(n1 < n2)
    {
        s = n1;
        n1 = n2;
        n2 = s;
    }

    if(n3 < n4)
    {
        s = n3;
        n3 = n4;
        n4 = s;
    }

    if(n1 > n3)
        printf("Largest: %d\n", n1);
    else
        printf("Largest: %d\n", n3);
    
    if(n2 < n4)
        printf("Smallest: %d\n", n2);
    else
        printf("Smallest: %d\n", n4);

    return 0;
}