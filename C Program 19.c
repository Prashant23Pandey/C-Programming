#include <stdio.h>

int main() {
    int a = 15;
    int b = 17;
    
    int result = a ^ b;

    printf("The result of the bitwise XOR operation on %d and %d is: %d\n", a, b, result);

    return 0;
}