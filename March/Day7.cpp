class Solution {
public:
    int countNodes(TreeNode* root) {
        int count = 0;
        if (root == NULL) {
         return count;
        }
        int left = countNodes(root->left);
        int right = countNodes(root->right);
        return (left + right ) +1;
    }
};
