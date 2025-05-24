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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        vector<int>values;
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }
       
        for(int i=0;i<values.size();i++)
        {
            bool flag=true;
            for(int j=i+1;j<values.size();j++)
            {
                if(values[j]>values[i]){
                    ans.push_back(values[j]);
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};