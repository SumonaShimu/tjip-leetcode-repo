/*
 *TC=O(N)
 *MC=O(1)
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==0) return 0;
        auto left=maxDepth(root->left);
        auto right=maxDepth(root->right);
        return 1+max(left,right);
    }
};