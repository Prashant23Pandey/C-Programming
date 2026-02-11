#include <stdio.h>
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10 + sumOfDigits(num / 10));
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d", sumOfDigits(num));
    return 0;
}