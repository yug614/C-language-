#include<stdio.h>
int main()
{
	int size,i=0 ;
	
	printf("enter array size for a: ");
	scanf("%d", &size);
	
	int a[size],b[size],c[size];
	
	printf("enter array a's eliments: \n");
	
	for(i; i<=size; i++)
	{
		printf("a[%d]= ",  i);
		scanf("%d", &a[i]);
		
	}
	
	
	printf("enter array b's eliments: \n");
	
	for(i; i<=size; i++)
	{
		printf("b[%d]= ",  i);
		scanf("%d", &b[i]);
		
	}

	
	for(i; i<=size; i++)
	{
		c[i]= a[i] + b[i];
	}
	 
	printf("new array c is: \n");
		
	for(i; i<=size; i++)
	{
		printf("%d", c[i]);
	}
	

}
