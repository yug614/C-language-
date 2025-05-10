#include<stdio.h>

int main()
{
	int score;
	char grade,a,b,c,d,e,f;
	
	printf("enter the score: ");
	scanf("%d", &score);
	
	if(score < 0 || score > 100)
	{
	printf("please enter valid score");
	}
	if(score>=90)
	{
		printf("your grade is a");
		
	}
	else if (score>=80)
	{
		printf("your grade is b");
			break;
	}
	else if (score>=70)
	{
		printf("your grade is c");
		break;
	}
	else if (score>=60)
	{
		printf("your grade is d");
		break;
	}
	else if (score>50)
	{
		printf("your geade is e");
			break;
	}
	else if (score>40)
	{
		printf("your geade is f");
			break;
	}
	printf(" %c\n",   grade);
	printf("cogratulations");
}