/**
 * Title: Find All Duplicates in an Array
 * 
 * Input:
 * [4,3,2,7,8,2,3,1]
 * 
 * Output:
 * [2,3]
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> data;
        vector<int> result;
        for (int num : nums) {
            if (data.count(num) > 0) {
                result.push_back(num);
            } else {
                data[num]++;
            }
        }
        return result;
    }
};