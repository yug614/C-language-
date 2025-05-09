#include<stdio.h>
int main()
{
int choice;
printf("press 1 for hindi\n");
printf("press 2 for english\n");
printf("press 3 for gujrati\n");

printf("enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
	case 1: {
		printf("you choose hindi\n");
		break;
	}
	case 2: {
		printf("you choose english\n");
		break;
	}
	case 3: {
		printf("you choose gujrati\n");
		break;
	}
	default: {
		printf("jo baka enter valid number!!!");
		break;
	}
}

}