class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        char[] c1 = s.toCharArray();
        char[] c2 = t.toCharArray();

        HashMap<Character,Integer> map = new HashMap<>();
        for(int i =0;i<s.length();i++){
            map.put(c1[i],map.getOrDefault(c1[i],0)+1);
            map.put(c2[i],map.getOrDefault(c2[i],0)-1);
        }

        for(int n : map.values()){
            if(n!=0){
                return false;
            }
        }
        return true;
    }
}
