#include <stdio.h>

int main()
{
  char length_units[][20] = {"decímetros", "centímetros", "milímetros"};
  float value;

  printf("Valor em metros: ");
  scanf("%f", &value);

  for (int x = 0; x < 3; x++)
  {
    value = value * 10;
    printf ("%f %s\n", value, length_units[x]);
  }
}