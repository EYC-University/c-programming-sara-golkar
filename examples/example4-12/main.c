#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void test(void)
{
    int x = 0;
    static int y = 0;
    printf("\n auto x=%d, static y=%d", x,y);
    x ++;
    y ++;
}
int main()
{
    register int i;
    for(i = 0; i < 5; i++)
    {
        test();
    }
    return 0;
}
