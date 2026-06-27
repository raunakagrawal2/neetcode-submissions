class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> um1;
        for(auto& x:s1){
            um1[x]++;
        }
        unordered_map<char,int> um2;
        for(int i=0;i<s1.length();i++){
            um2[s2[i]]++;
        }
        int l=0,r=s1.length()-1;
        while(r<s2.length()){
            if(um1==um2){
                return true;
            }
            r++;
            if(r<s2.length()){
                um2[s2[r]]++;
            }
            um2[s2[l]]--;
            if(um2[s2[l]]==0){
                um2.erase(s2[l]);
            }
            l++;
        }
        return false;
    }
};
