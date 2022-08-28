#include<stdio.h>

// recursive function for sum of natural number
int sum(int n)
 
{
   if(n==0) return 0; //base case
   else return( n + sum(n-1) ); //general case
}

int main()
{
   int num;

   printf("Enter a positive integer number: ");
   scanf("%d",&num);

   printf("Sum of natural numbers %d = %d",num, sum(num) );

   return 0;
}
