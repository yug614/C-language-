

#include <stdio.h>
#include<string.h>
int main() 
{
    char string[100];
    char *ptr;
    int length;

    printf("Enter any string: ");
    gets(string); 

    ptr = string;

    for (length = 0; *ptr != '\0'; ptr++, length++);
    {
    	 printf("The length of a string is: %d\n", length);

	}
   
}
/*
Enter any string: hello world
The length of a string is: 11
*/
