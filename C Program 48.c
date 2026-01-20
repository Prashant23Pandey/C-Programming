#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);
    if (isupper(ch)) printf("Lower: %c", tolower(ch));
    else if (islower(ch)) printf("Upper: %c", toupper(ch));
    return 0;
}