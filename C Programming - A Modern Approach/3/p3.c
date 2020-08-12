#include <stdio.h>

int main(void)
{
    int GS1, group, publisher, number, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &group, &publisher, &number, &check);

    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", check);

    return 0;
}
