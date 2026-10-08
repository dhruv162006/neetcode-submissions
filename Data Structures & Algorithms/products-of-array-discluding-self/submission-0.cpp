class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int>ans(arr.size(),1);
        int product=1;
        for(int i=0;i<arr.size();i++){
            ans[i]*=product;
            product*=arr[i];
        }
       product=1;
        for(int i=arr.size()-1;i>=0;i--){
            ans[i]*=product;
            product*=arr[i];
        }
        return ans;
    }
};
