#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    
    int a,b,c,d,e,f,g,h,i,sum;
    scanf("%d", &a);
    b=a/10;
    c=a%10;
    d=b/10;
    e=b%10;
    f=d/10;
    g=d%10;
    h=f/10;
    i=f%10;
    sum+=c;
    sum+=e;
    sum+=g;
    sum+=h;
    sum+=i;
    printf("%d",sum);
    
    
    return 0;
}

