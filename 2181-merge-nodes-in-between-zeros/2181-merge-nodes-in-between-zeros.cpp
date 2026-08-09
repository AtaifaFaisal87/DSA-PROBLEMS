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
    ListNode* mergeNodes(ListNode* head) {
    ListNode* write = head;
    ListNode* current = head->next;

    int sum = 0;

    while (current != NULL)
    {
        if (current->val != 0)
        {
            sum += current->val;
        }
        else
        {
            write = write->next;
            write->val = sum;
            sum = 0;
        }

        current = current->next;
    }

    write->next = NULL;

    return head->next;

        
    }
};