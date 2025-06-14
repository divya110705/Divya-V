class Solution {
    public int sum(int [] nums, int target, int idx, int current) {
        if(idx==nums.length) return (current == target)?1:0;
        int add = sum(nums, target, idx+1, current + nums[idx]);
        int sub = sum(nums, target, idx+1, current - nums[idx]);

        return add+sub;
    }
    public int findTargetSumWays(int[] nums, int target) {
        return sum(nums, target,0,0);
    }
}