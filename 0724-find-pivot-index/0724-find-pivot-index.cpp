class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int sum = accumulate(nums.begin(), nums.end(), 0);

int suml=0;
int sumr=0;
     for(int i=0;i<nums.size();i++)
     {
         sumr=sum-suml-nums[i];
         if(sumr==suml)
         {
            return i;
         }
         
         suml+=nums[i];
     }

     return -1;
    }
};