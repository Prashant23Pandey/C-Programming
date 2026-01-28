#include<stdio.h>
int main() {
    int size, i, min_value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    min_value = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    printf("\nMinimum element of the array is: %d\n", min_value);
    return 0;
}