#include <stdio.h>
struct Comp { float r, i; };
int main() {
    struct Comp a, b, sum;
    printf("Enter real and img for two numbers:\n");
    scanf("%f %f %f %f", &a.r, &a.i, &b.r, &b.i);
    sum.r = a.r + b.r; sum.i = a.i + b.i;
    printf("Sum = %.1f + %.1fi", sum.r, sum.i);
    return 0;
}