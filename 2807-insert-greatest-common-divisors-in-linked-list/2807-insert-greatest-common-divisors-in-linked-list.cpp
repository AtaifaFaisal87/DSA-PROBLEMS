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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* current = head;

        while (current != NULL && current->next != NULL) {

            ListNode* next = current->next;

            ListNode* newNode = new ListNode(gcd(current->val, next->val));

            newNode->next = current->next;
            current->next = newNode;

            current = next;
        }

        return head;
    }
};