class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(const auto& x: nums){
            um[x]++;
        }
        vector<pair<int,int>> temp;
        for(auto& [key,value]:um){
            temp.push_back({key,value});
        }
        sort(temp.begin(),temp.end(), [](
            auto& a, auto&b){
                return b.second<a.second;
            });
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
