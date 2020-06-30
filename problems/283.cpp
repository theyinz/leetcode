/**
 * Title: Move Zeroes
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator i = nums.begin();
        int zeroCount = 0;
        while (i != nums.end()) {
            if (*i == 0) {
                i = nums.erase(i);
                zeroCount++;
            } else {
                i++;
            }
        }
        while (zeroCount--) {
            nums.push_back(0);
        }
    }
};