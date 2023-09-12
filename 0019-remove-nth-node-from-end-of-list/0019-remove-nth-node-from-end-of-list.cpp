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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* prev=new ListNode();
        int pos,count=0;
        while(temp!=NULL){    
            temp=temp->next;
            count++;
        }
        if(n==count){
            return head->next;
        }
        temp=head;
        pos=count-n;
        while(pos--){
            prev=temp;
            temp=temp->next;
        }
        prev->next = temp->next;
        temp->next=NULL;
        
        return head;
    }
};