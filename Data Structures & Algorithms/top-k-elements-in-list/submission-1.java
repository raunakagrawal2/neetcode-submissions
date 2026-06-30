class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int[] ans = new int[k];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int n:nums){
            map.put(n,map.getOrDefault(n,0)+1);
        }
        List<Map.Entry<Integer,Integer>> list= new ArrayList<>(map.entrySet());
        Collections.sort(list, (a,b)-> b.getValue()-a.getValue());
        for(int i=0;i<k;i++){
            ans[i] = list.get(i).getKey();
        }
        return ans;
    }

}
