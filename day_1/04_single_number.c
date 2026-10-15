// LeetCode 136 - Single Number (Easy) | Topic: loop + XOR trick
#include <stdio.h>

int singleNumber(int* nums, int n) {
    int x = 0;
    for (int i = 0; i < n; i++) x ^= nums[i];   // a^a = 0, a^0 = a
    return x;
}

int main() {
    int a[] = {4, 1, 2, 1, 2};
    printf("Single: %d\n", singleNumber(a, 5));   // 4
    return 0;
}
