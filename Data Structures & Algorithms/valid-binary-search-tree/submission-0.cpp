class Solution {
public:
    bool check(TreeNode* root, long long minVal, long long maxVal) {
        if(root == NULL)
            return true;

        if(root->val <= minVal || root->val >= maxVal)
            return false;

        bool left = check(root->left, minVal, root->val);
        bool right = check(root->right, root->val, maxVal);

        return left && right;
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};