#include <stdio.h>

Int gcd(int num1, int num2);

Int main() {
    Int num1, num2, result;

    Printf(“Enter two positive integers: “);
    Scanf(“%d %d”, &num1, &num2);

    Result = gcd(num1, num2);

    Printf(“GCD of %d and %d is %d.”, num1, num2, result);

    Return 0;
}
Int gcd(int num1, int num2) {
    If(num2 == 0)
        Return num1;
    Else
        Return gcd(num2, num1 % num2);
}

