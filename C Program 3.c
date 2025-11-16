#include<stdio.h>
void main()
{
    long int gs,bs, da, hr;
    printf("Enter your Basic Salary \n");
    scanf("%ld",&bs);
    da=(bs*5)/100;
    hr= (bs*10)/100;
    gs=bs+da+hr;
    printf("Gross Salary is %ld",gs);
}