/**
 * Title: Unique Paths
 * 
 * Input: m = 3, n = 2
 * Output: 3
 * Explanation:
 * From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
 * 1. Right -> Right -> Down
 * 2. Right -> Down -> Right
 * 3. Down -> Right -> Right
 * 
 * Input: m = 7, n = 3
 * Output: 28
*/
class Solution {
public:
    int uniquePaths(int m, int n) {
        int memo[110][110];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 && j == 0) {
                    memo[i][j] = 1;
                } else {
                    int temp = 0;
                    if (i != 0) {
                        temp += memo[i-1][j];
                    }
                    if (j != 0) {
                        temp += memo[i][j-1];
                    }
                    memo[i][j] = temp;
                }
            }
        }
        return memo[n-1][m-1];
    }
};