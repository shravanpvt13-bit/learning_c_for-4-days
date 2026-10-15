// LeetCode 21 - Merge Two Sorted Lists (Easy) | Topic: struct, pointers, dummy node
#include <stdio.h>
#include <stdlib.h>

struct ListNode { int val; struct ListNode* next; };

struct ListNode* newNode(int v) {
    struct ListNode* n = malloc(sizeof(struct ListNode));
    n->val = v; n->next = NULL;
    return n;
}

struct ListNode* mergeTwoLists(struct ListNode* a, struct ListNode* b) {
    struct ListNode dummy = {0, NULL}, *tail = &dummy;
    while (a && b) {
        if (a->val <= b->val) { tail->next = a; a = a->next; }
        else                  { tail->next = b; b = b->next; }
        tail = tail->next;
    }
    tail->next = a ? a : b;
    return dummy.next;
}

void printList(struct ListNode* h) {
    for (; h; h = h->next) printf("%d ", h->val);
    printf("\n");
}

int main() {
    struct ListNode* a = newNode(1); a->next = newNode(2); a->next->next = newNode(4);
    struct ListNode* b = newNode(1); b->next = newNode(3); b->next->next = newNode(4);
    printList(mergeTwoLists(a, b));   // 1 1 2 3 4 4
    return 0;
}
