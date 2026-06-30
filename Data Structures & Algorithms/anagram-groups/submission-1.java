class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> list= new ArrayList<>();
        HashMap<String,Integer> map = new HashMap<>();
        for(int i =0;i<strs.length;i++){
            char[] word = strs[i].toCharArray();
            Arrays.sort(word);
            String key = new String(word);
            
            if(map.containsKey(key)){
                list.get(map.get(key)).add(strs[i]);
            }else{
                List<String> s = new ArrayList<>();
                s.add(strs[i]);
                list.add(s);
                map.put(key,list.size()-1);
            } 
        }
        return list;
    }
}
