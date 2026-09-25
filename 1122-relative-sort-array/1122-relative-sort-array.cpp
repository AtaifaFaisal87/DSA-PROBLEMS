class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        sort(arr1.begin(), arr1.end());

        vector<int> ans;
        int j = 0;

        for (int i = 0; i < arr2.size(); i++) {
            j = 0;

            while (j < arr1.size()) {
                if (arr1[j] == arr2[i]) {
                    ans.push_back(arr1[j]);
                    arr1[j] = -1;
                }
                j++;
            }
        }

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                ans.push_back(arr1[i]);
            }
        }

        return ans;
    }
};