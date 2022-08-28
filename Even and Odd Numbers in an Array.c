#include<stdio.h>
int main()
{
   int a[100], n, i, sum=0, ecount=0, ocount=0;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);
   printf("Enter %d elements: ",n);

   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
     sum += a[i];
     if(a[i]%2==0) ecount++;
     else ocount++;
   }

   printf("Total Sum: %d",sum);
   printf("\nEven numbers: %d",ecount);
   printf("\nOdd numbers = %d", ocount);

   return 0;
}
