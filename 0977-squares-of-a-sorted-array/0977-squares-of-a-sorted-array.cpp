class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size=nums.size();

        for(int i=0;i<size;i++)
        {
              nums[i]=nums[i]*nums[i];
        }

       quicksort(nums,0,size-1);
       return nums;
    }

int partition(vector<int>& v,int low,int high)
{
    int temp;
    int pivot=v[low];
    int i=low+1;
    int j=high;

   do
    {
        while (i <= high && v[i] <= pivot)
        {
            i++;
        }

        while (j >= low && v[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    } while (i < j);

    temp = v[low];
    v[low] = v[j];
    v[j] = temp;

    return j;

}

void quicksort(vector<int> &v, int low, int high)
{

    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(v, low, high);
        quicksort(v, low, partitionIndex - 1);
        quicksort(v, partitionIndex + 1, high);
    }
}

};