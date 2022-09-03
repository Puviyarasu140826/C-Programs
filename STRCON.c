#include <stdio.h>
#include<string.h>
void strcon(char a[50],char b[50]);
int main()
{
    char a[50]=" ";
    char b[50]=" ";
    int i;
    strcon(a,b);
    printf("%s",a);
    
}
void strcon(char a[50],char b[50])
{
    int i,j;
    while(a[i]!='\0')
    {
        ++i;
    }
    for(j=0;b[j]!='\0';j++,i++)
    {
        a[i]=b[j];
    }
    a[i]='\0';
}

