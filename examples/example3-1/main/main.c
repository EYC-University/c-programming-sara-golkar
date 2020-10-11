#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0, num;
    float ave;
    const int n = 5;
    for(i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d",&num);
        sum += num;
    }
    ave = (float) sum / n;
    printf("\nthe average is : %6.2f", ave);
}
