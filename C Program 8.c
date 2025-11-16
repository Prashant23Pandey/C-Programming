#include <stdio.h>

int main() {
    float side, volume, surfaceArea;
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);
    volume = side * side * side;
    surfaceArea = 6 * side * side;
    printf("The volume of the cube is: %f\n", volume);
    printf("The surface area of the cube is: %f\n", surfaceArea);
    return 0;
}