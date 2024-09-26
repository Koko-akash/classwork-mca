// code to recieve NxN matrix as argument and return the sq of it
// author: Akash Phukan, date: 25/09/2024

#include<stdio.h>
#include<stdlib.h>
int a[100][100], b[100][100], i, j, order, k; // global declaration of variables
main()
{
	extern int a[100][100], b[100][100], i, j, order, k; // we import the global variables
	printf("Enter the order of the matrix: \n"); // define the order of the matrix
	scanf("%d",&order);
	printf("\n Enter the values in the matrix: \n"); // user input values in the matrix
	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The original matrix is: \n");
	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	matrix_sq(); // we invoke the matrix_sq()
	printf("\n The square of the matrix is: \n"); // Printing the output
	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
}

matrix_sq()
{
	extern int a[100][100], b[100][100], i, j, order, k; // we import the global variables
	// logic for sq of a NxN matrix
	for(i=0;i<order;i++)
	{
		for(j=0;j<=order;j++)
		{
			b[i][j] = 0;
			for(k=0;k<order;k++)
			{
				b[i][j] = b[i][j] + a[i][k] * a[k][j];
			}
		}
	}
}
 
