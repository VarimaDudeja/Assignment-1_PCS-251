// Q3. WAP in C to print the sum of elements of each row of a matrix.

#include <stdio.h>
void main()
{
	int r, c, i, j, s;
  	printf("Enter the rows and columns of a matrix:\nr = ");
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
  	for(i=0; i<r; i++)
  	{ 
  		s=0;
  		for(j=0; j<c; j++)
  		{
			s = s + x[i][j];
   		}
    	printf("Sum of elements of row %i = %i", i+1, s);
  	}
} 
 
