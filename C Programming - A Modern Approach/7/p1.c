// Prints a table of squares using an odd method

#include <stdio.h>

int main(void)
{
    int i, odd, square;

    printf("This program prints a table of squares.\n");

    i = 1;
    odd = 3;
    for (square = 1; square > 0; odd += 2)
    {
        printf("%10d\t\t\t%10d\n", i, square);
        ++i;
        square += odd;
    }
    printf("Ended at:\n%d\t\t\t%d", i, square);

    return 0;
}

/*
 64位编译器：

      char ：1个字节
      char*(即指针变量): 8个字节
      short int : 2个字节
      int：  4个字节
      unsigned int : 4个字节
      float:  4个字节
      double:   8个字节
      long:   8个字节
      long long:  8个字节
      unsigned long:  8个字节
*/
