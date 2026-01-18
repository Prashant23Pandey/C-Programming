#include <stdio.h>
int main() {
    char c;
    printf("Enter first letter of color: ");
    scanf(" %c", &c);
    switch(c) {
        case 'r': case 'R': printf("Red"); break;
        case 'g': case 'G': printf("Green"); break;
        case 'b': case 'B': printf("Blue"); break;
        default: printf("Color not in list");
    }
    return 0;
}