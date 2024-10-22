// Code to creating a structure for multiple students
// author: Akash Phukan, date: 22/10/24 
#include<stdio.h>
#include<stdlib.h>
display(int); // declaring function prototype

// creating a structure for student
struct Student
{
  char name[15];
  int age;
  char grade[5];
} std[100];

main ()
{
	int i,n; // variable declaration
	printf("Enter the number of students whose details your want to enter: \n");
	scanf("%d",&n);
	// entering student info
	for(i=1; i<=n;i++)
	{
		printf("Enter the details for student %d: \n",i);
		printf("Enter the name of the student: \n");
		scanf("%s",std[i].name);
		printf("Enter age: \n");
		scanf("%d",&std[i].age);
		printf("Enter grade: \n");
		scanf("%s",&std[i].grade);
	}
	// displaying student info
	display(n);
}

display(int n)
{
	int j;
	for(j=1;j<=n;j++)
	{
		printf("\nStudent details: \n");
		printf("Student name: %s \n",std[j].name);
		printf("Student age: %d \n",std[j].age);
		printf("Student grade: %s \n",std[j].grade);
	}
}
