#include <stdio.h>

int main()
{
    const int salary = 750000;
    const float increase_rate = 13.5;
    int res;
    res = (salary * increase_rate / 100) * 12 * 2;
    printf("Annual increase rate for 2 specialists: %d", res);
    return 0;
}
