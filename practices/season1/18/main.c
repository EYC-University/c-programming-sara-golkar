#include "stdio.h"

int main() {

	float nomarat[5], moadel;
	float jame_nomarat = 0;
	int i;

	for (i = 0; i < 5; i++)

	{
		printf("\nEnter Score: ");

		scanf("%f", &nomarat[i]);
	}

	printf("\n\n------------------------------- \n\n");

	for (i = 0; i < 5; i++)
	{
		jame_nomarat = jame_nomarat + nomarat[i];
	}
	moadel = (jame_nomarat / 5);

	printf("The sum is : %.2f \n", jame_nomarat);
	printf("The average is : %.2f \n", moadel);


   getchar();
   getchar();
   return 0;
}
