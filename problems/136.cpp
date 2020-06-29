/**
 * Title: Single Number
 * 
 * Input: [2,2,1]
 * Output: 1
 * 
 * Input: [4,1,2,1,2]
 * Output: 4
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (auto num: nums) {
            result = result ^ num;
        }
        return result;
    }
};