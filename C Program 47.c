#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d, r1, r2;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Real and distinct: %.2lf and %.2lf", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2*a);
        printf("Real and equal: %.2lf", r1);
    } else {
        printf("Roots are imaginary.");
    }
    return 0;
}