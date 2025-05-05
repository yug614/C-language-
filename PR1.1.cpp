#include<stdio.h>
int main()
{
	float C,F;
	printf("enter temp in C: ");
	scanf("%f", &C);
	
	F=(C*9/5) + 32;
	
	printf("%.2f C= %.2fF ",C , F);
	
}

/*
    input c=100
    output f=212
*/