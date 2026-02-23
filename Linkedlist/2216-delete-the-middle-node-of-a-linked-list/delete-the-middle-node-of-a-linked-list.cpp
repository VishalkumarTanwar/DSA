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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            // if 0 or 1 node, result is empty list
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr; // to track node before middle

        while (fast !=NULL && fast->next !=NULL) {
            prev = slow ;
            slow = slow->next;
            fast = fast->next->next;
        }

        // slow is now at middle, prev is before it
        prev->next = slow->next
        ;
        delete slow;

        return head;
    }
};
