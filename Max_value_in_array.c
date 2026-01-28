#include<stdio.h>
int main() {
    int size, i, max_value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element - %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    max_value = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }
    printf("\nThe maximum element in the array is: %d\n", max_value);
    return 0;
}