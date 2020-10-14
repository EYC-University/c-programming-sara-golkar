#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    float ave, num, sum=0, ratio, sum_ratio;
    const int n = 3;
    for(i=0; i<n; i++){
        printf("enter score %d: ", i+1);
        scanf("%f", &num);
        printf("\nenter ratio: ");
        scanf("%f", &ratio);
        num = num*ratio;
        sum += num;
        sum_ratio += ratio;
    }
    ave = (float) sum/sum_ratio;
    printf("\n_____________________\nthe average is: %.2f ",ave);
    return 0;
}
