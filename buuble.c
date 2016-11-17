#include <stdio.h>
 
int main()
{
  int n, no, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
 int *array = (int*)malloc(sizeof(int)*n);
 
  printf("Enter %d integers\n", no);
 
  for (c = 0; c < no; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( no - 1 ); c++)
  {
    for (d = 0 ; d < no - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
  return 0;
}
