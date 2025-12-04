#include<stdio.h>
int main()
{
    float height, base, area;

    // Prompt user for height
    printf("Enter the height of triangle: ");
    scanf("%f", &height);
    
    // Prompt user for base
    printf("Enter the base of triangle: ");
    scanf("%f", &base);

    // Calculate area
    area = 0.5 * base * height;

    // Display the area
    printf("The area of the triangle with base %f and height %f is %f\n", base, height, area);

    return 0;
}
