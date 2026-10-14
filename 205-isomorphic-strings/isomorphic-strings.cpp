class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> a, b;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            char y = t[i];
            if (a.find(x) != a.end()) {
                if (a[x] != y)
                    return false;
            }
            if (b.find(y) != b.end()) {
                if (b[y] != x)
                    return false;
            }
            a[x] = y;
            b[y] = x;
        }
        return true;
    }
};