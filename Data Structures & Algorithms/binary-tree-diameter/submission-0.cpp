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
int find(TreeNode* root,int &dia){
    if(root==NULL)
    return 0;

    int left=find(root->left,dia);
    int righ=find(root->right,dia);

    dia=max(dia,left+righ);

    return 1+ max(left,righ);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        find(root,dia);
        return dia;
    }
};
