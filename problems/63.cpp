/**
 * Title: Unique Paths II
 * 
 * Input:
 * [
 *   [0,0,0],
 *   [0,1,0],
 *   [0,0,0]
 * ]
 * Output: 2
 * Explanation:
 * There is one obstacle in the middle of the 3x3 grid above.
 * There are two ways to reach the bottom-right corner:
 * 1. Right -> Right -> Down -> Down
 * 2. Down -> Down -> Right -> Right
*/
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        unsigned int memo[110][110];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(obstacleGrid[i][j] == 1) {
                    memo[i][j] = 0;
                } else if (i == 0 && j == 0) {
                    memo[i][j] = 1;
                } else {
                    unsigned int temp = 0;
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