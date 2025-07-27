class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;

        int a = 1;

        for (int b = 1; b < nums.length; b++) {
            if (nums[b] != nums[a - 1]) {
                nums[a] = nums[b];
                a++;
            }
        }

        return a;        
    }
}