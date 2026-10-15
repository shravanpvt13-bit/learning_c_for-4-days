// LeetCode 9 - Palindrome Number (Easy) | Topic: while loop, % and /
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false;
    long rev = 0; int t = x;
    while (t > 0) { rev = rev * 10 + t % 10; t /= 10; }
    return rev == x;
}

int main() {
    printf("121  -> %d\n", isPalindrome(121));   // 1
    printf("-121 -> %d\n", isPalindrome(-121));  // 0
    printf("10   -> %d\n", isPalindrome(10));    // 0
    return 0;
}
