#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i, max;
    printf("Input total number of elements(1 to 100): ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int)); // Allocate memory for n integers
    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }
    for(i = 0; i < n; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element in the array is: %d", max);
    free(arr); // Free the memory
    return 0;
}
