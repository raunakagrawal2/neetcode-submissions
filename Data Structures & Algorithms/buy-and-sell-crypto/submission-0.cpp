class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> min_left;
        int m = INT_MAX;
        for(auto& x:prices){
            min_left.push_back(m);
            if(x<m){
                m = x;
            }
        }
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            
            if(prices[i]-min_left[i]>profit){
                profit = prices[i]-min_left[i];
            }
        }
        return profit;
    }
};
