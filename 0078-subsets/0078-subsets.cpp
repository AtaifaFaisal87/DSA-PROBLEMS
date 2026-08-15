class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
        subset.push_back({});
        for (int i = 0; i < nums.size(); i++) {
            int n = subset.size();

            for (int j = 0; j < n; j++) {
                vector<int> temp = subset[j];
                temp.push_back(nums[i]);
                subset.push_back(temp);
            }
        }

        return subset;
    }
};