class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> Area;
        int n = height.size();
        int right = n - 1;
        int left = 0;

        while (left < right) {

            Area.push_back(min(height[left], height[right]) * (right - left));

            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }

        int max = INT_MIN;

        for (int i = 0; i < Area.size(); i++) {
            if (Area[i] > max) {
                max = Area[i];
            }
        }

        return max;
    }
};