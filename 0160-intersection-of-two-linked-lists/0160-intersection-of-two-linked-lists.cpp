/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = length(headA);
        int lenB = length(headB);
        ListNode* l1 = headA;
        ListNode* l2 = headB;

        while (lenA > lenB) {
            l1 = l1->next;
            lenA--;
        }
        while (lenB > lenA) {
            l2 = l2->next;
            lenB--;
        }

        while (l1 != NULL && l2 != NULL) {
            if (l1 == l2) {
                return l1;
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        return NULL;
    }

    int length(ListNode* head) {
        int len = 0;
        while (head != NULL) {
            len++;
            head = head->next;
        }

        return len;
    }
};