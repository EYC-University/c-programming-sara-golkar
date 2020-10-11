#include <stdio.h>
#include <conio.h>

int main()
{
    int i, sum=0, num;
    float ave;
    const int n = 3;
    for(i=0; i<n;i++){
        printf("enter score %d: ", i+1);
        scanf("%d", &num);
        num = num*3;
        sum += num;
    }
    ave = (float) sum/9;
    printf("\n the average is: %6.2f ",ave);
    return 0;
}
