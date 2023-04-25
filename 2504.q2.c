#include <stdio.h>

int isComposite(int num) {
    int i;
    if(num<2) {
        return 0;
    }
    for(i=2; i<=num/2; i++) {
        if(num%i == 0) {
            return 1;
        }
    }
    return 0;
}
