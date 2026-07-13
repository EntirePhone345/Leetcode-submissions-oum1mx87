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
        vector<vector<int>> levels;
        if(!root) return levels;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> curr;
            for(int i = 0 ; i < size ; i++){
                TreeNode* currnode = q.front();
                q.pop();
                
                if(currnode->left) q.push(currnode->left);
                if(currnode->right) q.push(currnode->right);
                curr.push_back(currnode->val);
            }
            levels.push_back(curr);
        }
        return levels;
    }
};