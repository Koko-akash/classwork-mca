// Using pointers with unions
// author: Akash Phukan, date: 24/10/24
#include<stdio.h>

union Marks
{
	int math;
	int science;
	int english;
}

main()
{
	// creating a union variable marks to access the Union data members
	union Marks marks;
	// entering Student marks: 
	printf("Enter the Student marks: \n");
	printf("Marks Scored in math: \n");
	scanf("%d",&marks.math);
	printf("Marks Scored in science: \n");
	scanf("%d",&marks.science);
	printf("Marks Scored in english: \n");
	scanf("%d",&marks.english);
	
	// creating a union pointer variable marksP
	// and storing marks in them
	union Marks *marksP = &marks; 
	
	// displaying the student marks 
	printf("\t Result: \n");
	printf("Math: %d \n",marksP->math);
	printf("Science: %d \n",marksP->science);
	printf("English: %d \n",marksP->english);
	// from the output you can see that unions only store the greatest value and ignores the rest of the values
}
