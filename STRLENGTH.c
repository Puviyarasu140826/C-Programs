
#include <stdio.h>
#include<string.h>
int strlength(char a[50]);
int main()
{
    char a[50]="Kavin";
    int b;
    b=strlength(a);
    printf("Length of the string is %d",b);
    
}
int strlength(char a[50])
{
    int i=0;
    while(a[i]!='\0')
    {
         
        ++i;
    }
    return i;
}

