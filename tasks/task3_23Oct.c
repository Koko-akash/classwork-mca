// Task 3
// author: Akash Phukan, date: 23/10/24
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// creating a structure for student
struct Student
{
  char name[15];
  int math;
  int science;
  int english;
};
// creating a structure for total marks
struct TotalMarks
{
	int totalMarks;
}

main ()
{
	struct Student std;
	int total_score;
	
	// entering student info
	printf("Enter the student details: \n");
	printf("Enter the name of the student: \n");
	scanf("%s",std.name);
	printf("Enter the marks scored in Maths: \n");
	scanf("%d",&std.math);
	printf("Enter the marks scored in Science: \n");
	scanf("%d",&std.science);
	printf("Enter the marks scored in English: \n");
	scanf("%d",&std.english);
	
	total_score = total(&std); // here we storing the total score from the function in a variable
	printf("\n %s scored %d out of 300. \n",std.name,total_score); // displaying the output
}

// function to calculate the total marks obtained 
total(struct Student *s, struct TotalMarks *t)
{
	
	t->totalMarks = s->math + s->science + s->english;
	return (t->totalMarks);
}
