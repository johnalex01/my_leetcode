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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *n1=l1,*n2=l2;
        ListNode *nlist= new ListNode(0), *n3=nlist;
        while(n1!=NULL||n2!=NULL){
            if(n1==NULL){
                n3->next=n2;
                n2=NULL;
            }
            else if(n2==NULL){
                n3->next=n1;
                n1=NULL;
            }else{
            if(n1->val<n2->val){
                n3->next=n1;
                n1=n1->next;
            }
            else{
                n3->next=n2;
                n2=n2->next;
            }
            }
            n3=n3->next;
    
                
        }
        return nlist->next;
    }
};