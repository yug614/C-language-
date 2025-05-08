#include<stdio.h>
 int main()
 {
 	int a,b,c,d;
 	
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);

     if (a > b)
	  {
        if (a > c)
	    {
            if (a > d)
                {
				 printf("a is max");
                }
				else
                {
				  printf("d is max");
			    }
			}
        }
	else
	{
	 if(b>c)
	 {
	 	if(b>d)
	 	{ 
	 	printf("b is max");
		 }
		 else(b<d)
		 {
		 	printf("d is max")
		 }
	 }
	}