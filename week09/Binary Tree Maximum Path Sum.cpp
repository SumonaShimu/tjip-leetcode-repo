/*
 *TC=O(N)
 *MC=O(1)
 */
class Solution {
public:
    int max_path_sum;
    int find_chain_sum(TreeNode* root){
        if(root==NULL) return 0;
        int left=find_chain_sum(root->left);
        int right=find_chain_sum(root->right);
        max_path_sum=max(max_path_sum, left+right+root->val);
        int maxChainSum=max(0,max(left,right)+root->val);
        return maxChainSum;
    }
    int maxPathSum(TreeNode* root) {
        max_path_sum=INT_MIN/2;
        find_chain_sum(root);
        return (max_path_sum);
    }
};