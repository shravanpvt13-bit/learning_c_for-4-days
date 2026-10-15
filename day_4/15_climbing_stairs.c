// LeetCode 70 - Climbing Stairs (Easy) | Topic: recursion + memoization
#include <stdio.h>
#include <string.h>

int memo[50];

int climb(int n) {
    if (n <= 2) return n;
    if (memo[n]) return memo[n];
    return memo[n] = climb(n - 1) + climb(n - 2);
}

int main() {
    memset(memo, 0, sizeof(memo));
    printf("n=5  -> %d\n", climb(5));    // 8
    printf("n=10 -> %d\n", climb(10));   // 89
    return 0;
}
