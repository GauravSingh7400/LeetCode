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
void zig(TreeNode* root , vector<vector<int>>& ans , int level){
    if(root == NULL) return ;
      if (ans.size() == level) {
            ans.push_back(vector<int>());
        }
        ans[level].push_back(root->val);
    zig(root -> left,ans,  level+1);
    zig(root -> right,ans, level+1);



}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zig(root , ans , 0);
         for (int i = 1; i < ans.size(); i += 2) {
            reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
        
    }
};