#include <stdio.h>
	
int add(int a, int b) 
{
 return a + b;
  }
int subtract(int a, int b)
 {
  return a - b; 
  }
int multiply(int a, int b)
 {
  return a * b; 
  }
int divide(int a, int b)
 {
  return b != 0 ? a / b : 0; 
}
int mod(int a, int b)
 {
  return b != 0 ? a % b : 0;
 }

int main()
 {
    int choice, a, b;

    while (1) {
        printf("Menu:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /  \n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) 
		{
            printf("Exiting the calculator.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, subtract(a, b));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, multiply(a, b));
                break;
            case 4:
                if (b == 0)
                    printf("Division by zero is not true mathamaticaly.\n");
                else
                    printf("Division of %d and %d is %d\n", a, b, divide(a, b));
                break;
            case 5:
                if (b == 0)
                    printf("Modulus by zero is not allowed.\n");
                else
                    printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

   
}
/*
Menu:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 to exit
Enter your choice: 1
Enter the first number: 5
Enter the second number: 5
Addition of 5 and 5 is 10

*/