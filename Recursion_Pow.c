#include <stdio.h>
int Pow(int a, int n);
int main() {
    int result;
    result = Pow(5,3);
    printf("Result is:%d", &result);
    return 0;
    }
    int Pow(int a, int n) {
    if(n==0){
    return 1;
    }
    if(n==1){
    return a;
    }
        else
        {
            return a* Pow(a, n-1);
        }
}