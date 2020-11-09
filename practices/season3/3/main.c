#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i=1, n;
    for (i=1; i<=6 ;i++)
      {
         for (n=1; n<=i; n++)
             printf("*");
         printf("\n");
      }
}