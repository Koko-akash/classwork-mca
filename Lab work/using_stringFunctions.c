// In this program we try different string functions from the string.h header file
// Author: Akash Phukan
#include<stdio.h>
#include<string.h>
main()
{
	char string1[20] = "Burgers ";
	char string2[20] ="Nuggets";
	// concatination of two strings:
	strcat(string1, string2);
	printf("Concatinate two strings: %s",string1);
	
	// copy two strings:
	char string3[20];
	strcpy(string3, string1); // copy string1 to string3
	printf("\n Copy two strings: %s",string3);
	
	// length of a string
	char string4[20] = "Pizza";
	int length;
	length = strlen(string4);
	printf("\n The length of string4 is, %d",length);
	
	// Comparing of strings
	char str5[] = "Sprite";
	char str6[] = "Sprite";
	char str7[] = "Pepsi";
	
	printf("\n Here we compare different strings: \n");
	// Compare str5 and str6, and print the result
	printf("\n %d\n", strcmp(str5, str6));  // Returns 0 (the strings are equal)
	
	// Compare str5 and str7, and print the result
	printf("\n %d\n", strcmp(str5, str7));  // Returns 1 (the strings are not equal)
	
	// Converts string to uppercase
	char str8[] = "fried noodles";
	printf("\n %s", strupr(str8));
	
	// Converts string to lowercase
	char str9[] = "PORK BUN";
	printf("\n %s", strlwr(str9));
	
	// Reverses a string
	char str10[] = "Mr. Rizz is a good man.";
	printf("\n %s", strrev(str10));
	
}
