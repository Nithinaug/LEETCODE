class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int x :nums){
            s[x]++;
        }
        int sum =0;
        for(int i =0;i<nums.size();i++){
             if(s[nums[i]]==1){
                sum +=nums[i];
             }
        }
             return sum;
    }
};