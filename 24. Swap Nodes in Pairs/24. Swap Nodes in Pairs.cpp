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
    ListNode* swapPairs(ListNode* head) {
        ListNode *nnode=head->next,*new_head=new ListNode(0);
        new_head->next=head;
        ListNode *pre=new_head;
        while(head!=NULL&&nnode!=NULL){
            ListNode*nnnode=nnode->next;
            pre->next=nnode;
            nnode->next=head;
            head->next=nnnode;
            
            pre=head;
            head=nnnode;
            nnode=head->next;
        }
        
        return new_head->next;
    }
};