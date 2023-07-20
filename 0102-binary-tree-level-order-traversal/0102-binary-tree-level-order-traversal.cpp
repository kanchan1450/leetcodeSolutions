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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qt;
        vector<vector<int>>ans;
        qt.push(root);
        if(root==NULL)
	    return ans;

        while(!qt.empty())
        {
           vector<int>level;
           int qt_size = qt.size();
           for(int i = 0; i<qt_size; i++)
           {
               TreeNode* node = qt.front();
               qt.pop();
               if(node->left != NULL) qt.push(node->left);
               if(node->right!= nullptr) qt.push(node->right);
               level.push_back(node->val);
           }
           ans.push_back(level);
           
        }
        return ans;
    }
};