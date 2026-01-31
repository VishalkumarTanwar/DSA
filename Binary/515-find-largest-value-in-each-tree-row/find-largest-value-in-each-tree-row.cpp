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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if (root == NULL) return{} ;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int maxnum=INT_MIN;
        int n=q.size();
        while(n--){
            TreeNode* curr=q.front();
            q.pop();
            maxnum=max(maxnum,curr->val);
            if(curr->left){ q.push(curr->left);}
            if (curr->right){ q.push(curr->right);}
        }
        ans.push_back(maxnum);
        }
        return ans;
    }
};