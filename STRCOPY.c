#include <stdio.h>
#include<string.h>
void strcopy(char a[50],char b[50]);
int main()
{
    char a[50]="Kavinkanth@";
    char b[50]="";
    int i;
    strcopy(a,b);
    printf("%s %s",a,b);
    
}
void strcopy(char *a,char *b)
{
    int i;
    for(;*b++=*a++;);
}
