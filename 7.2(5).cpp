#include<stdio.h>
int main()
{
	int a, c , b;
	
	for (a=5; a>=1; a--)
	{
		for(b=a;b<=5; b++)
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