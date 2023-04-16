#include <stdio.h>

Void copy_array(int *source, int *dest, int size) {
    For(int I = 0; I < size; i++) {
        *(dest + i) = *(source + i);
    }
}

Int main() {
    Int source[5] = {1, 2, 3, 4, 5};
    Int dest[5];

    Copy_array(source, dest, 5);

    Printf(“Elements of destination array: “);
    For(int I = 0; I < 5; i++) {
        Printf(“%d “, *(dest + i));
    }

    Return 0;
}

