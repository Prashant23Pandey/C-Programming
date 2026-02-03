#include <stdio.h>
int main() {
    char c;
    scanf(" %c", &c);
    switch(c) {
        case 'R': case 'r': printf("Red"); break;
        case 'G': case 'g': printf("Green"); break;
        case 'B': case 'b': printf("Blue"); break;
        default: printf("Unknown Color");
    }
    return 0;
}