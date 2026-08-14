class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1=0;
        int sum2=0;
        int n=mat.size();

        for(int i=0;i<mat.size();i++)
        {
            sum1+=mat[i][i];
            if(i == n - 1 - i)
            {
                continue;
            }
            sum2+=mat[i][n-1-i];
        }
        
        return sum1+sum2; 
    
    }
};