#include<stdio.h>

// function to find largest among three number
float large(float a, float b, float c)
{
   if(a>=b && a>=c) return a;
   else if(b>=a && b>=c) return b;
   else return c;
}

int main()
{
   float num1, num2, num3, largest;

   printf("Enter three numbers: ");
   scanf("%f %f %f", &num1, &num2, &num3);

   largest = large(num1, num2, num3);
   printf("Largest number = %.2f",largest);
   return 0;
}
