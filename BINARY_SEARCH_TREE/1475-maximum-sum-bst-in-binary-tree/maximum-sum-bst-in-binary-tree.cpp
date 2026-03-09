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
    
    int maxSum = 0;
    
    struct NodeInfo{
        bool isBST;
        int minVal;
        int maxVal;
        int sum;
    };
    
    NodeInfo dfs(TreeNode* root){
        
        if(!root)
            return {true, INT_MAX, INT_MIN, 0};
        
        NodeInfo left = dfs(root->left);
        NodeInfo right = dfs(root->right);
        
        if(left.isBST && right.isBST && 
           root->val > left.maxVal && 
           root->val < right.minVal){
            
            int sum = root->val + left.sum + right.sum;
            
            maxSum = max(maxSum, sum);
            
            return {
                true,
                min(root->val, left.minVal),
                max(root->val, right.maxVal),
                sum
            };
        }
        
        return {false, INT_MIN, INT_MAX, 0};
    }
    
    int maxSumBST(TreeNode* root) {
        dfs(root);
        return maxSum;
    }
};