// LeetCode 50 - Pow(x, n) (Medium) | Topic: recursion, divide & conquer
#include <stdio.h>

double helper(double x, long n) {
    if (n == 0) return 1.0;
    double half = helper(x, n / 2);
    return (n % 2 == 0) ? half * half : half * half * x;
}

double myPow(double x, int n) {
    long e = n;
    if (e < 0) { x = 1 / x; e = -e; }
    return helper(x, e);
}

int main() {
    printf("2^10  = %.5f\n", myPow(2.0, 10));    // 1024.00000
    printf("2^-2  = %.5f\n", myPow(2.0, -2));    // 0.25000
    return 0;
}
