#include <stdio.h>

int main() {
    float length, width, height;
    float surfaceArea, volume;
    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);
    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);
    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);
    volume = length * width * height;
    surfaceArea = 2 * (length * width + length * height + width * height);
    printf("\nVolume of the cuboid: %f\n", volume);
    printf("Surface Area of the cuboid: %f\n", surfaceArea);

    return 0;
}