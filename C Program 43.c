#include <stdio.h>
struct Complex {
    float real, imag;
};
int main() {
    struct Complex n1, n2, sum;
    printf("Enter real and imaginary for 1st: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter real and imaginary for 2nd: ");
    scanf("%f %f", &n2.real, &n2.imag);
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;
    printf("Sum = %.1f + %.1fi", sum.real, sum.imag);
    return 0;
}