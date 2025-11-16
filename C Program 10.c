#include <stdio.h>

int main() {
    float rec_width, rec_length, rec_perimeter;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rec_width);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rec_length);
    rec_perimeter = 2 * (rec_width + rec_length);
    printf("Perimeter of the rectangle: %f\n\n", rec_perimeter);
    float tri_side1, tri_side2, tri_side3, tri_perimeter;
    printf("Enter the three sides of the triangle (e.g., a b c): ");
    scanf("%f %f %f", &tri_side1, &tri_side2, &tri_side3);
    tri_perimeter = tri_side1 + tri_side2 + tri_side3;
    printf("Perimeter of the triangle: %f\n\n", tri_perimeter);
    float circle_radius, circle_perimeter;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &circle_radius);
    circle_perimeter = 2 * PI * circle_radius;
    printf("Perimeter of the circle: %f\n", circle_perimeter);

    return 0;
}