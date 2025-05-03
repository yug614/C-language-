#include <stdio.h>

int main() 
{
    float usd, inr;
    float rate = 83.20; // Example: 1 USD = 83.20 INR

    printf("Enter amount in USD: ");
    scanf("%f", &usd);

    inr = usd * rate;

    printf("%.3f USD = %.3f INR\n", usd, inr);


}