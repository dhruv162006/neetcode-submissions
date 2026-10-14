class Solution {
public:
    int findMin(vector<int> &nums) {
        int start=0,end=nums.size()-1;
        while(start<=end){
             if (nums[start] <= nums[end])
                return nums[start];
            int mid=start+(end-start)/2;
            if(mid>0 && nums[mid-1]>nums[mid])
            return nums[mid];
            else if(nums[start]<nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};
