class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1,end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            int totalhours=0;
            int mid=start+(end-start)/2;
            for(auto pile:piles){
                totalhours+=(pile+mid-1)/mid;
            }
            if(totalhours>h){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return start;
    }
};
