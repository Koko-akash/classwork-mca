// Local and Global variables
// Author: Akash Phukan
#include<stdio.h>
#include<stdlib.h>
// global declaration of variables
char name1[20], name2[20]; 
int a, b;
main()
{
	extern int a, b; // we use extern keyword to import global variables
	printf("These are global variables: \n");
	printf("Enter the valude of a and b \n"); 
	scanf("%d %d",&a,&b);
	char name1[] = "Cristiano Ronaldo", name2[] = "Lionel Messi"; // here, we've imported name1 and name2 variables
	
	printf("%s %s \n",name1,name2);
	printf("%d %d \n\n",a,b);
	
	// as of local variables
	// their scope is within the main()
	char name3[] = "Lewis Hamilton", name4[] = "Max Vestappin";
	printf("These are local variables: \n");
	printf("%s %s \n",name3,name4);
	int x=10, y=20;
	printf("%d %d \n",x,y);
}
