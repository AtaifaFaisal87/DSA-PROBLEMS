class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=INT_MIN;
        int min=INT_MAX;
     
        int profit;

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
        
        profit=prices[i]-min;

        if(max< profit)
        {
            max=profit;
        }

        }

        return max;
    }
};