class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> maxl(n, 0);
        vector<int> maxr(n, 0);

        maxl[0] = height[0];
        maxr[n - 1] = height[n - 1];

        // Calculate maximum height to the left
        for (int i = 1; i < n; i++) {
            maxl[i] = max(height[i], maxl[i - 1]);
        }

        // Calculate maximum height to the right
        for (int i = n - 2; i >= 0; i--) {
            maxr[i] = max(height[i], maxr[i + 1]);
        }

        int sum = 0;

        // Calculate trapped water at each index
        for (int i = 0; i < n; i++) {
            int water = min(maxl[i], maxr[i]) - height[i];
            sum += water;
        }

        return sum;
    }
};