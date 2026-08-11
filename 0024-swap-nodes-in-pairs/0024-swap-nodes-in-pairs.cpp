/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* dummy = new ListNode;
        dummy->next = head;

        ListNode* p = dummy;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL) {
            ListNode* temp = fast->next;
            fast->next = slow;
            slow->next = temp;

            p->next = fast;
            p = slow;

            if (slow->next == NULL)
                break;

            slow = slow->next;
            fast = slow->next;
        }

        return dummy->next;
    }
};