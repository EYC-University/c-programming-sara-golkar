#include <conio.h>
#include <stdio.h>

int main()
{
    int height, base, area, p;
    printf(" Enter height and base: ");
    scanf("%d%d", &height, &base);
    area = (height * base) / 2;
    p = base * 3;
    printf(" Area = %d, p = %d", area, p);
    return 0;

}
