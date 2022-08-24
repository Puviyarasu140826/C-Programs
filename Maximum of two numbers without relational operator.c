#include<stdio.h>
void main()
{
	int a,b,max;
	printf("Enter the values for a and b");
	scanf("%d%d",&a,&b);
	max=(a+b+abs(a-b))/2;
	printf("%d is maximum",max);
}
