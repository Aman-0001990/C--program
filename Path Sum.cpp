class Solution {
public:
    void helper(TreeNode* root, int targetSum, vector<int> v,
                vector<vector<int>>& ans) {
        if (!root)
            return;
        if (root->left == NULL && root->right == NULL) {
            if(root->val==targetSum){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return ;
        }
        v.push_back(root->val);
        helper(root->left, targetSum - (root->val), v, ans);
        helper(root->right, targetSum - (root->val), v, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        vector<vector<int>> ans;
        helper(root, targetSum, v,ans);
        return ans;
    }
};
