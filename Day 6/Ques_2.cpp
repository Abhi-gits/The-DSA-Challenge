// Platform: Leetcode 
// Title : Best Time to Buy and Sell Stock II
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

// solution 


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, i;
        for (i = 0; i < prices.size()-1; i++)
        {
            if(prices[i] < prices[i+1])
            {
                profit += (prices[i+1] - prices[i]);
            }
        }
        return profit;
    }
};

// Time complexity : O(n)
// Space complexity : O(1)

// Python code:

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(len(prices)-1):
            if prices[i] < prices[i+1]:
                profit += prices[i+1] - prices[i]
        return profit