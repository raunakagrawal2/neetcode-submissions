class Solution {
    public int characterReplacement(String s, int k) {
        int l = 0, r = 0, maxl=0;
        HashMap<Character,Integer> map = new HashMap<>();
        int max = 0;
        while(r<s.length()){
            int len = r-l+1;
            map.put(s.charAt(r),map.getOrDefault(s.charAt(r),0)+1);
            max = Math.max(max,map.get(s.charAt(r)));

            if(len-max>k){
                map.put(s.charAt(l),map.get(s.charAt(l))-1);
                l++;
            }
            maxl = Math.max(maxl,r-l+1);
            r++;
        }
        return maxl;
    }
}
