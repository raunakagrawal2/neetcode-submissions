class Solution {
public:
    int trap(vector<int>& h) {
        vector<int> l;
        vector<int> r;
        int l_max = 0;
        for(int i = 0;i<h.size();i++){
            l.push_back(l_max);
            l_max = max(l_max,h[i]);
        }
        int r_max = 0;
        for(int i = h.size()-1;i>=0;i--){
            r.push_back(r_max);
            r_max = max(r_max,h[i]);
        }
        reverse(r.begin(),r.end());
        int rw = 0;
        for(int i =0;i<h.size();i++){
            if(min(r[i],l[i])-h[i]>0){
                rw+=(min(r[i],l[i])-h[i]);
            }
        }
        return rw;
    }
};
