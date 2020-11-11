#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int day;

    printf("Enter day number: \n");
    scanf("%d", &day);

    switch(day)
    {
    case 1:
        printf("Monday, be happy :)\n");
        break;
    case 2:
        printf("Tuesday, life is beautiful. \n");
        break;
    case 3:
        printf("Wednesday, be victorious. \n");
        break;
    case 4:
        printf("Thursday, success comes. \n");
        break;
    case 5:
        printf("Friday, be thankful. \n");
        break;
    case 6:
        printf("Saturday, be your best. \n");
        break;
    case 7:
        printf("Sunday, live in the moment. \n");
        break;
    default:
        printf("Oops, Not defined");
        break;
    }
    return 0;
}
