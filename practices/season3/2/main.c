#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  int i,n,sum=0;
  char key='y';

  while(key=='y'){

  printf("\nEnter number: ");
  scanf("%d",&n);

  for (i=1;i<n;i++)
      {
         if(n%i==0)
            sum=sum+i;
      }

  if (sum==n){
      printf("\nYour number is Perfect");
    }
  else
      printf("\nYour number is NOT Perfect");
      sum=0;

  printf("\nDo you want to continue (y\\n): ");
  key=getche();
  }
  return 0;
}


