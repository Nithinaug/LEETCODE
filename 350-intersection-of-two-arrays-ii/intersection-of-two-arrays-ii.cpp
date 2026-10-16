class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        multiset<int> ms(nums1.begin(), nums1.end());
        for (int i = 0; i < nums2.size(); i++) {
            auto it = ms.find(nums2[i]);
            if (it != ms.end()) {
                ans.push_back(nums2[i]);
                ms.erase(it);
            }
        }
        return ans;
    }
};