#include<stdio.h>
int main()
{
  // variable
  char str[20];
  int i,j;

  // take input
  printf("Enter a string: ");
  scanf("%[^\n]",str);

  // print pattern
  // outer loop for row
  for(i=0; str[i]!='\0'; i++)
  {
    // inner loop for column
    for( j=0; j<=i; j++)
    {
      // display
      printf("%c", str[j]); 
    }

    printf("\n"); // new line
  }

  return 0;
}
