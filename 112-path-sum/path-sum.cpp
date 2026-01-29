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
  bool solve(TreeNode* root,int sum, int targetSum){
    if(root==nullptr)return NULL;
    sum+=root->val;

    if( root->left==nullptr && root->right==nullptr){
        if(sum==targetSum)return true;
        return false;
    }
    bool leftpath=solve(root->left,sum,targetSum);
    bool rightpath=solve(root->right,sum,targetSum);
    return leftpath || rightpath;
  }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool result=solve(root,sum,targetSum);
        return result;
    }
};