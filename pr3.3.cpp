#include <stdio.h>

int main() {
    int num, firstdigit, lastdigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    lastdigit = num % 10;

    
    firstdigit = num;
    while (firstdigit >= 10) {
        firstdigit /= 10;
    }

  
    int sum = firstdigit + lastdigit;

  
    printf("Sum of first and last digit = %d\n", sum);
}