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
    int minDepth(TreeNode* root) {

        // By using DFS
        // if(root == nullptr)
        //     return 0;
        // int leftNode = minDepth(root->left);
        // int rightNode = minDepth(root->right);
        // if(root->left && root->right)
        // {
        //     return min(leftNode+1, rightNode+1);
        // }
        // else
        // return max(leftNode+1, rightNode+1);

        // By using BFS
        if(root == nullptr)
            return 0;
        queue<TreeNode*> qu;
        int depth = 0;
        qu.push(root);
        while(!qu.empty())
        {
            int sizeOfQueue = qu.size();
            depth++;
            for(int i =0; i<sizeOfQueue; i++)
            {
                TreeNode* node = qu.front();
                qu.pop();
                if(node->left == nullptr && node->right == nullptr)
                {
                    return depth;
                }
                if(node->left!= nullptr)
                    qu.push(node->left);
                if(node->right!= nullptr)
                    qu.push(node->right);
            }
        }
        return -1;

        
    }
};