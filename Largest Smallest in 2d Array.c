#include<stdio.h>
int main()
{
  int m, n, largest, smallest;
  int largrowloc, largcolumnloc, smallrowloc, smallcolumnloc;
  
  // take number of rows and columns
  printf("Enter number of row and column: ");
  scanf("%d %d",&m,&n);

  // declare array by given number of rows and columns
  int arr[m][n], i, j;

  // take array elements as input
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  // display array (optional)
  printf("Entered 2D Array:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }

  // assume first element is 
  // largest and smallest
  largest=arr[0][0];
  smallest=arr[0][0];

  // compare with all elements
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(largest<arr[i][j])
      {
        largest=arr[i][j];
        largrowloc=i;  //row location of largest element
        largcolumnloc=j;   //column location of largest element
      }

      if(smallest>arr[i][j])
      {
        smallest=arr[i][j];
        smallrowloc=i;  //row location of smallest element
        smallcolumnloc=j;  //column location of smallest element
      }
    }
  }

  // display results
  printf("\n"); // new line
  printf("Largest element in array is %d in location arr[%d][%d]\n",
             largest, largrowloc, largcolumnloc);
  printf("Smallest element in array is %d in location arr[%d][%d]\n",
             smallest, smallrowloc, smallcolumnloc);

  return 0;
}
