// LeetCode 231 - Power of Two (Easy) | Topic: recursion
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}

int main() {
    printf("16 -> %d\n", isPowerOfTwo(16));   // 1
    printf("18 -> %d\n", isPowerOfTwo(18));   // 0
    return 0;
}
