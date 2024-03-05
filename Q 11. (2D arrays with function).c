// Q11. WAP in C to check whether the matrix is a 'Magic Square' Matrix or not.

#include <stdio.h>
void main()
{
  int r, c, i, j, a=0, sum, k=1;;
  printf("Enter the no. of rows and columns of the matrix:\nr = ");
  scanf("%i", &r);
  printf("c = ");
  scanf("%i", &c);
  int x[r][c], s[2*r+2];
  if(r!=c)
    printf("ERROR! Please Try Again with a square matrix.\n");
  else
  {
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
    for(i=0; i<r; i++)
    { 
        sum=0;
        for(j=0; j<c; j++)
        {
            sum = sum + x[i][j];
        }
        s[a++]=sum;
    }
    for(i=0; i<r; i++)
    { 
        sum=0;
        for(j=0; j<c; j++)
        {
            sum = sum + x[j][i];
        }
        s[a++]=sum;
    }
    sum=0;
    
    for (i = 0; i < r; i++) 
        sum += x[i][i];
    
    s[a++] = sum;
    sum = 0;
    
    for (i = 0; i < r; i++) 
        sum += x[i][r - 1 - i];
    
    s[a]=sum;
    for(i=1; i<2*r+2; i++)
    {
        if(s[0]!=s[i])
        {   
            k=0;
            break;    
        }
    }
    if(k==1)
        printf("It is a Magic Square Matrix.\n");
        
    else    
        printf("It is not a Magic Square Matrix.\n");
  }
} 
