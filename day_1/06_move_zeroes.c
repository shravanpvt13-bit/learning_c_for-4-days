// LeetCode 283 - Move Zeroes (Easy) | Topic: loop + write index
#include <stdio.h>

void moveZeroes(int* nums, int n) {
    int w = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] != 0) nums[w++] = nums[i];
    while (w < n) nums[w++] = 0;
}

int main() {
    int a[] = {0, 1, 0, 3, 12};
    moveZeroes(a, 5);
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);   // 1 3 12 0 0
    printf("\n");
    return 0;
}
