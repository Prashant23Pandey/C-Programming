// Program to find size of long integer
#include <stdio.h>

int main() {
    long int longVar;
    int intVar;
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of long int: %zu bytes\n", sizeof(longVar));
    return 0;
}