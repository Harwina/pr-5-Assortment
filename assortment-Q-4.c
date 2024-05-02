#include <stdio.h>

void printRow(int arr[][100], int row, int cols) {
    printf("Elements of row %d: ", row);
    for (int j = 0; j < cols; j++) {
        printf("%d", arr[row][j]);
        if (j < cols - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void printColumn(int arr[][100], int rows, int col) {
    printf("Elements of column %d: ", col);
    for (int i = 0; i < rows; i++) {
        printf("%d", arr[i][col]);
        if (i < rows - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int sumRow(int arr[][100], int row, int cols) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[row][j];
    }
    return sum;
}

int sumColumn(int arr[][100], int rows, int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][col];
    }
    return sum;
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
    
    int row, col;
    
    printf("\nEnter row number: ");
    scanf("%d", &row);
    printRow(arr, row, cols);
    printf("The sum of row %d: %d\n\n", row, sumRow(arr, row, cols));
    
    printf("Enter column number: ");
    scanf("%d", &col);
    printColumn(arr, rows, col);
    printf("The sum of column %d: %d\n", col, sumColumn(arr, rows, col));
    
    return 0;
}
