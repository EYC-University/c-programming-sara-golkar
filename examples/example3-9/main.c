#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    printf("Type Statement and . to end \n");
    while(getche() != '.'){
        count ++;
    }
    printf("\n length of statement is : %d", count);
    return 0;
}
