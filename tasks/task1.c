// Code to creating a structure for student
// author: Akashb Phukan, date: 22/10/24 
#include<stdio.h>
#include<stdlib.h>
display(); // declaring function prototype

// creating a structure for student
struct Student
{
  char name[15];
  int age;
  char grade[5];
} std;

main ()
{
	// entering student info
	printf("Enter the student details: \n");
	printf("Enter the name of the student: \n");
	// scanf("%s",std.name);
	gets(std.name);
	printf("Enter age: \n");
	scanf("%d",&std.age);
	printf("Enter grade: \n");
	scanf("%s",&std.grade);
	// displaying student info
	display();
}

display()
{
	printf("Student name: %s \n",std.name);
	printf("Student age: %d \n",std.age);
	printf("Student grade: %s \n",std.grade);
}
