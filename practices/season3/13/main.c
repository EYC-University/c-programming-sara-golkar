#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int year, birth;
    int py, pm, pd, ph, pmi, ps;
    printf("Enter current year: \n");
    scanf("%d", &year);
    printf("Enter your birth year: \n");
    scanf("%d", &birth);

    py= year - birth;
    pm= py * 12;
    pd= py * 365;
    ph= py * 8760;
    pmi= py * 525600;
    ps= py * 31536000;

    printf("\nYear: %d, Month: %d, Day: %d, Hour: %d, Minute: %d, Second: %d", py, pm, pd, ph, pmi, ps);
    return 1;
}
