/**
 * Title: Happy Number
 * 
 * Input: 19
 * Output: true
 * Explanation: 
 * 1^2+ 9^2= 82
 * 8^2+ 2^2= 68
 * 6^2+ 8^2= 100
 * 1^2+ 0^2+ 0^2= 1
 */
class Solution {
public:
    bool isHappy(int n) {
        map<int, int> record;
        int num = n;
        while (num != 1) {
            if (record.count(num)) {
                return false;
            }
            record[num] = 1;
            int result = 0;
            while (num > 0) {
                result += pow(num % 10, 2);
                num = num / 10;
            }
            num = result;
        }
        return true;
    }
};