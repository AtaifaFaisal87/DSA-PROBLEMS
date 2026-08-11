class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
       vector<int> v;

       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]%2==0)
        {
            v.push_back(0);
        }
        else{
            v.push_back(1);
        }
       } 

       sort(v.begin(),v.end());
       return v;
    }
};