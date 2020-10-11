#include <stdio.h>

int main() {
    int a,b,c;
    a = 1;
    b = 2;
    printf("\nbefore =>> a = %d, b = %d", a,b);
    c = a;
    a = b;
    b = c;
    printf("\nafter =>> a = %d, b = %d", a,b);
}
