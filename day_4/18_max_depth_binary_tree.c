// LeetCode 104 - Maximum Depth of Binary Tree (Easy) | Topic: struct + recursion
#include <stdio.h>
#include <stdlib.h>

struct TreeNode { int val; struct TreeNode *left, *right; };

struct TreeNode* newNode(int v) {
    struct TreeNode* n = malloc(sizeof(struct TreeNode));
    n->val = v; n->left = n->right = NULL;
    return n;
}

int maxDepth(struct TreeNode* root) {
    if (!root) return 0;
    int l = maxDepth(root->left), r = maxDepth(root->right);
    return 1 + (l > r ? l : r);
}

int main() {
    struct TreeNode* root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);
    printf("Depth: %d\n", maxDepth(root));   // 3
    return 0;
}
