
class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int lefth = height(root->left);
        int righth = height(root->right);

        int currh = max(lefth, righth) + 1;

        return currh;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        // Diameter passing through current root
        int currdia = height(root->left) + height(root->right);

        // Diameter in left and right subtrees
        int leftdia = diameterOfBinaryTree(root->left);
        int rightdia = diameterOfBinaryTree(root->right);

        return max(currdia, max(leftdia, rightdia));
    }
};
