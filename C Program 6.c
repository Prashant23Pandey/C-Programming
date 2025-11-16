#include <stdio.h>

int main() {
    double a, b, c, s, area;
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the scalene triangle is: %f\n", area);
    } 
    else 
    {
    printf("The given side lengths do not form a valid triangle.\n");
    }
    return 0;
}