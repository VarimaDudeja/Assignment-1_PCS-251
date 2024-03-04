// Q1. WAP in C to print the boundary elements of a 2D array.
#include <stdio.h>
void main()
{
  int r, c, i, j;
  printf("Enter the no. of rows and columns of the matrix:\nr = ");
  scanf("%i", &r);
  printf("c = ");
  scanf("%i", &c);
  int x[r][c];
  printf("Enter %i elements:\n", r*c);
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      scanf("%i", &x[i][j]);
    }
  }
  printf("The Matrix:\n");
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      printf("%i ", x[i][j]);
    }
    printf("\n");
  }
  printf("Boundary Elements:\n");
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      if(i == 0||j == 0||i == r - 1||j == c - 1)
        printf("%i ", x[i][j]);
      else
        printf("  ");
    }
    printf("\n");
  }
} 
