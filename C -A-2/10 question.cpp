#include <stdio.h>
#include <limits.h>
int minJumps(int arr[], int n) {
    if (n <= 1) {
        return 0;
    }
    if (arr[0] == 0) {
        return -1;
    }
    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;
    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return jumps;
        }
        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
        steps--;
        if (steps == 0) {
            jumps++;
            if (maxReach <= i) {
                return -1;
            }
            steps = maxReach - i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = minJumps(arr, n);

    if (result == -1) {
        printf("The end is not reachable\n");
    } else {
        printf("Minimum number of jumps: %d\n", result);
    }
    return 0;
}
