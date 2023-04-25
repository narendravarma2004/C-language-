#include <stdio.h>

int main() {
    int matrix[2][2] = {{1, 2}, {5, 3}};
    int transpose[2][2], i, j;
    printf("Original matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
