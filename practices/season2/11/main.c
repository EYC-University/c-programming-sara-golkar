#include <stdio.h>

int main()
{

  float  v, m;
  printf("Enter volume of water (liter): ");
  scanf("%f", &v);

  m = (950 * v / 3.0) * 10e+23;

  printf("Number of water molecules : %e", m);
  return 0;
}
