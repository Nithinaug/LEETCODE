class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";
        
        String a = strs[0];
        int b = a.length();

        for (int i = 1; i < strs.length; i++) {
            String s = strs[i];
            while (b> s.length() || !a.equals(s.substring(0, b))) {
                b--;
                if (b == 0) {
                    return "";
                }
                a = a.substring(0, b);
            }
        }

        return a;        
    }
}