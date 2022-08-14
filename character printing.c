#include <stdio.h>
int main() {
  char ch;
  //Print characters from 'A' to 'Z'
  printf("Print characters from 'A' to 'Z'\n");
  for (ch = 'A'; ch <= 'Z'; ++ch){
    printf("%c ", ch);
}
    //Print characters from 'a' to 'z'
     printf("\nPrint characters from 'a' to 'z'\n");
  for (ch = 'a'; ch <= 'z'; ++ch){
    printf("%c ", ch);
}
  return 0;
}

