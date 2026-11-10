class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size()+1, 0);
        int tsum = 0;
        for(int i : nums) {
            tsum += i;
        }
        for(int i = 0; i < nums.size(); i++) {
            prefix[i+1] = prefix[i] + nums[i];
        }
        for(int i = 0; i < nums.size(); i++) {
            int lsum = prefix[i];
            int rsum = tsum - prefix[i+1];
            if(lsum == rsum) {
                return i;
         }
    }
    return -1;
}
};
