#include <stdio.h>
#include <math.h>
long int power(int x, int n);
void main()
{
    long int x, n, xpown;
    printf("Enter the values of X and N \n");
    scanf("%ld %ld", &x, &n);
    xpown = power(x, n);
    printf("X to the power N = %ld\n", xpown);
}
long int power(int x, int n)
{
    if (n == 1)
        return(x);
    else if (n % 2 == 0)
        return (pow(power(x, n/2), 2));
    else
        return (x * power(x, n - 1));
}