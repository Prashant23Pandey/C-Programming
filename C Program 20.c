#include <stdio.h>

int main() {
    int a = 15; 
    int result = ~a;

    printf("Original number (decimal): %d\n", a);
    printf("Bitwise NOT result (decimal): %d\n", result);

    return 0;
}