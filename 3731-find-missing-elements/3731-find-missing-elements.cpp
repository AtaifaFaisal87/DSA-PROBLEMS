class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;

        sort(nums.begin(), nums.end());

        for(int i = nums[0] + 1; i < nums[nums.size()-1]; i++)
        {
            bool found = false;

            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] == i)
                {
                    found = true;
                    break;
                }
            }

            if(!found)
                ans.push_back(i);
        }

        return ans;
    }
};