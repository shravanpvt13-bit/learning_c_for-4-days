// LeetCode 66 - Plus One (Easy) | Topic: loop from the back, carry
#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* d, int n, int* returnSize) {
    for (int i = n - 1; i >= 0; i--) {
        if (d[i] < 9) { d[i]++; *returnSize = n; return d; }
        d[i] = 0;
    }
    int* res = calloc(n + 1, sizeof(int));   // all 9s -> 1000...
    res[0] = 1;
    *returnSize = n + 1;
    return res;
}

int main() {
    int a[] = {9, 9, 9}, sz;
    int* r = plusOne(a, 3, &sz);
    for (int i = 0; i < sz; i++) printf("%d", r[i]);   // 1000
    printf("\n");
    return 0;
}
