#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float a, b, res;

section1:
    printf("Enter number 1: \n");
    scanf("%f", &a);
    printf("Enter number 2: \n");
    scanf("%f", &b);

    if (a==0 && b==0)
    {
        printf("\nThe numbers entered are zero. Enter other numbers.\n");
        goto section1;

    }
    else
    {
        res=(a*b)- (a/b);
        printf("\nResult is : %.3f", res);
    }

    return 0;
}
