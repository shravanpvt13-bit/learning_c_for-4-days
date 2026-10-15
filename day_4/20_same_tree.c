// LeetCode 100 - Same Tree (Easy) | Topic: struct + recursion
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode { int val; struct TreeNode *left, *right; };

struct TreeNode* newNode(int v) {
    struct TreeNode* n = malloc(sizeof(struct TreeNode));
    n->val = v; n->left = n->right = NULL;
    return n;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    struct TreeNode *a = newNode(1), *b = newNode(1);
    a->left = newNode(2); a->right = newNode(3);
    b->left = newNode(2); b->right = newNode(3);
    printf("Same: %d\n", isSameTree(a, b));   // 1
    b->right->val = 4;
    printf("Same: %d\n", isSameTree(a, b));   // 0
    return 0;
}
