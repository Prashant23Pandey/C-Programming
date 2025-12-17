#include <stdio.h>
int main()
{
    int base, exponent;
    float power = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;
    while (expo < 0)
    {
        power = power/base;
        expo++;
    }
    while(expo>0)
    {
        power = power * base;
        expo--;
    }
    printf("%d ^ %d = %f", base, exponent, power);
 
    return 0;
}