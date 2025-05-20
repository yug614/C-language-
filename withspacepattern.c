#include<stdio.h>
int main()
{
	int a, c , b;
	
	for (a=1; a<=5; a++)
	{
		for(b=5;b>=a; b--)
		{
			printf("  ");
		}
		for(c=a; c>=1; c--)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
	
}