// Fibonacci Series

#include<stdio.h>

int main()
{
int n = 10;
int a = 0, b = 1; printf("%d, %d",a,b);

int nextTerm;

for(int i = 2; i < n; i++){ nextTerm = a + b;
a = b;
b = nextTerm;

printf("%d, ",nextTerm);
}

return 0;
}

// Output: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34