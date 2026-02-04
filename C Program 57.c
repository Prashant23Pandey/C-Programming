#include <stdio.h>
int main() {
    char op; float a, b;
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': printf("%.2f", a+b); break;
        case '-': printf("%.2f", a-b); break;
        case '*': printf("%.2f", a*b); break;
        case '/': printf("%.2f", a/b); break;
    }
    return 0;
}