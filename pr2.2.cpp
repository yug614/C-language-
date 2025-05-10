#include<stdio.h>

int main()
{
	int score;
	char grade,a,b,c,d,e,f;
	
	printf("enter the score: \n");
	scanf("%d", &score);


	if(score>=90)
	{
		printf("your grade is a\n");
		printf("excellent work!!");
	}
	else if (score>=80)
	{
		printf("your grade is b\n");
		printf("well done!!");
	}
	else if (score>=70)
	{
		printf("your grade is c\n");
	printf("good job!!");
	}
	else if (score>=60)
	{
		printf("your grade is d\n");
	printf("you passed");
	}	
	else if (score>=50)
	{
		printf("your geade is e\n");
		printf("you could better next time");
	}
	else if (score>=40)
	{
		printf("your geade is f\n");
		printf("do focus on your study");
	}	
	printf(" %c\n",   grade);

}
    /*
    input is 82
    output is your grade is b
              well done
    */