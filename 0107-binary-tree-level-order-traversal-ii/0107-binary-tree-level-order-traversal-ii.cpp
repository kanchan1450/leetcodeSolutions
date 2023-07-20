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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr)
            return ans ;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            vector<int> level;
            int sizeOfQueue = qu.size();
            for(int i =0; i<sizeOfQueue; i++)
            {
                TreeNode* temp = qu.front();
                qu.pop();
                if(temp->left!=nullptr) qu.push(temp->left);
                if(temp->right!=nullptr)qu.push(temp->right);
                level.push_back(temp->val);
            }
            ans.push_back(level);

        }
       reverse(ans.begin(), ans.end());
        return ans;
        
    }
};