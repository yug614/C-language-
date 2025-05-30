#include<stdio.h>
int main()
{
	char str[100] , c;
	int count=0;
	printf("Enter any string: ");
	gets(str);
     
	 for(c='a'; c<='z' ; c++)
	 {
	 	count=0;
	 	for(int i=0 ; str[i] != NULL ; i++)
	 	{
	 		if(c==str[i])
	 		count++;
		 }
		 if (count>0)
		 printf("%c Found in %d times.\n", c , count);
	}	
}