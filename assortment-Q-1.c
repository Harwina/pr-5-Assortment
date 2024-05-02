#include <stdio.h>

void findNegativeElements(int arr[], int size) {
    printf("Negative elements from an Array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int size;
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    findNegativeElements(arr, size);
    
    return 0;
}
