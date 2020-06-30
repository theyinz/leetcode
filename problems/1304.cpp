/**
 * Title: Find N Unique Integers Sum up to Zero
 * 
 * Input: n = 5
 * Output: [-7,-1,1,3,4]
 * Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
 * 
 * Input: n = 3
 * Output: [-1,0,1]
 * 
 * Input: n = 1
 * Output: [0]
 * 
 */
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        if (n % 2 != 0) {
            result.push_back(0);
        }
        for(int i = 0, m = n / 2; i < m; i++) {
            result.push_back(i + 1);
            result.push_back(-(i + 1));
        }
        return result;
    }
};