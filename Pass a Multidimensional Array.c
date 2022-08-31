#include<stdio.h>
void display(int n[2][2]);
int main()
{
  int num[2][2], i, j;
  printf("Enter 4 Elements of array[2][2]: ");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&num[i][j]);
    }
  }
  printf("Displaying values: ");
  display(num);  
  // passing num[2][2] as num to display()

  return 0;
}

void display(int n[2][2])
{
  int i, j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d ",n[i][j]);
    }
  }
}
