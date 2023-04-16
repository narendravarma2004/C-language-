#include <stdio.h>

Int main() {
    Char str[100];
    Int sum = 0;
    Printf(“Enter the string : “);
    Fgets(str, 100, stdin);

    For(int I = 0; str[i] != ‘\0’; i++) {
        Sum += str[i];
    }

    Printf(“Sum of all characters : %d”, sum);
    Return 0;
}

