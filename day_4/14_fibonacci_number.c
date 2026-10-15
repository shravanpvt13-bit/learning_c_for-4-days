// LeetCode 509 - Fibonacci Number (Easy) | Topic: basic recursion
#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;            // base case
    return fib(n - 1) + fib(n - 2);  // recursive case
}

int main() {
    printf("fib(10) = %d\n", fib(10));   // 55
    return 0;
}
