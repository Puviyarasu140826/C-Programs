#include <stdio.h>
int f(int x);
int main()
{
    int x,a;
    printf("Enter value");
    scanf("%d",&x);
    //a=f(x);
    printf("%d",f(x));
}
int f(int x)
{
    int fact;
    if(x==0)
    return 1;
    else
    {
       fact=x*f(x-1);
       return fact;
    }
}


