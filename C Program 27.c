// Program to demonstrate ++x + x++ expression
#include <stdio.h>

int main() {
    int x = 5, y;
    printf("Initial x = %d\n", x);
    y = ++x + x++;
    printf("After y = ++x + x++:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}