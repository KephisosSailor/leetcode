/*
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order, and each of their nodes contains a single digit.
 * Add the two numbers and return the sum * as a linked list.
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 *
 * Example 1:
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 *
 * Example 2:
 * Input: l1 = [0], l2 = [0]
 * Output: [0]
 *
 * Example 3:
 * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 * Output: [8,9,9,9,0,0,0,1]
 *
 * Constraints:
 * The number of nodes in each linked list is in the range [1, 100].
 * 0 <= Node.val <= 9
 * It is guaranteed that the list represents a number that does not have leading zeros.
 */
#include <stddef.h>
#include <stdio.h>

#define BASE (10)

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    unsigned int carry_num = 0;
    struct ListNode* ret = l1;

    for (; (l1->next != NULL) && (l2->next != NULL); l1 = l1->next, l2 = l2->next) {
        l1->val += l2->val + carry_num;

        if (l1->val >= BASE) {
            carry_num = 1;
        } else {
            carry_num = 0;
        }

        l1->val %= BASE;
    }

    /* l1 + l2 */
    l1->val += l2->val + carry_num;
    if (l1->val < BASE) {
        jump to for
    } else 
    carry_num = 1;
    l1->val %= BASE;

    if ((l1->next == NULL) && (l2->next == NULL)) {
                
    } else if ((l1->next == NULL) && (l2->next != NULL)) {
        l1->next = l2->next;
    }
    
    /* l1->next */
    for (l1 = l1->next; l1->next != NULL; l1 = l1->next) {
        l1 = l1->next;
        l1->val += carry_num;
        if (l1->val < BASE) {
            return ret;
        }

        carry_num = 1;
        l1->val %= BASE;

        if (l1->next !=)
    }
}