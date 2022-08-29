#include<stdio.h>
int rev(int n);
int main()
{
    int r,b;
    printf("Enter the values");
    scanf("%d",&r);
    b=rev(r);
    printf("%d",b);
}
int rev(int n)
{
    static int m,r;
    m=n%10;
    r=r*10+m;
    n=n/10;
    if(n>0)
    rev(n);
    else
    return r;
}

