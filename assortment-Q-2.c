#include <stdio.h>

int findLargestElement(int arr[][100], int rows, int cols) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arr[100][100];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int largest = findLargestElement(arr, rows, cols);
    printf("The largest element is: %d\n", largest);
    
    return 0;
}
