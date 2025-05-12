#include<stdio.h>

int main()
{
	int g , n;
	g=1;

	printf("enter the any value for n =");
	scanf("%d", &n);
	
    while(g<=n)
	{
		printf("%d hello\n", g);
		g++ ;
	}
	
}