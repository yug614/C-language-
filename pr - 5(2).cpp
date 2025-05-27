#include<stdio.h>
int main()
{
	int row , column;
	printf("enter row size:");
	scanf("%d", &row);
	
	printf("enter column size:");
	scanf("%d", &column);
	
	int arr[row][column];
	
	printf("enter arrays elements:");
	for(int i=0; i<row ; i++)
	{
		for(int j = 0; j< column ; j++)
		{
		printf("a[%d][%d] = ", i,j);
		scanf("%d", &arr[i][j]);
		
		}
	}
	
	int biggest = arr[0][0];
	for(int i=0; i<row ; i++)
           {
		for(int j = 0; j< column ; j++)
		{
		if(arr[i][j]> biggest)
		{
			biggest = arr [i][j];
		}
                      }
	}
	printf("the largest element is: %d\n", biggest);	
}