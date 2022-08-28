#include<stdio.h>
int main()
{
   int a[100], n, i, positive=0, negative=0, zero=0;

   printf("Enter array size [1-100]: ");
   scanf("%d", &n);
   printf("Enter %d elements: ",n);

   for(i=0; i<n; i++)
   {
     scanf("%d", &a[i]);
     if(a[i]>0) positive++;
     else if(a[i]==0) zero++;
     else negative++;
   }

   printf("Positive number count is %d", positive);
   printf("\nNegative number count is %d", negative);
   printf("\nZeros count is %d", zero);
   return 0;
}
