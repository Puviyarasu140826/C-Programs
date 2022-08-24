#include<stdio.h>
void main()
{
	int a,b,max;
	printf("Enter the values for a and b");
	scanf("%d%d",&a,&b);
	max=(a>b)*a+(b>a)*b;
	printf("%d is maximum",max);
}
