class Solution {
public:
    void find(TreeNode* root, int k, int &count, int &ans) {
        if(root == NULL || count >= k)
            return;

        find(root->left, k, count, ans);

        if(count >= k)
            return;

        count++;

        if(count == k) {
            ans = root->val;
            return;
        }

        find(root->right, k, count, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans = -1;

        find(root, k, count, ans);

        return ans;
    }
};