#include <stdio.h>

int main(void)
{
    int n_dec, o_1, o_2, o_3, o_4, o_5; //"o_*" means octal number

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n_dec);
    o_1 = n_dec%8;
    o_2 = n_dec/8%8;
    o_3 = n_dec/8/8%8;
    o_4 = n_dec/8/8/8%8;
    o_5 = n_dec/8/8/8/8%8;

    printf("In octal, your number is: %1d%1d%1d%1d%1d", o_5, o_4, o_3, o_2, o_1);
    
    return 0;
}