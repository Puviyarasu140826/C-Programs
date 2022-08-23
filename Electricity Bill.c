#include <stdio.h>
 
int main()
{
	int Units;
	float Amount, Sur_Charge, Total_Amount;
  	
	printf("\n Please Enter the Units that you Consumed  :  ");
  	scanf("%d", &Units);
  
  	if (Units < 50)
  	{
             Amount = Units * 2.60;
  		Sur_Charge = 25;  	
  	} 
  	else if (Units <= 100)
  	{
  		
  		Amount = 130 + ((Units - 50 ) * 3.25);
  		Sur_Charge = 35; 	
  	}
  	else if (Units <= 200)
  	{
  		
  		Amount = 130 + 162.50 + ((Units - 100 ) * 5.26);
  		Sur_Charge = 45; 	
  	}
  	else
  	{
  	
	   	Amount = 130 + 162.50 + 526 + ((Units - 200 ) * 7.75); 
	   	Sur_Charge = 55; 
	}
	
	Total_Amount = Amount + Sur_Charge;
	printf("\n Electricity Bill  =  %.2f", Total_Amount); 
	
  	return 0;
}
