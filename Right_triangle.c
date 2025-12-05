//Right Angle Triangle Pattern with Numbers

#include <stdio.h>

void main() { int i, j, rows;

printf("Input number of rows : "); scanf("%d", &rows);

for (i = 1; i <= rows; i++) { for (j = 1; j <= i; j++)
printf("%d", j);
 
printf("\n");
}
}

// Output
// Input number of rows : 10 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910
