class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        mergeSort(nums, low, high);

        return nums;
    }


    void mergeSort(vector<int>& nums, int low, int high)
    {
        if(low < high)
        {
            int mid = (low + high) / 2;

            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);

            merge(nums, low, mid, high);
        }
    }


    void merge(vector<int>& nums, int low, int mid, int high)
    {
        vector<int> v;

        int i = low;
        int j = mid + 1;


        while(i <= mid && j <= high)
        {
            if(nums[i] <= nums[j])
            {
                v.push_back(nums[i]);
                i++;
            }
            else
            {
                v.push_back(nums[j]);
                j++;
            }
        }


        while(i <= mid)
        {
            v.push_back(nums[i]);
            i++;
        }


        while(j <= high)
        {
            v.push_back(nums[j]);
            j++;
        }


        for(int i = low; i <= high; i++)
        {
            nums[i] = v[i-low];
        }
    }
};