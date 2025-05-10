#include <stdio.h>

int main() {
    int score;
    char grade;

   
    printf("Enter your score (0 to 100): ");
    scanf("%d", &score);

    
    if (score < 0 || score > 100) {
        printf("Invalid score entered. Please enter a score between 0 and 100.\n");
        return 1;
    }

  
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

   
    printf("Your grade is: %c\n", grade);

    
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
    }

   
}
