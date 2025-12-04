#include<stdio.h>
int main() 
{
    int num1, num2, temp;

    // Prompt user for first number
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    // Prompt user for second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("After swapping, first number: %d\n", num1);
    printf("After swapping, second number: %d\n", num2);

    return 0;
}