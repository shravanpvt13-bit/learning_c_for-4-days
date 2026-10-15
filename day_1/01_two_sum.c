// LeetCode 1 - Two Sum (Easy) | Topic: nested loops
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int n, int target, int* returnSize) {
    int* res = malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (nums[i] + nums[j] == target) { res[0] = i; res[1] = j; return res; }
    *returnSize = 0;
    return res;
}

int main() {
    int a[] = {2, 7, 11, 15}, sz;
    int* r = twoSum(a, 4, 9, &sz);
    printf("Indices: [%d, %d]\n", r[0], r[1]);   // [0, 1]
    free(r);
    return 0;
}
