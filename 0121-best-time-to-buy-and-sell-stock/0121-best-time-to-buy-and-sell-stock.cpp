class Solution {
public:
    int maxProfit(vector<int>& prices) {
   
    int maxProfit = INT_MIN;
    int minPrice = INT_MAX;

    for(int i = 0; i < prices.size(); i++)
    {
        // Find the lowest buying price seen so far
        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        // Calculate profit if we sell today
        int profit = prices[i] - minPrice;

        // Update maximum profit
        if(profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    return maxProfit;
    }
};