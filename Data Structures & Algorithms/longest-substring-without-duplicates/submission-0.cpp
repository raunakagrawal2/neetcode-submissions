class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2){
            return s.length();
        }
        int i=0, ltn=0;
        unordered_map<char,int> um;
        for(int j=0;j<s.length();j++){
            if(!um.count(s[j])){
                um[s[j]]=j;
            }else{
                i = max(i,um[s[j]]+1);
                um[s[j]]=j;
            }
            ltn = max(ltn,j-i+1);
        }
        return ltn;
    }
};
