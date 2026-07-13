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
    int maxsum = INT_MIN;
    int help(TreeNode* root){
        if(!root) return 0;
        int left = max(0,help(root->left));
        int right = max(0,help(root->right));

        int path = root->val + left + right;
        maxsum = max(path,maxsum);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        help(root);
        return maxsum;
    }
};