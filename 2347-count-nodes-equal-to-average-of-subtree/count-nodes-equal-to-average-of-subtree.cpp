class Solution {
public:

    int ans = 0;

    pair<int,int> solve(TreeNode* root) {

        if(!root){
            return {0, 0};
        }

        pair<int,int> l = solve(root->left);
        pair<int,int> r = solve(root->right);

        int sum = root->val + l.first + r.first;

        int size = 1 + l.second + r.second;

        int avg = sum / size;

        if(root->val == avg){
            ans++;
        }

        return {sum, size};
    }

    int averageOfSubtree(TreeNode* root) {

        solve(root);

        return ans;
    }
};