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
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        while(prev->next && prev->next->next){
            ListNode* swap1=prev->next; 
            ListNode* swap2=prev->next->next;
            //swap
            swap1->next=swap2->next;
            swap2->next=swap1;
            prev->next=swap2;
            prev=swap1;

        }
        return dummy->next;

    }
};