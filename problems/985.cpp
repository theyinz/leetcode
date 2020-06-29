/**
 * Title: Sum of Even Numbers After Queries
 * 
 * Input: A = [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]]
 * Output: [8,6,2,4]
 * Explanation: 
 * At the beginning, the array is [1,2,3,4].
 * After adding 1 to A[0], the array is [2,2,3,4], and the sum of even values is 2 + 2 + 4 = 8.
 * After adding -3 to A[1], the array is [2,-1,3,4], and the sum of even values is 2 + 4 = 6.
 * After adding -4 to A[0], the array is [-2,-1,3,4], and the sum of even values is -2 + 4 = 2.
 * After adding 2 to A[3], the array is [-2,-1,3,6], and the sum of even values is -2 + 6 = 4.
*/
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> result;
        int sum = 0;
        for (int a : A) {
            if(a % 2 == 0)
                sum += a;
        }
        
        for (auto query : queries) {
            int num = query[0];
            int index = query[1];
            
            if (A[index] % 2 == 0) {
                sum -= A[index];
            }
            
            A[index] += num;
            
            if (A[index] % 2 == 0) {
                sum += A[index];
            }
            
            result.push_back(sum);
        }
        
        return result;
    }
};