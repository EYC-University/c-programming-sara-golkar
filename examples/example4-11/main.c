#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void write_v(int x)
{
    if (x < 10)
    {
        printf("%d\n", x);
    }
    else
    {
        write_v(x / 10);
        printf("%d\n", x % 10);
    }
}
int main()
{
    int x;
    printf("enter an integer number: ");
    scanf("%d", &x);
    write_v(x);
    return 0;
}
