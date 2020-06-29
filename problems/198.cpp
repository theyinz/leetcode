/**
 * Title: House Robber
 * 
 * Input: nums = [1,2,3,1]
 * Output: 4
 * Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
 *              Total amount you can rob = 1 + 3 = 4.
 * 
 * Input: nums = [2,7,9,3,1]
 * Output: 12
 * Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
 *              Total amount you can rob = 2 + 9 + 1 = 12.
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        int maxValue = 0;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int num = 0;
            if(i == 0 || i == 1) {
                num = nums[i];
            } else if(i == 2) {
                num = nums[i] + nums[i-2];
            } else {
                int temp = max(result[i-2], result[i-3]);
                num = nums[i] + temp;
            }
            result.push_back(num);
            if(num > maxValue) {
                maxValue = num;
            }
        }
        return maxValue;
    }
    
};