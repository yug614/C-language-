#include<stdio.h>

int main()
{
	int n,i;
	printf("enter a positive integer:  ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++)
	{
	    printf("%d\n", n*i);
	}

}