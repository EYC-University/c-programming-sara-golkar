#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, powvar;

    printf("Enter x value: ");

    scanf("%f", &x);

    powvar = pow(x,2);

    y = (float) 1/(powvar+x+3);

    printf("%.4f", y);

    return 0;
}
