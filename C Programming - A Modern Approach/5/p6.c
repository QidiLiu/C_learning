/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, first_sum, second_sum, total, check;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &n1);

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6);
    
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n7, &n8, &n9, &n10, &n11);
    
    printf("Enter the last (single) digit: ");
    scanf("%1d", &n12);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6 + n8 + n10;
    total = first_sum*3 + second_sum;
    check = 9 - (total - 1)%10;
    
    if(n12 == check)
        printf("VALID");
    else
        printf("NOT VALID");

    return 0;
}