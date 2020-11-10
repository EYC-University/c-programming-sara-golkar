#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b, i=0;
    printf("Please Enter Number 1: ");
    scanf("%d",&a);
    printf("please Enter Number 2: ");
    scanf("%d",&b);
    if (b>a)
    {
        int t=a;
        a=b;
        b=t;
    }
    if (b==0)
        printf("\nOops, divide by zero.");
    else
    {
        while (a>=b)
        {
            a=a-b;
            i++;
        }
        printf("\nDivide Number 1 on Number 2 = %d",i);
    }
    return 0;
}
