class Solution {
    public int findFinalValue(int[] nums, int original) {
     HashSet s = new HashSet<>();
     int n = nums.length;
     for(int i=0; i<n; i++)
    {
        s.add(nums[i]);
    } 
    for(int i=2*n-1; i>=0; i--)
    {
        if(s.contains(original))
        {
            original *= 2;
        }
        else
        break;
    }
    return original;
    }
}