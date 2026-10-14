class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> s;
        for (char x : magazine) {
            s[x]++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            if (s[ransomNote[i]] == 0) {
                return false;
            }
            s[ransomNote[i]]--;
        }
        return true;
    }
};