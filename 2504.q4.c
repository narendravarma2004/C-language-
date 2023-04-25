#include <stdio.h>

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, temp;
    printf("Original array: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    for(i=0; i<n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\nReversed array: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
