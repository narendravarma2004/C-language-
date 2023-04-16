#include <stdio.h>

Int isPrime(int num);

Int main() {
    Int start, end, I, flag;

    Printf(“Enter two positive integers: “);
    Scanf(“%d %d”, &start, &end);

    Printf(“Prime numbers between %d and %d are: “, start, end);

    For(i=start+1; i<end; i++) {
        Flag = isPrime(i);

        If(flag == 1)
            Printf(“%d “, i);
    }

    Return 0;
}
Int isPrime(int num) {
    Int j, flag = 1;

    For(j=2; j<=num/2; j++) {
        If(num%j == 0) {
            Flag = 0;
            Break;
        }
    }

    Return flag;
}

