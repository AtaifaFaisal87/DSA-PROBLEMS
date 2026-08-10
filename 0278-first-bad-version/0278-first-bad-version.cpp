// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long int high=n;
        long int low=1;

        while(low< high)
        {
           long long int mid=(high+low)/2;

           if(isBadVersion(mid))
           {  
             high=mid;
           }
           else{
             low=mid+1;
           }
        }

        return low;
    }
};