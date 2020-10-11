#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int farconst = 32;
    float farendeg, centdeg;
    printf("Enter farenheite: ");
    scanf("%f", &farendeg);
    centdeg = ((float)5/9) * (farendeg - farconst);
    printf("Celsius = %5.2f", centdeg);
    return 0;
}
