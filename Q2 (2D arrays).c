// Q2. WAP in C to print left & right diagonals of a square matrix.

#include <stdio.h>
void main()
{
  int size, i, j;
  printf("Enter the size of a square matrix:\nsize = ");
  scanf("%i", &size);
  int x[size][size];
  printf("Enter %i elements:\n", size*size);
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      scanf("%i", &x[i][j]);
    }
  }
  printf("The Matrix:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%i ", x[i][j]);
    }
    printf("\n");
  }
  printf("Left & Right Diagonals:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      if(i==j||i+j==size-1)
        printf("%i ", x[i][j]);
      else
        printf("  ");
    }
    printf("\n");
  }
} 
 
