#include<stdio.h>

int main()
{
	int n,i,sum ;
	printf("enter a positive integer:  ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		sum+=i;
	}
	printf("the sum of %d is %d", n, sum);
}