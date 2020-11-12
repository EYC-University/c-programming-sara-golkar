#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    float num,endInvFltNum,newFltNum;

    int count=0,div=1,div2=1,p,intNum,invIntNum=0;
    int digit=0,invIntNum2,fltNum,invFltNum=0;

    printf("\n Enter a float number: ");
    scanf("%f", &num);
    do
    {
        num=num*10;
        ++count;
    }
    while(num!=(int)num);
    for(int i=0; i<count; ++i)
        div*=10;
    intNum=(int)num/div;// Acquire Integer part
    while(intNum)
    {
        p=intNum%10;
        invIntNum=invIntNum*10+p;
        intNum/=10;
    } // Inverse Of Integer Part
    invIntNum2=invIntNum;
    while(invIntNum2)
    {
        ++digit;
        invIntNum2/=10;
    }
    for(int i=digit; i>0; --i)
        div2*=10;
    endInvFltNum=(float)invIntNum/div2;
    fltNum=(int)num%div; // Conver Float part to integer
    while(fltNum)
    {
        p=fltNum%10;
        invFltNum=invFltNum*10+p;
        fltNum/=10;
    } // Inverse Of Integer Part
    newFltNum= invFltNum+endInvFltNum;
    printf("\n Inverse your number is: %g", newFltNum);
}
