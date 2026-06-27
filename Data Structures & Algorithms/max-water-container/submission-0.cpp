class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0,r=h.size()-1;

        int max_w = INT_MIN;
        while(l<r){
            int temp = min(h[l],h[r])*(r-l);
            max_w = max(max_w,temp);
            if(h[l]<h[r]){
                l++;
            }else{
                r--;
            }
        }
        return max_w;
    }
};
