class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int target = 0;
        int i=0;
        while(i<nums.size()-2){
            if(i > 0 && nums[i] == nums[i-1]){ i++; continue; }
            int j=i+1,k=nums.size()-1;
            
            while(j<k){
                vector<int> temp;
                int n = nums[i]+nums[j]+nums[k];
                if(n==target){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);

                    while(j < k && nums[j] == nums[j+1]){
                        j++; 
                    }  // skip dup j
                    while(j < k && nums[k] == nums[k-1]){ k--;}
                    j++;
                    k--; 
                }
                if(n<target){
                    j++;
                }else if(n>target){
                    k--;
                }
            }
            i++;
        }
        return ans;
    }
};
