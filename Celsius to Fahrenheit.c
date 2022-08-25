#include<stdio.h>
int main()
{
  float cel, fahr;

  printf("Enter Celsius value: ");
  scanf("%f",&cel);

  fahr = (cel * (9.0/5.0)) + 32;

  printf("Fahrenheit value = %.2f", fahr);

  return 0;
}
