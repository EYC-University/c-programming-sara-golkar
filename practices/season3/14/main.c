#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>

int main()
{
    float delta,a,b,c;
    float x,x1,x2,z;

    printf("Enter a:");
    scanf("%f",&a);

    printf("Enter b:");
    scanf("%f",&b);

    printf("Enter c:");
    scanf("%f",&c);

    delta=(b*b)-((4)*(a)*(c));

    if(delta<0)printf("Delta < 0 | It has no roots.");

    if(delta==0)
    {
        x=(-b)/(2*a);
        printf("Root = %3.2f",x);
    }
    if(delta>0)
    {
        z=sqrt(delta);
        x1=(-b-z)/(2*a);
        x2=(-b+z)/(2*a);
        printf("Root 1 = %3.2f",x1);
        printf("\nRoot 2 = %3.2f",x2);
    }
}
