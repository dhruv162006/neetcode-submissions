/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int find(TreeNode* root,int maxval){
    if(root==NULL)
    return 0;
    int good=0;
    if(maxval<=root->val)
    good=1;

    maxval=max(maxval,root->val);

    int left=find(root->left,maxval);
    int right=find(root->right,maxval);
    return good+left+right;
}
    int goodNodes(TreeNode* root) {
        return find(root,root->val);
    }
};
