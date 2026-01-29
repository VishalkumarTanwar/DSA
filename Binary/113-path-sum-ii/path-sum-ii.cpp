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
vector<vector<int>>result;
    vector<vector<int>> solve(TreeNode* root,int sum, int targetSum,vector<int>temp){
        if(root==NULL)return {};
        sum+=root->val;
        temp.push_back(root->val);
    if(root->left==NULL && root->right==NULL){
        if(sum==targetSum){
            result.push_back(temp);
        }
        
    }
    solve(root->left,sum,targetSum,temp);
    solve(root->right,sum,targetSum,temp);
     return result;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int>temp;
        int sum=0;
        result=solve(root, sum ,targetSum,temp);
        return result;
    }
};