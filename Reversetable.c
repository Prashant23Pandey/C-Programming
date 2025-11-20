#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=10; i>0; i--)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}