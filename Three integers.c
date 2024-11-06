
#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Prompt the user for three integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Display the result
    printf("The average of the three numbers is: %.2f\n", average);
    
    return 0;
}
