#include <stdio.h>
int main() {
    int arr[5]={10,7,4,6,2};
    int *ptr;
    ptr=&arr[0];
    int i;
    printf("Print array by using pointers");
    for(i=0;i<5;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}
