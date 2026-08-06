class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> count;

      for(int i = 0; i < nums.size(); i++)
    {
        count[nums[i]]++;
    }

     int max = 0;
    int ans;
    
    for(auto x :count)
    {
        if(x.second > max)
        {
            max = x.second; //the frequency
            ans = x.first; //the value
        }
    }
    return ans;
    }
};