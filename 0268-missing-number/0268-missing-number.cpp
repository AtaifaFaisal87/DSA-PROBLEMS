class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n < 0)
        {
            return -1;
        }
        if(n == 0)
        {
            return 0;
        }

        long int series=(n * (n + 1)) / 2;
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }

        return series-sum;
    }
};