class Solution {
public:
    int maxArea(vector<int>& height) {
        int Area;
        int n = height.size();
        int right = n - 1;
        int left = 0;
        int max = INT_MIN;
        while (left < right) {

            Area = min(height[left], height[right]) * (right - left);

            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }

            if (Area > max) {
                max = Area;
            }
        }

        return max;
    }
};