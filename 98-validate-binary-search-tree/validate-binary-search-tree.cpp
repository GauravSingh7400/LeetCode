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
// class Solution {
// public:
// int maxt(TreeNode* root){
//     if(root == NULL) return INT_MIN;
//     return max(root -> val , max(maxt(root -> left) , maxt(root -> right)));
// }
// int mait(TreeNode* root){
//     if(root == NULL) return INT_MIN;
//     return min(root -> val , min(mait(root -> left) , mait(root -> right)));
// }
//     bool isValidBST(TreeNode* root) {
//         if(root -> val <= maxt(root -> left)) return false; else  if(root -> val <= mait(root -> right)) return false;
//         return isValidBST(root -> left) || isValidBST(root -> right);
//     }
// };
class Solution {
public:
    long long maxt(TreeNode* root) {
        if(root == NULL)
            return LLONG_MIN;

        return max((long long)root->val,
                   max(maxt(root->left), maxt(root->right)));
    }

    long long mait(TreeNode* root) {
        if(root == NULL)
            return LLONG_MAX;

        return min((long long)root->val,
                   min(mait(root->left), mait(root->right)));
    }

    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;

        if((long long)root->val <= maxt(root->left))
            return false;

        if(mait(root->right) <= (long long)root->val)
            return false;

        return isValidBST(root->left) &&
               isValidBST(root->right);
    }
}; 