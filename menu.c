#include <stdio.h>

int main() {
    int menu;
    printf("Enter a dishnumber (1-5):");
    scanf("%d", &menu);
    switch (menu) 
    {
        case 1: printf("Chocolate");
        case 2: printf("Pasta");
        case 3: printf("Maggi");
            break;
        case 4: printf("Boba Tea");
            break;
        case 5: printf("Pizza");
            break;
    default: 
            printf("No other dish available. Please enter a number between 1 and 5");
            break; 
    }
    return 0;
}