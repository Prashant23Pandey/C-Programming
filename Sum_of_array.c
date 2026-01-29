#include<stdio.h>
int main() {
    int size, i, sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the array elements is: %d\n", sum);
    return 0;
}