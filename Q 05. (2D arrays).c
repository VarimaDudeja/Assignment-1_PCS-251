// Q5. WAP in C to check whether a matrix is symmetric or not.

#include <stdio.h>
void main()
{
    int r, c, i, j, k=0;
  	printf("Enter the rows and columns of a matrix:\nr = ");
  	scanf("%i", &r);
	printf("c = ");
	scanf("%i", &c);
  	int a[r][c], b[c][r];
  	if(r!=c)
  	    printf("The Matrix is not symmetric.\n");
  	else
  	{
		printf("Enter %i elements:\n", r*c);
		for(i=0; i<r; i++)
  		{
			for(j=0; j<c; j++)
  	  		{
      				scanf("%i", &a[i][j]);
      				b[i][j]=a[i][j];
    	        	}
		}
		printf("The Matrix:\n");
		for(i=0; i<r; i++)
		{ 
			for(j=0; j<c; j++)
    			{
      				printf("%i ", a[i][j]);
      				if(a[i][j]==b[i][j])
      		    			k++;
		    	}
		    	printf("\n");
  		}
  		if(k==r*c)
  		    printf("It is a symmetric matrix.\n");

  		else
  	    	printf("It is not a symmetric matrix.\n");
  	}
}	  	
 
