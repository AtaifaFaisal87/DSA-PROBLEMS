class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++)
        {
            int minValue = matrix[i][0];
            int col = 0;

 
            for(int j = 1; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] < minValue)
                {
                    minValue = matrix[i][j];
                    col = j;
                }
            }

           
            bool lucky = true;

            for(int k = 0; k < matrix.size(); k++)
            {
                if(matrix[k][col] > minValue)
                {
                    lucky = false;
                    break;
                }
            }

            if(lucky)
            {
                ans.push_back(minValue);
            }
        }

        return ans;
    }
};