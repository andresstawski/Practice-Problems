class Solution {
public:
    
    bool sides(TreeNode* right, TreeNode* left) {
        if(!right && !left) return true;
        if (!right || !left || left->val != right->val) return false;
        
        return sides(left->left, right->right) && sides(left->right, right->left);

    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;

        return sides(root->right, root->left);
        
    }
};
