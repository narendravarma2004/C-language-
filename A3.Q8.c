#include <stdio.h>
#include <string.h>

Void swap(char *x, char *y) {
    Char temp = *x;
    *x = *y;
    *y = temp;
}

Void permute(char *str, int l, int r) {
    If(l == r) {
        Printf(“%s\n”, str);
    } else {
        For(int I = l; I <= r; i++) {
            Swap((str + l), (str + i));
            Permute(str, l + 1, r);
            Swap((str + l), (str + i));
        }
    }
}

Int main() {
    Char str[100];
    Printf(“Enter a string: “);
    Fgets(str, 100, stdin);
    If(str[strlen(str) – 1] == ‘\n’) {
        Str[strlen(str) – 1] = ‘\0’;
    }

    Printf(“All possible permutations are:\n”);
    Permute(str, 0, strlen(str) – 1);
    Return 0;
}

