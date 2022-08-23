#include <stdio.h>
#include <math.h>
 
int main()
{
  	int Number, FirstDigit, Count, LastDigit;
 
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	
  	Count = log10(Number); 	
  	FirstDigit = Number / pow(10, Count);
  	
  	LastDigit = Number % 10;
	    
	printf(" \n The First Digit of a Given Number %d =  %d", Number, FirstDigit);
	printf(" \n The Last Digit of a Given Number %d =  %d", Number, LastDigit);
 
  	return 0;
}
