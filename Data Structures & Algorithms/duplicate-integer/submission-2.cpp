class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(auto &n : nums){
            if(um[n]>0){
                return true;
            }else{
                um[n]++;
            }
        }
        return false;
    }
};