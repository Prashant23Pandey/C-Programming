#include <stdio.h> 

int main() { 
    int n, original, rem, rev = 0; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    original = n;  
    while (n != 0) { 
        rem = n % 10; 
        rev = rev * 10 + rem; 
        n = n / 10; 
    } 

    if (original == rev) 
        printf("It is a Palindrome\n"); 
    else 
        printf("It is not a Palindrome\n"); 
    return 0; 
}

// Input:
// 121
// Output:
// It is a Palindrome
