#include <stdio.h>

Int checkPrime(int n);

Int main() {
    Int num, I, flag = 0;

    Printf(“Enter a positive integer: “);
    Scanf(“%d”, &num);

    Printf(“All the possible combinations of prime numbers that add up to %d are:\n”, num);

    For(i=2; i<=num/2; i++) {
        If(checkPrime(i) == 1 && checkPrime(num-i) == 1) {
            Printf(“%d = %d + %d\n”, num, I, num-i);
            Flag = 1;
        }
    }

    If(flag == 0)
        Printf(“%d cannot be expressed as the sum of two prime numbers.\n”, num);

    Return 0;
}
Int checkPrime(int n) {
    Int I, isPrime = 1;

    For(i=2; i<=n/2; i++) {
        If(n%i == 0) {
            isPrime = 0;
            break;
        }
    }

    Return isPrime;
}

