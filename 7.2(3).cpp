#include<stdio.h>
int main()
{
	int a, c , b;
	
	for (a=5; a>=1; a--)
	{
		for(b=1;b<=a; b++)
		{
			printf("  ");
		}
		for(c=6-a; c>=1; c--)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
	
}