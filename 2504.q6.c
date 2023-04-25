#include <stdio.h>

int main() {
    int arr[] = {15, 14, 25, 14, 32, 14, 31};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, k;
    printf("Original array: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    for(i=0; i<n-1; i++) {
        if(arr[i] == arr[i+1]) {
            for(j=i+1; j<n; j++) {
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }
    printf("\nArray with duplicates removed: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
