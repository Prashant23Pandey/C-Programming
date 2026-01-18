#include <stdio.h>
int main() {
    char op;
    double a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch(op) {
        case '+': printf("%.2lf", a + b); break;
        case '-': printf("%.2lf", a - b); break;
        case '*': printf("%.2lf", a * b); break;
        case '/': b != 0 ? printf("%.2lf", a / b) : printf("Error: Div by 0"); break;
        default: printf("Invalid operator");
    }
    return 0;
}