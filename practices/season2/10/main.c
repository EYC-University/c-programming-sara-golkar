#include <conio.h>
#include <stdlib.h>

int main()
{
    int height, base, area;
    printf("Enter height and base: ");
    scanf("%d%d", &height, &base);
    area = (height * base) / 2;
    printf("\nArea = %d", area);
    return 0;

}
