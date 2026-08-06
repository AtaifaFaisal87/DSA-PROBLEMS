class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     int n=nums.size();
     vector<int> runningsum(n);
     runningsum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           runningsum[i]=runningsum[i-1]+nums[i];   
        }
        return runningsum;
    }
};