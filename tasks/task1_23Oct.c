// Task 1
// author: Akash Phukan, date: 23/10/24
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// creating a structure for student
struct Student
{
  char name[15];
  int age;
  char grade[5];
};

main ()
{
	struct Student std;
  
	// entering student info
	printf("Enter the student details: \n");
	printf("Enter the name of the student: \n");
	scanf("%s",std.name);
	printf("Enter age: \n");
	scanf("%d",&std.age);
	printf("Enter grade: \n");
	scanf("%s",&std.grade);
  
	// displaying student info
	display(&std);
}

display(struct Student *s)
{
	printf("\nStudent Details: \n");
	printf("Student name: %s \n",s->name);
	printf("Student age: %d \n",s->age);
	printf("Student grade: %s \n",s->grade);
	return(0);
}

