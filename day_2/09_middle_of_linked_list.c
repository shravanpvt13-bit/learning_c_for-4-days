// LeetCode 876 - Middle of the Linked List (Easy) | Topic: slow & fast pointers
#include <stdio.h>
#include <stdlib.h>

struct ListNode { int val; struct ListNode* next; };

struct ListNode* newNode(int v) {
    struct ListNode* n = malloc(sizeof(struct ListNode));
    n->val = v; n->next = NULL;
    return n;
}

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next) { slow = slow->next; fast = fast->next->next; }
    return slow;
}

int main() {
    struct ListNode* h = newNode(1);
    struct ListNode* t = h;
    for (int i = 2; i <= 5; i++) { t->next = newNode(i); t = t->next; }
    printf("Middle: %d\n", middleNode(h)->val);   // 3
    return 0;
}
