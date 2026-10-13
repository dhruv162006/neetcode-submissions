class Solution {
public:
int binarysearch(int start,int end,vector<int>& nums, int target){
    long mid=(start+end)/2;
    if(nums[mid]==target)
    return mid;
    if(start==mid || end==mid)
    return -1;
    else if(nums[mid]>target){
        return binarysearch(start,mid-1,nums,target);
    }
    else{
        return binarysearch(mid+1,start,nums,target);
    }

}
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        return binarysearch(start,end,nums,target);
        

    }
};
