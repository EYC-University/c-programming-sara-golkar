#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg, g;
    const int gconst = 1000;
    printf("Enter Kg: ");
    scanf("%f", &kg);
    g = kg * gconst;
    printf("%5.2f(Kg) is %5.2f(g)", kg, g);
    return 0;
}
