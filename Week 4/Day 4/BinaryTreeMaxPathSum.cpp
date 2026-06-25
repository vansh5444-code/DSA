class Solution {
    int maxSum;

    int dfs(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int leftMax = max(dfs(root->left), 0);
        int rightMax = max(dfs(root->right), 0);

        // Compute max path sum WITH split
        maxSum = max(maxSum, root->val + leftMax + rightMax);

        // WITHOUT split
        return root->val + max(leftMax, rightMax);
    }

public:
    int maxPathSum(TreeNode* root) {
        maxSum = root->val;
        dfs(root);
        return maxSum;
    }
};
