#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  int n,i,student=0,firstStudent=0,secondStudent=0;
  float average=0,firstAverage=0,secondAverage=0;

  printf("Enter number of students: ");
  scanf("%d",&n);

  for (i=1; i<=n; i++)
  {
     printf("Enter %dth Student Number:",i);
     scanf("%d",&student);
     printf("Enter %dth Student average:",i);
     scanf("%f",&average);

     if (average >= firstAverage)
     {
        secondAverage=firstAverage;
        firstAverage=average;
        secondStudent=firstStudent;
        firstStudent=student;
     }
     else if (average >= secondAverage)
     {
        secondAverage=average;
        secondStudent=student;
     }
  }

  printf("\nSecond student (average) is %d and average is %5.2f",secondStudent,secondAverage);
  return 0;
}
