class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int left=0,right=heights.size()-1;
        while(left<right){
            int area=min(heights[left],heights[right])*(abs(right-left));
            ans=max(area,ans);
            if(heights[left]<=heights[right])
            left++;
            else
            right--;
        }
        return ans;
    }
};
