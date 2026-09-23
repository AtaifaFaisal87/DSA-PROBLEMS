class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        // For every increase in t... the maximum x increases by 2
        return num + 2 * t;  
    }
};