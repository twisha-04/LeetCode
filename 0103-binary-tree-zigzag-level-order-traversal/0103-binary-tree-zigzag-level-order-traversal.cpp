/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
         if (!root) return result;
         queue<TreeNode*> q;
         q.push(root);
         bool leftToRight = true;
         while(!q.empty())
         {
            int level=q.size();
            vector<int> l;
            for(int i=0;i<level;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                l.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if (!leftToRight) {
                reverse(l.begin(), l.end());
            }
            result.push_back(l);
            leftToRight = !leftToRight;
         }
         return result;   
    }
};