class Solution {
    public boolean isAnagram(String s, String t) {

        if(s.length() != t.length()){
            return false;
        }

        Map<Integer, Integer> map = new HashMap<>();

        for(int i = 0; i < s.length(); ++i){
            char sc = s.charAt(i);
            char tc = t.charAt(i);

            int sindex = sc - 'A';
            int tindex = tc - 'A';

            map.put(sindex, map.getOrDefault(sindex, 0) + 1);
            map.put(tindex, map.getOrDefault(tindex, 0) - 1);


        }

        for(Map.Entry<Integer,Integer> entry : map.entrySet()){
            if(entry.getValue() != 0){
                return false;
            }
        }

        return true;


    }
}
