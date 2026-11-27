class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};

        queue<TreeNode*> q;
        q.push(root);

        vector<int> ans;

        while(!q.empty()) {

            int n = q.size();

            // First node is the rightmost node of this level
            ans.push_back(q.front()->val);

            while(n--) {
                TreeNode* temp = q.front();
                q.pop();

                if(temp->right)
                    q.push(temp->right);

                if(temp->left)
                    q.push(temp->left);
            }
        }

        return ans;
    }
};