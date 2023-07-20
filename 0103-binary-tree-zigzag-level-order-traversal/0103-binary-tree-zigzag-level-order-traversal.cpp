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
        vector<vector<int>> ans;
        queue<TreeNode*>qu;
        if(root == nullptr)
            return ans;
        qu.push(root);
        bool flag = false;
        while(!qu.empty())
        {
            vector<int>level;
            int queueSize = qu.size();

            for(int i=0; i<queueSize; i++)
            {
                TreeNode* node = qu.front();
                qu.pop();
                level.push_back(node->val);
                if(node->left!=nullptr)
                qu.push(node->left);
                if(node->right!=nullptr)
                qu.push(node->right);
                
            }
            flag = !flag;
            if(flag == false)
            {
                reverse(level.begin(), level.end());
            }
            ans.push_back(level);

        }
        return ans;

    }
};