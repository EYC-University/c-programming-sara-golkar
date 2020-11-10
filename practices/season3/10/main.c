#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  int i,j,n,x;
  float result=0;
  printf("Enter n: ");
  scanf("%d",&n);

  for (i=1;i<=n;i++)
      {
         x=1;
         for(j=1;j<=i;j++)
            x=x*j;
         result=result+(float)1/x;
      }
  printf("\nResult is : %5.7f", result);
  return 0;
}
