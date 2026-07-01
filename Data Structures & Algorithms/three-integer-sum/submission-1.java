class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
         Arrays.sort(nums);
         int i =0;
         List<List<Integer>> ans = new ArrayList<>();
         while(i<nums.length-2){
            int l = i+1;
            int r = nums.length - 1;
            while(l<r){
                List<Integer> li = new ArrayList<>();
                if(nums[i]+nums[l]+nums[r]==0){
                    li.add(nums[i]);
                    li.add(nums[l]);
                    li.add(nums[r]);
                    l++;
                    r--;
                    if(!ans.contains(li)){
                        ans.add(li);
                    }
                }else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }else{
                    r--;
                }
            }

            i++;
         }
         return ans;
    }
}
