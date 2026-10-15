// LeetCode 202 - Happy Number (Easy) | Topic: loops, digit sum, Floyd cycle idea
#include <stdio.h>
#include <stdbool.h>

int next(int n) {
    int s = 0;
    while (n) { int d = n % 10; s += d * d; n /= 10; }
    return s;
}

bool isHappy(int n) {
    int slow = n, fast = next(n);
    while (fast != 1 && slow != fast) { slow = next(slow); fast = next(next(fast)); }
    return fast == 1;
}

int main() {
    printf("19 -> %d\n", isHappy(19));   // 1
    printf("2  -> %d\n", isHappy(2));    // 0
    return 0;
}
