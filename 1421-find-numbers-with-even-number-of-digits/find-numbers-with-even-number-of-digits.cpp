class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=0;
        for(int i = 0; i < nums.size(); i++) {
            int a = 0;
            int num = nums[i];
            while(num > 0) {
                num = num / 10;
                a++;
            }
            if(a % 2 == 0) {
                n++;
            }
        }
        return n;
}
};
