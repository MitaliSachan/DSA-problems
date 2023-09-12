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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(int i=0;i<lists.size();i++){
            while(lists[i]){
                ans.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(ans.rbegin(),ans.rend());
        ListNode* temp=nullptr;
        for(int i=0;i<ans.size();i++){
            temp=new ListNode(ans[i],temp);
        }
        return temp;
    }
};