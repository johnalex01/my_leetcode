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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre=NULL,*curr=head;
        while(curr){
            ListNode *Tnext=curr->next;
            curr->next=pre;
            pre=curr;
            curr=Tnext;
            
        }
        return pre;
        
    }
};