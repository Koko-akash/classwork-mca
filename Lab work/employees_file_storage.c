/* 
Q.1 Create a structure with the following data elements: employee code, employee name, employee designation, salary. 
Store the info in a employee.dat file for 10 employees
*/

#include<stdio.h>
// we create a structure for each employee
struct Employee {
	// the data members of the structure
	int emp_code;
	char emp_name[20];
	char emp_designation[20];
	float emp_salary;
};

main()
{
	
	FILE *fp;
	struct Employee emps[100]; // we create an array variable for the structure Employee
	int i, n;
	printf("Enter the number of employees you want to store: \n"); // we input the number of employees we want to store
	scanf("%d",&n);
	
	fp = fopen("employee.dat", "w");
	
	// Entering the data for each employee
	for(i=1;i<=n;i++)
	{
		printf("\n \t Enter the info of employee %d: \n",i);
		printf("\n Enter the code of the employee: \n");
		scanf("%d", &emps[i].emp_code);
		// fprintf(fp, "%d", emps[i].emp_code);
		
		
		printf("\n Enter the name of the employee: \n");
		scanf("%s",emps[i].emp_name);
		// fprintf(fp, "%s",emps[i].emp_name);
		
		printf("\n Enter the designation of the employee: \n");
		scanf("%s",emps[i].emp_designation);
		// fprintf(fp, "%s",emps[i].emp_designation);
		
		printf("\n Enter the salary of the employee: \n");
		scanf("%f",&emps[i].emp_salary);
		// fprintf(fp, "%f",emps[i].emp_salary);
		fprintf(fp, "%d \n %s \n %s \n %f \n", emps[i].emp_code, emps[i].emp_name, emps[i].emp_designation, emps[i].emp_salary);
	}
	
	fclose(fp);
	
	printf("\n ****************** \n");
	
	fp = fopen("employee.dat","r");
	// we dispay the data for each employee
	for(i=1;i<=n;i++)
	{
		fscanf(fp, "%d \n %s \n %s \n %f \n", &emps[i].emp_code, emps[i].emp_name, emps[i].emp_designation, &emps[i].emp_salary);
		printf("\n \t Details for the employee %d: \n",i);
		printf("\n The code of the employee: %d \n",emps[i].emp_code);
		printf("\n The name of the employee: %s \n",emps[i].emp_name);
		printf("\n The designation of the employee: %s \n",emps[i].emp_designation);
		printf("\n The salary of the employee: %f \n",emps[i].emp_salary);
	}
	fclose(fp);

}




