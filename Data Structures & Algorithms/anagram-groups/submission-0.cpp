class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<unordered_map<char,int>> m;
        for(const auto& s:strs){
            unordered_map<char,int> um;
            for(const auto& c:s){
                um[c]++;
            }
            auto it = find(m.begin(),m.end(),um);
            if(it!=m.end()){
                int index = it - m.begin();
                ans[index].push_back(s);
            }else{
                m.push_back(um);
                vector<string> temp;
                temp.push_back(s);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
