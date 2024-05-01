//selection sort 

#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j;          // Outer, Inner loop counters
    int minIndex;      // Smallest element index
    int temp;          // Swap variable
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {17, 34, 25, 49, 9};   // Initial array
    int n = sizeof(arr) / sizeof(arr[0]);  // Array length
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n); 
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
    
}


