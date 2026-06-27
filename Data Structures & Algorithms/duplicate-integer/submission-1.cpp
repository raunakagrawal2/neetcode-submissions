class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(auto x: nums){
            if(um.find(x)!=um.end()){
                return true;
            }else{
                um[x]++;
            }
        }
        return false;
    }
};