#include <stdio.h>
#include <string.h>

int main() {
   char str[5][50], temp[50];
   int i,j;
   printf("Enter 5 words: ");

   // Getting strings input
   for ( i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   // storing strings in the lexicographical order
   for ( i = 0; i < 5; ++i) {
      for ( j = i + 1; j < 5; ++j) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for ( i = 0; i < 5; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}
