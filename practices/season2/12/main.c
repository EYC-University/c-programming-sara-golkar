#include <stdio.h>

int main()
{
  int  age;
  float seconds;
  printf("Enter age : ");
  scanf("%d", &age);
  seconds = age * 3.156e+7;
  printf("%d years = %10.2e seconds.", age, seconds);

  return 0;
}
