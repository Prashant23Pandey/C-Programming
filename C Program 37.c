#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Lower case: %c", ch + 32);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Upper case: %c", ch - 32);
    } else {
        printf("Not an alphabet.");
    }
    return 0;
}