/**
 * Title: Maximum Subarray
 * 
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
 * Output: 6
 * Explanation: [4,-1,2,1] has the largest sum = 6.
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int last, highest;
        last = highest = nums[0];
        for (int i = 1, size = nums.size(); i < size; i++) {
            int add = last + nums[i];
            last = max(nums[i], add);
            highest = max(highest, last);
        }
        return highest;
    }
};