#include<stdio.h>
int main()
{
    float x[5], sum=0.0, avg;
    int i;
    float *px, *psum, *pavg;

    px = &x[0];  //  Or, px = &x;
    psum = &sum, pavg = &avg;

    printf("Enter array Elements: ");
    for (i=0;i<5;i++)
    {
        scanf("%f",(px+i));
        *psum += *(px + i);
    }

    *pavg = *psum / 5;
    printf("Sum= %.2f \t Average= %.2f\n", *psum, *pavg);

    return 0;
}
