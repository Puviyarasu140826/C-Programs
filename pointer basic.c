#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
 int sum,diff;
 sum=*a+*b;
 diff=abs(*a-*b);
 *a=sum;
 *b=diff;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("enter any two numbers:");
     scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("sum of the number is :%d\nDifferences of the number is:%d", a, b);

    return 0;
}
