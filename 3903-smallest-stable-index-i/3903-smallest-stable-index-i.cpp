class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minright(nums.size());

        int min = INT_MAX;

        for (int i = nums.size() - 1; i >= 0; i--) {

            if (nums[i] < min) {
                min = nums[i];
            }

            minright[i] = min;
        }

        int maxleft=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            maxleft=max(maxleft,nums[i]);

            if(maxleft-minright[i] <=k)
            {
                return i;
            }
        }

        return -1;
    }
};