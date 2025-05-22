#include<stdio.h>
int main()
{
	int a, b;
	
	for(a=1;a<=5;a++)
	{
		if(a==1 || a==3)
		{
			printf("* * * * *\n");
		}
		else if (a==2)
		{
			printf("*       *\n");
		}
		else if (a==4 || a==5)
		{
			printf("*\n");
		}
	}
}
/*
output
*/