#include<stdio.h>

int main()
{
	int n,i, fact=1;
	printf("enter a positive integer:  ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	printf("final factorial is %d", fact);
}