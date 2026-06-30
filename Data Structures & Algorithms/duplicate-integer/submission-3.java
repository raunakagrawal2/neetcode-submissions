class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();

        if(nums.length==0){
            return false;
        }
        for(int i =0;i<nums.length;i++){
            if(map.getOrDefault(nums[i],0)==0){
                map.put(nums[i],map.getOrDefault(nums[i],0)+1);
            }else{
                return true;
            }

            
        }
        return false;
    }
}