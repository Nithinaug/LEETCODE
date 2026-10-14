class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        for (int i = 0; i < nums.size(); i++) {
           s[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int req = target - nums[i];
            if (s.find(req) != s.end() && s[req] != i) {
                return {i, s[req]};
            }
        }
        return {};
    }
};