#include<stdio.h>
int main()
{
	int size,sum ,i=0;
	
	printf("enter array size: ");
	scanf("%d", &size);
	
	int a[size];
	
	printf("enter array eliments: \n");
	
	for(i; i<=size; i++)
	{
		printf("a[%d]= ",  i);
		scanf("%d", &a[i]);
		sum+= a[i];
	}
	
   float avg=sum/size;
    
    printf("avg value of an array is:%f\n", avg);
	

}