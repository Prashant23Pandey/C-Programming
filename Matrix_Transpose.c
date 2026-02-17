#include <stdio.h>
void printTranspose(int arr[][10], int rows, int cols) {
    printf("Transpose of the matrix:\n");
    for(int j = 0; j < cols; j++) {  
        for(int i = 0; i < rows; i++) {  
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[10][10];  
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printTranspose(matrix, rows, cols);
    return 0;
}