class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int x : arr) {
            count[x]++;
        }
        unordered_set<int> nums;
        unordered_set<int> counts;
        for (int x : arr) {
            if (nums.find(x) != nums.end()) {
                continue;
            }
            nums.insert(x);
            if (counts.find(count[x]) != counts.end()) {
                return false;
            }
            counts.insert(count[x]);
        }
        return true;
    }
};