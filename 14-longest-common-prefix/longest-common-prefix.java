class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";
        
        String a = strs[0];
        int alen = a.length();

        for (int i = 1; i < strs.length; i++) {
            String s = strs[i];
            while (alen > s.length() || !a.equals(s.substring(0, alen))) {
                alen--;
                if (alen == 0) {
                    return "";
                }
                a = a.substring(0, alen);
            }
        }

        return a;        
    }
}