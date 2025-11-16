#include<stdio.h>
int main()
{
    float rad, area;
    printf("Enter Radius Value of Circle: ");
    scanf("%f", &rad);
    area = 3.14*rad*rad;
    printf("Area = %f", area);
    return 0;
}