class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero_count = 0;
        for(auto& x:nums){
            if(x==0){
                zero_count++;
            }else{
                product*=x;
            }
        }
        if(zero_count>1){
            vector<int> ans(nums.size(),0);
            return ans;
        }
        vector<int> ans;

        if(zero_count==1){
            for(auto& x:nums){
            if(x==0){
                ans.push_back(product);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
        }

        for(auto& x:nums){
            
                ans.push_back(product/x);
            
        }
        
        return ans;
    }
};
