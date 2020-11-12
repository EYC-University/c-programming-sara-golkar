#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    double value,h;
    float Fvalue;
    int Ivalue,counter=0;
    printf("Enter a float number:");
    scanf("%lf",&value);
    Ivalue=floor(value);
    Fvalue=value-floor(value);
    while(++counter)
    {
        Fvalue*=10;
        h=ceil(Fvalue);
        if (ceil(Fvalue)-Fvalue<=0.1)
            break;
    }
    printf("\n=> %d\n=> %g", Ivalue, h);
    getch();
}
