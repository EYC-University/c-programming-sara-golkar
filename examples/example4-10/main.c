#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int product(int x, int y)
{
    if(y==1)
    {
        return x;
    }
    return (x + product(x, y-1));

}
int main()
{
    int x, y;
    printf("\nEnter two integer numbers: ");
    scanf("%d%d", &x, &y);
    printf("\nTheir product is: %d", product(x, y));
    return 0;
}
