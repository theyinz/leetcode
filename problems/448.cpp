/**
 * Title: Find All Numbers Disappeared in an Array
 * 
 * Input:
 * [4,3,2,7,8,2,3,1]
 * 
 * Output:
 * [5,6]
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> counter;
        int maximumVal = nums.size();
        for (int num : nums) {
            maximumVal = max(maximumVal, num);
            
            counter[num] = 1;
        }
        
        
        
        vector<int> result;
        
        for (int i = 1; i <= maximumVal; i++) {
            if(counter.count(i) < 1) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};