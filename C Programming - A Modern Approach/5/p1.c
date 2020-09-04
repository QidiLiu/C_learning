#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The number %d has ", n);
    if(n < 10)
        printf("1 digit");
    else if(n < 100)
        printf("2 digits");
    else if(n < 1000)
        printf("3 digits");
    else
        printf("more than 3 digits");
    
    return 0;
}