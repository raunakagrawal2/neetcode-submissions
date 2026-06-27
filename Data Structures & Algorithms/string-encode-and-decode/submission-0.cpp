class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto& x:strs){
            s = s + to_string(x.length()) + "#" + x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i=0;i<s.length();i++){
            int j = i;
            while(s[j]!='#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,len));
            i = j+len;
        }
        return ans;
    }
};
