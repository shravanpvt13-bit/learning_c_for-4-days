// LeetCode 226 - Invert Binary Tree (Easy) | Topic: struct + recursion
#include <stdio.h>
#include <stdlib.h>

struct TreeNode { int val; struct TreeNode *left, *right; };

struct TreeNode* newNode(int v) {
    struct TreeNode* n = malloc(sizeof(struct TreeNode));
    n->val = v; n->left = n->right = NULL;
    return n;
}

struct TreeNode* invertTree(struct TreeNode* root) {
    if (!root) return NULL;
    struct TreeNode* t = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(t);
    return root;
}

void inorder(struct TreeNode* r) {
    if (!r) return;
    inorder(r->left); printf("%d ", r->val); inorder(r->right);
}

int main() {
    struct TreeNode* root = newNode(4);
    root->left = newNode(2); root->right = newNode(7);
    root->left->left = newNode(1); root->left->right = newNode(3);
    root->right->left = newNode(6); root->right->right = newNode(9);
    inorder(invertTree(root));   // 9 7 6 4 3 2 1
    printf("\n");
    return 0;
}
