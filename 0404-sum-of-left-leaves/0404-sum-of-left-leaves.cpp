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

    int leftLeaves(TreeNode* root, bool leaf)
    {
         if(root == nullptr)
        {
            return 0;
        }
        if(root->left == nullptr && root->right == nullptr && leaf)
        return root->val;
        int left = leftLeaves(root->left,true);
        int right = leftLeaves(root->right, false);
         return left+right;

    }
    int sumOfLeftLeaves(TreeNode* root) {
        return leftLeaves(root,false);
       
    }
};