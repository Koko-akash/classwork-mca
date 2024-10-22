// Code to swap two numbers using call by val and call by reference
// author: Akash Phukan, date: 22/10/24
#include<stdio.h>
swapA(int, int);
swapB(int *, int *);
main()
{
	int x, y, a, b; // declaration of variables
	printf("Enter the two numbers: \n");
	scanf("%d %d",&x,&y); // initialization of variables
	a = x;
	b = y;
	printf("The Original values of x and y are: x=%d and y=%d",x,y);
	// First we swap the two numbers using call-by-value
	swapA(x,y);
	// Now we swap the two numbers using call-by-reference
	swapB(&a,&b);
}

swapA(int m, int n)
{
	int temp;
	temp = m;
	m = n;
	n = temp;
	printf("\n The values after swapping are: x=%d and y=%d \n",m,n);
	printf("Here we have swapped using call-by-value. \n");
}

swapB(int *i, int *j)
{
	int t;
	t = *i;
	*i = *j;
	*j = t;
	printf("\n The values after swapping are: x=%d and y=%d \n",*i,*j);
	printf("Here we have swapped using call-by-refrence. \n");
}
