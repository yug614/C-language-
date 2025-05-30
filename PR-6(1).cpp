#include<stdio.h>
#include<string.h>

int main()
{
	char arr[50];
	char data1[50], data2[50];

	printf("Enter any string :");
	gets(arr);
	
	strcpy(data1, (arr));
	
	strcpy(data2, strrev(arr));
	
	if(!strcmp(data1, data2)){
		printf("palindrome");
	}else{
		printf("not Plindrome");
	}
}
/*
Enter any string :nayan
palindrome
Enter any string :prince
not Plindrome
*/

