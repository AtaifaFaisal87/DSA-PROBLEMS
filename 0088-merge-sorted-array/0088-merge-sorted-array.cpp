class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
       int i=0;
       int j=0;
       int k=0;
        
        vector<int> v(m+n);

        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                v[k]=nums1[i];
                k++;
                i++;
            }
           else if(nums1[i]>nums2[j])
            {
                v[k]=nums2[j];
                k++;
                j++;
            }
            else{
                v[k]=nums1[i];
                k++;
                i++;
                v[k]=nums2[j];
                k++;
                j++; 
            }
        }

        while(i<m)
        {
                  v[k]=nums1[i];
                k++;
                i++; 
        }

        while(j<n)
        {
              v[k]=nums2[j];
                k++;
                j++; 
        }

        for(int i=0;i<m+n;i++)
        {
            nums1[i]=v[i];
        }
    }
};