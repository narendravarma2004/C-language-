#include <stdio.h>

Int lcm(int num1, int num2);

Int main() {
    Int num1, num2, result;

    Printf(“Enter two positive integers: “);
    Scanf(“%d %d”, &num1, &num2);

    Result = lcm(num1, num2);

    Printf(“LCM of %d and %d is %d.”, num1, num2, result);

    Return 0;
}
Int lcm(int num1, int num2) {
    Int max = (num1 > num2) ? num1 : num2;

    While(1) {
        If(max % num1 == 0 && max % num2 == 0)
            Return max;
        Max++;
    }
}

