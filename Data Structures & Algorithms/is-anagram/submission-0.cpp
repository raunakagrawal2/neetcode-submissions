class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> um;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            
                um[s[i]]++;
                if(um[s[i]]==0){
                    um.erase(s[i]);
                }
            
                um[t[i]]--;
                if(um[t[i]]==0){
                    um.erase(t[i]);
                }
            
        }
        if(um.empty()){
            return true;
        }else{
            return false;
        }
    }
};
