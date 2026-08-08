class Solution {
public:
    void sortColors(vector<int>& nums) {
     int count[3];

        int value;
        for(int i=0;i<nums.size();i++)
        {
            value=nums[i];
            count[value] +=1;
        }

        int x=0,y=0;

        while(x<3)
        {
             if(count[x]!=0)
             {
                nums[y]=x;
                count[x]--;
                y++;
             }
             else{
                x++;
             }
        }
    
    }
};