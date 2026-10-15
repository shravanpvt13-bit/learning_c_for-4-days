// LeetCode 27 - Remove Element (Easy) | Topic: read/write pointers in array
#include <stdio.h>

int removeElement(int* nums, int n, int val) {
    int k = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] != val) *(nums + k++) = *(nums + i);
    return k;
}

int main() {
    int a[] = {3, 2, 2, 3};
    int k = removeElement(a, 4, 3);
    printf("k = %d: ", k);                       // k = 2: 2 2
    for (int i = 0; i < k; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
