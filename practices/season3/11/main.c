#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int power(int x,int y)
{
    int p=1,i;
    for (i=1; i<=y; i++)
        p=p*x;
    return p;
}
int main()
{
    int n;
    int q=0,r=0;
    int result=0,j=0;
    printf("Enter your number:");
    scanf("%d", &n);

    q=n/2;
    r=n%2;
    result=r;

    while (q != 0)
    {
        r=q%2;
        q=q/2;
        j++;
        result=result+power(10,j)*r;
    }

    printf("Result=%d",result);
    getch();
    return 0;
}
