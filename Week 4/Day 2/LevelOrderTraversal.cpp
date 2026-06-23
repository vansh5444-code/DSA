class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL)
            return {};

        vector<vector<int>> res;
        queue<TreeNode*> que;

        que.push(root);

        while (que.empty() == false) {
            int size = que.size();
            vector<int> vec;

            for (int i = 0; i < size; i++) {
                TreeNode* node = que.front();
                que.pop();

                vec.push_back(node->val);

                if (node->left != NULL)
                    que.push(node->left);

                if (node->right != NULL)
                    que.push(node->right);
            }

            res.push_back(vec);
        }

        return res;
    }
};
