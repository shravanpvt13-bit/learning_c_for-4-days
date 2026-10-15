// LeetCode 206 - Reverse Linked List (Easy) | Topic: struct + pointers
#include <stdio.h>
#include <stdlib.h>

struct ListNode { int val; struct ListNode* next; };

struct ListNode* newNode(int v) {
    struct ListNode* n = malloc(sizeof(struct ListNode));
    n->val = v; n->next = NULL;
    return n;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL, *cur = head;
    while (cur) {
        struct ListNode* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}

void printList(struct ListNode* h) {
    for (; h; h = h->next) printf("%d ", h->val);
    printf("\n");
}

int main() {
    struct ListNode* h = newNode(1);
    h->next = newNode(2); h->next->next = newNode(3);
    printList(reverseList(h));   // 3 2 1
    return 0;
}
