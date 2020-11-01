#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, digit = 0;
    int x = 1;
    while (x == 1){
        printf("\n Enter a number ");
        scanf("%d", &num);
        printf("\ninverse=");
        do{
            digit = num % 10;
            printf("%d", digit);
            num /= 10;
        }
        while(num != 0);
    x = 0;
    }
    return 0;
}
