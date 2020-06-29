/**
 * Title: Distribute Candies
 * 
 * Input: candies = [1,1,2,2,3,3]
 * Output: 3
 * Explanation:
 * There are three different kinds of candies (1, 2 and 3), and two candies for each kind.
 * Optimal distribution: The sister has candies [1,2,3] and the brother has candies [1,2,3], too. 
 * The sister has three different kinds of candies. 
 * 
 * Input: candies = [1,1,2,3]
 * Output: 2
 * Explanation: For example, the sister has candies [2,3] and the brother has candies [1,1]. 
 * The sister has two different kinds of candies, the brother has only one kind of candies. 
*/
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int totalCandy = candies.size();
        
        map<int, int> candiesMap;
        
        for (auto candy : candies) {
            candiesMap[candy]++;
        }
        
        int totalCandyType = candiesMap.size();
        
        int each = totalCandy/2;
        
        if (totalCandyType >= each) {
            return each;
        }
        return totalCandyType;
    }
};