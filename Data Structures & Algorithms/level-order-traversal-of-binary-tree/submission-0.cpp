class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};

        queue<TreeNode*> q;
        q.push(root);

        vector<vector<int>> ans;

        while(!q.empty()) {

            int size = q.size();
            vector<int> tempans;

            for(int i = 0; i < size; i++) {

                TreeNode* temp = q.front();
                q.pop();

                tempans.push_back(temp->val);

                if(temp->left)
                    q.push(temp->left);

                if(temp->right)
                    q.push(temp->right);
            }

            ans.push_back(tempans);
        }

        return ans;
    }
};