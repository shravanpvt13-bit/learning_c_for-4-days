// LeetCode 141 - Linked List Cycle (Easy) | Topic: pointers, Floyd's cycle detection
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode { int val; struct ListNode* next; };

struct ListNode* newNode(int v) {
    struct ListNode* n = malloc(sizeof(struct ListNode));
    n->val = v; n->next = NULL;
    return n;
}

bool hasCycle(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    struct ListNode *a = newNode(3), *b = newNode(2), *c = newNode(0);
    a->next = b; b->next = c;
    printf("No cycle:   %d\n", hasCycle(a));   // 0
    c->next = b;                               // create cycle
    printf("With cycle: %d\n", hasCycle(a));   // 1
    return 0;
}
