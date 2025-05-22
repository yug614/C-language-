#include <stdio.h>

int main() 
{
    int a, b, n=5,d ;
    
    for(a=n; a>=1;a--)
    {
    	for(d=a;d>=1;d--)
    	{
    		printf(" ");
		}
    	for(b=a;b<=n; b++)
		{
			printf("%d", b);
		}
		for(b=n-1;b>=a;b--)
		{
			printf("%d",b);
		}
		printf("\n");
    	
	}


  
}
/*
*/