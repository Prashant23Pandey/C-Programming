#include<stdio.h>
int main()
{
    float radius, area;
    const float PI = 3.14;

    // For radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Display the area
    printf("The area of the circle with radius %f is %f\n", radius, area);

    return 0;
}
