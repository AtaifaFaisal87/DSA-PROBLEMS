class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
        {
            return x;
        }

        long long int low=1;
        long long int high =x;
        long long int mid;
        int ans;

        while(low<=high)
        {
            mid=(high+low)/2;

            if(mid*mid==x)
            {
               return mid;
            }
            else if(mid*mid < x)
            {
              ans=mid;
              low=mid+1;
            }
            else{
                   high =mid-1;   
            }
        }

        return ans;
    }
};