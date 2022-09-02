#include<stdio.h>
int main()
{
   char s1[100], s2[100],ch;
   int i, j, flag=1;
   printf("Enter a string: ");
   scanf("%[^\n]",ch);

   //find String length
   for(i=0; s1[i]!='\0';i++);

   //Copying string in reverse order
   for(i--,j=0; i>=0; i--, j++)
   {
     s2[j]=s1[i];
   }
   s2[j]='\0';

   //String comparision
   for(i=0; s1[i]!='\0';i++)
   {
     if(s1[i]!=s2[i])
     {
       flag=0;
       break;
     }
   }

   if(flag==1)
   printf("String is Palindrome.");
   else printf("String is not Palindrome.");

   return 0;
 }
