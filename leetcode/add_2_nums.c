/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

struct ListNode* solve(struct ListNode* l1, struct ListNode* l2, int carry) {
    int sum = carry;
    if (l1 == NULL && l2 == NULL && carry == 0)
        return NULL;

    if (l1 != NULL)
        sum += l1->val;
    if (l2 != NULL)
        sum += l2->val;

    struct ListNode* Node = malloc(sizeof(struct ListNode));
    Node->val = sum % 10;

    struct ListNode *next1 = NULL, *next2 = NULL;
    if (l1 != NULL)
        next1 = l1->next;

    if (l2 != NULL)
        next2 = l2->next;

    Node->next = solve(next1, next2, sum / 10);
    return (Node);
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    return (solve(l1, l2, 0));
}
