#include <conio.h>
#include <stdio.h>

int main()
{
    int radius;
    float area;
    printf(" Enter the radius of the circle : ");
    scanf("%d", &radius);
    area = radius * radius * 3.14;
    printf(" Area = %.2f", area);
    return 0;

}
