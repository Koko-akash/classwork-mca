// Unions vs Structures
// author: Akash Phukan, date: 24/10/24
#include<stdio.h>

union Car 
{
	char name[25];
	float price;
} car1;

struct Car2
{
	char name2[25];
	float price2;
} car2;

main()
{
	float x, y;
	printf("Enter the car details: \n");
	printf("Enter the car1 name: \n");
	scanf("%s",car1.name);
	printf("Enter the price of the car1: \n");
	scanf("%f",&car1.price);
	
	// for car 2
	printf("Enter the car2 name: \n");
	scanf("%s",car2.name2);
	printf("Enter the price of the car2: \n");
	scanf("%f",&car2.price2);
	
	x = sizeof(car1);
	y = sizeof(car2);
	printf("\n The size of car 1: %f \n",x);
	printf("\n The size of car 2: %f \n",y);
}
