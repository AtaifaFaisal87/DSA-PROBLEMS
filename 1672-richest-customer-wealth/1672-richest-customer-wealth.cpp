class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth;
        int rows=accounts.size();
        int col=accounts[0].size();

        for(int i=0;i<rows;i++)
        {
            int sum=0;

            for(int j=0;j<col;j++)
            {
               sum+=accounts[i][j];
               wealth.push_back(sum);
            }
        }

int max=0;
        for(int i=0;i<wealth.size();i++)
        {
if(wealth[i]>max)
{
    max=wealth[i];
}
        }
          return max;
    }

  
};