class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int size=nums.size();
        int even=0;
        for(int i=0;i<size;i++)
        {
            int count=0;
          int n=nums[i];
       while(n>0)
       {
        int digit=n%10;
        n=n/10;
        count++;
       }
       if(count%2==0)
       {
           even++;
       }
        }
        return even;
    }
};