class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> out(n);
        int i = 0, j = n - 1;
        for (int k = n - 1; k >= 0; k--) {
            if (abs(nums[i]) > abs(nums[j])) {
                out[k] = nums[i] * nums[i];
                i++;
            } else {
                out[k] = nums[j] * nums[j];
                j--;
            }
        }
        return out;
    }
};