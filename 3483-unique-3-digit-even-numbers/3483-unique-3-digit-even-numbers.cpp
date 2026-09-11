class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> ans;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (digits[i] == 0) {
                        continue;
                    }
                    if (i == j || j == k || i == k) {
                        continue;
                    }
                    if (digits[k] % 2 != 0) {
                        continue;
                    }
                    ans.push_back(digits[i] * 100 + digits[j] * 10 + digits[k]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans.size();
    }
};