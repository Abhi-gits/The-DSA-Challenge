// Platform: Leetcode 
// Title : Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// Solution:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0, i;
        for(i = 1;i < prices.size();i++)
        {
            if(prices[i] < buy)
            {
                buy = prices[i];
            }
            else if(prices[i] - buy > profit)
            {
                profit = prices[i] - buy;  
            }
        }
        return profit;
    }
};