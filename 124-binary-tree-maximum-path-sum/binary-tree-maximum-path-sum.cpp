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
int fin(TreeNode* root , int &maxi){
    if(root == NULL){
        return 0;
    }
    int lef = max(0, fin(root->left, maxi));
     int righ = max(0, fin(root->right, maxi));
     maxi = max(maxi , lef + righ + root->val);
     return max(lef , righ) + root -> val;
}
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        fin(root, maxi);
        return maxi;
        
    }
};