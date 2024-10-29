// Unions vs Structures
// author: Akash Phukan, date: 24/10/24
#include<stdio.h>
// globally creating a union named car 
union Car 
{
	char name[25];
	float price;
} car1;
// globally creating a structure named car2
struct Car2
{
	char name2[25];
	float price2;
} car2;

main()
{
	float x, y;
	// we input car details for car1
	printf("Enter the car details: \n");
	printf("Enter the car1 name: \n");
	scanf("%s",car1.name);
	printf("Enter the price of the car1: \n");
	scanf("%f",&car1.price);
	
	// and now for car 2
	printf("Enter the car2 name: \n");
	scanf("%s",car2.name2);
	printf("Enter the price of the car2: \n");
	scanf("%f",&car2.price2);

	// we store the size of car 1 and car2 in variables x and y
	x = sizeof(car1);
	y = sizeof(car2);
	
	// we display the size of the union and the structure
	printf("\n The size of car 1: %f \n",x);
	printf("\n The size of car 2: %f \n",y);
}
