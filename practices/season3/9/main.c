#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i;
    for (i=1; i<=10; i++){
        if (i<5 && i!=2){
            printf("%c",'X');
        }
    }
    return 0;
}