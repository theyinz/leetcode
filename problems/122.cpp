/**
 * Title: Best Time to Buy and Sell Stock II
 * 
 * Input: [7,1,5,3,6,4]
 * Output: 7
 * Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
 *              Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
 * 
 * Input: [1,2,3,4,5]
 * Output: 4
 * Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
 *              Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are
 *              engaging multiple transactions at the same time. You must sell before buying again.
 * 
 * Input: [7,6,4,3,1]
 * Output: 0
 * Explanation: In this case, no transaction is done, i.e. max profit = 0.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int curr = -1;
        for(int i = 0; i < prices.size(); i++) {
            if (curr == -1) {
                if(i != prices.size() - 1 && prices[i] < prices[i+1]) {
                    curr = prices[i];
                }
            } else {
                if (prices[i] > curr) {
                    if (i != prices.size()-1 && prices[i+1] > prices[i]) {
                        continue;
                    }
                    profit += prices[i] - curr;
                    curr = -1;
                }
            }
        }
        return profit;
    }
};