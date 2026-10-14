class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> a;
        for (char x : s) {
            a[x]++;
        }
        for (int i = 0; i < t.size(); i++) {
            if (a.find(t[i]) == a.end() || a[t[i]] == 0) {
               return false;
            }
            a[t[i]]--;
        }
        return true;
    }
};