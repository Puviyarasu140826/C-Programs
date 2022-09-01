#include<stdio.h>
int main()
{
   int a[100], n, i, fmax, smax, fmin, smin;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);

   printf("Enter %d elements: ",n);
   scanf("%d",&a[0]);
   fmax=fmin=a[0];

   // finding first minimum and maximum
   for(i=1; i<n; i++)
   {
     scanf("%d",&a[i]);
     if(fmax<a[i]) fmax=a[i];
     if(fmin>a[i]) fmin=a[i];
   }

   // assigning second minimum and maximum
   smax=fmin;
   smin=fmax;

   // finding second minimum and maximum
   for(i=0; i<n; i++)
   {
     if(a[i]<fmax && a[i]>smax) smax=a[i];
     if(a[i]>fmin && a[i]<smin) smin=a[i];
   }

   printf("First maximum: %d",fmax);
   printf("\nSecond maximum: %d",smax);
   printf("\nFirst minimum = %d",fmin);
   printf("\nSecond minimum = %d",smin);

   return 0;
}
