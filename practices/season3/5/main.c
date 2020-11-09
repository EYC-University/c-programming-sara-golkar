#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i;
    int f1=1, f2=1, f3;
    printf("16 Fibonacci number: \n");

    printf("%5d\n", f1);
    printf("%5d\n", f2);

    for(i=3; i<=16; i++)
    {
        f3=f2+f1;
        f1=f2;
        f2=f3;
        printf("%5d\n", f3);
    }
    return 0;
}
