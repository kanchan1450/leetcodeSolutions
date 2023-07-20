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

//  
// what is the probability of getting atleast two head when tossing 3 coins
// what is the probabilty og getting exaclty three heads when four coin tossed
// 
// a:b = 1:2 and b:c = 3:4 fnd a:b:c?

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        if((p == nullptr || q == nullptr) || (p->val!= q->val)) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
    }
};