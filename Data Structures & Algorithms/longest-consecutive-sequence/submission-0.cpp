class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
int lcs = 0;

for(const auto& x : s){
    if(s.count(x-1)) continue;  // not a sequence start, skip
    
    int cs = 1;
    while(s.count(x + cs)){     // keep extending
        cs++;
    }
    lcs = max(lcs, cs);
}
return lcs;
    }
};
