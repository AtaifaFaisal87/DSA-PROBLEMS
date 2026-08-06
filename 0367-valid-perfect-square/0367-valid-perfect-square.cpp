class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1)
        {
            return true;
        }

        long long int high=num;
        long long int low=1;

        while(low<=high)
        {
            long long int mid=(high+low)/2;

            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid < num)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return false;
    }
};