#include <stdio.h>
#include <string.h>


main() {
    char str1[50] = "My name is "; // declaring string 1
    char str2[] = "Akash Phukan"; // declaring string 2
    
    strcat(str1, str2); // Concatenate str2 to str1
    
    printf("After concatenation: %s", str1);
}
