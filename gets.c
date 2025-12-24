#include <stdio.h>

int main() {
    char s[30];
    printf("Enter your name");
    gets(s);
    {
    printf("%s", s);
    }
    return 0;
}