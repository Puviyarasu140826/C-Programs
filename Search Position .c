#include<stdio.h>
int main()
{
   int a[100], n, element;
   int i, found=0, count=0, pos=0;

   printf("Enter array size [1-100]: ");
   scanf("%d", &n);

   // take array elements
   printf("Enter array elements: ");
   for(i=0; i<n; i++) scanf("%d", &a[i]);

   printf("Enter element to search: ");
   scanf("%d", &element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       count++;
       if(count==1)
       {
         printf("Enter times of occurance of element: ");
         scanf("%d",&pos);
       }
       if(count==pos)
       {
         found++;
         printf("%d found %d times at %d position.",element,pos,i+1);
         break;
       }
     }
   }

   if(count==0) printf("%d not found.", element);
   else if(found==0) printf("%d not found %d time.",element,pos);

   return 0;
}
