class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>cars(speed.size());
        for(int i=0;i<speed.size();i++){
            double temp=(double)(target-position[i])/speed[i];
            cars[i]={position[i],temp};
        }
        stack<double>st;
        sort(cars.rbegin(),cars.rend());
        for(int i=0;i<cars.size();i++){
            double time=cars[i].second;
            if(st.empty()||time>st.top())
            st.push(time);
        }
        return st.size();
    }
};
