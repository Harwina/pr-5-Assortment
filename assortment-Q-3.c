#include <stdio.h>

void transposeMatrix(int arr[][100], int rows, int cols) {
    int transpose[cols][rows];
    
    // Finding transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    
    // Printing transpose
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);
    
    int arr[100][100];
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    transposeMatrix(arr, size, size);
    
    return 0;
}
