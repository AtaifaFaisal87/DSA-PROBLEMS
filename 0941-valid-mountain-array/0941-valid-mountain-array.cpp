class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)
        {
            return false;
        }

        int peak = 0;

    
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > arr[peak])
            {
                peak = i;
            }
        }

        if(peak == 0 || peak == arr.size() - 1)
        {
            return false;
        }

        for(int i = 0; i < peak; i++)
        {
            if(arr[i] >= arr[i + 1])
            {
                return false;
            }
        }

        for(int i = peak; i < arr.size() - 1; i++)
        {
            if(arr[i] <= arr[i + 1])
            {
                return false;
            }
        }

        return true;
    }
};