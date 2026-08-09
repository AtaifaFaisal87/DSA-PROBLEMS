class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;

        // Elements smaller than pivot
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < pivot)
            {
                result.push_back(nums[i]);
            }
        }

        // Elements equal to pivot
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == pivot)
            {
                result.push_back(nums[i]);
            }
        }

        // Elements greater than pivot
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > pivot)
            {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
    
};