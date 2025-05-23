#include<stdio.h>
int main()
{
	int size,i=0;
	
	printf("enter array size: ");
	scanf("%d", &size);
	
	int a[size];
	
	printf("enter array eliments: \n");
	
	
	int b[size];
	
	printf("enter array eliments: \n");
	
	for(i; i<=size; i++)
	{
		printf("a[%d]= ",  i);
		scanf("%d", &a[i]);
		sum+= a[i];
	}
	
	printf("length of an array:%d\n", size);
	

}