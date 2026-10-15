// LeetCode 26 - Remove Duplicates from Sorted Array (Easy) | Topic: two pointers
#include <stdio.h>

int removeDuplicates(int* nums, int n) {
    if (n == 0) return 0;
    int k = 1;
    for (int i = 1; i < n; i++)
        if (nums[i] != nums[k - 1]) nums[k++] = nums[i];
    return k;
}

int main() {
    int a[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(a, 10);
    printf("k = %d: ", k);                       // k = 5: 0 1 2 3 4
    for (int i = 0; i < k; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
