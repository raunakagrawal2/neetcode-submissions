class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> um1;
        unordered_map<int,int> um2;

        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            um1[s[i]]++;
            um2[t[i]]++;
        }

        if(um1==um2){
            return true;
        }else{
            return false;
        }
    }
};
