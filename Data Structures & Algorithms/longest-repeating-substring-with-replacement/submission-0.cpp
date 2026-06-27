class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        int mx = 0,maxLen=0;
        unordered_map<char,int> um;
        for(r=0;r<s.size();r++){
            um[s[r]]++;
            mx = max(mx,um[s[r]]);
            if(r-l+1-mx>k){
                um[s[l]]--;
                l++;
            }
            maxLen = max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
