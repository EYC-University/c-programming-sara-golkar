#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char color;
    printf("Enter first letter of your color : ");
    color=getche();

    switch (color)
    {
    case 'r':
    case 'R':
        printf("\nYour color is Red");
        break;

    case 'w':
    case 'W':
        printf("\nYour color is White");
        break;

    case 'b':
    case 'B':
        printf("\nYour color is Blue");
        break;

    case 'y':
    case 'Y':
        printf("\nYour color is Yellow");
        break;

    case 'g':
    case 'G':
        printf("\nYour color is Green");
        break;

    case 'p':
    case 'P':
        printf("\nYour color is Pink");
        break;

    case 'v':
    case 'V':
        printf("\nYour color is Violet");
        break;

    default:
        printf("\nYour color not defined.");
        break;
    }
    return 0;
}


