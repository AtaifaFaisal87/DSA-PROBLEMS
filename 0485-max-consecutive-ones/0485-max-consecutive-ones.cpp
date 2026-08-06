class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_counter=0;
        int MaxStreak=0;

        for(int i=0;i < nums.size(); i++)
        {
            if(nums[i]==1)
            {
                current_counter+=nums[i];
            }
            else{
                MaxStreak=max(current_counter,MaxStreak);
                current_counter=0;
            }
        }

        return max(current_counter,MaxStreak);
    }
};