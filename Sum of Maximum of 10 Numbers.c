#include<stdio.h>
int main()
{
  int sum=0, number, i=1;

  while(1) // condition always true
  {

    printf("Enter the number:");
    scanf("%d",&number);

    // If number is -ve then control 
    // came out from the while loop
    if(number < 0)
     break;

    sum += number; // sum = sum + number
    i++;

    if( i>10 ) // maximum 10 numbers
    break;

  }

  printf("Sum= %d", sum);

  return 0;
}
