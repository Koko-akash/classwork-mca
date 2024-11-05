// student details Q3
// author: Akash Phukan, date: 05/11/24

#include <stdio.h>

// defining Union to store either a character, an integer, or a float
union Data {
    char grade;
    int student_id;
    float cgpa;
};

main() {
    union Data data; // local declaration of the union variable
    
    // Storing and displaying the grade of the student:
    printf("Enter the grade of the student: \n");
    scanf("%c",&data.grade);
    printf("Displaying the grade of the student, \n");
    printf("Grade: %c \n \n", data.grade);
    
    // Storing and displaying the Student ID
    printf("Enter the ID of the student: \n");
    scanf("%d",&data.student_id);
    printf("Displaying the ID of the student, \n");
    printf("ID: %d \n \n", data.student_id);
    
    // Storing and displaying the Student CGPA
    printf("Enter the CGPA of the student: \n");
    scanf("%f",&data.cgpa);
    printf("Displaying the CGPA of the student, \n");
    printf("CGPA: %f \n \n", data.cgpa);
}
