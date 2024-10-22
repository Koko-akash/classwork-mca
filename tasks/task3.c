// Code to creating a structure for Library
// author: Akash Phukan, date: 22/10/24 
#include<stdio.h>
#include<stdlib.h>
display(int); // declaring function prototype
addBook(int);

// creating a structure for Books
struct Books
{
  char title[15];
  int publication_year;
  char author[25];
} book[100];

struct Library
{
	struct Books book[100];
}

main ()
{
	int n;
	printf("Enter the number of books you want to fill in library: \n");
	scanf("%d",&n);
	// calling adding books function
	addBook(n);
	// calling displaying books function
	display(n);
}

// adding books function
addBook(int n)
{
	int i; // variable declaration
	// entering book info
	for(i=1; i<=n;i++)
	{
		printf("Enter the details for book %d: \n",i);
		printf("Enter the name of the book: \n");
		scanf("%s",book[i].title);
		printf("Enter author name: \n");
		scanf("%s",&book[i].author);
		printf("Enter publication year: \n");
		scanf("%d",&book[i].publication_year);	
	}
}

// display function
display(int n)
{
	int j;
	for(j=1;j<=n;j++)
	{
		printf("\nBook %d details: \n",j);
		printf("Book name: %s \n",book[j].title);
		printf("Auhtor: %s \n",book[j].author);
		printf("Publication year: %d \n",book[j].publication_year);
	}
}
