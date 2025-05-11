#include <stdio.h>

int main()
 {
    int score;
    char grade;


    printf("Enter your score (0-100): ");
    scanf("%d", &score);

  
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
       
    }

  
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

 
    printf("Your grade is: %c\n", grade);

  
    if (grade != 'F') {
        printf("Congratulations, you are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

}
